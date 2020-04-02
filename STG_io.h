//���ܺ���
#pragma once

#include <stdio.h>//��׼�������
#include <stdlib.h>//��׼��
#include <conio.h>//���̽���
#include <math.h>//��ѧ
#include <Windows.h>//ϵͳ
#include <string.h>//�ַ���
#include <graphics.h>
#include <easyx.h>

#include"STG_define.h"
#include"STG_global.h"


//�������溯��=============================================================================================

//�ı��ٶ�
//��Ŀ��ʵ�壬Ŀ���ٶȣ�Ŀ�귽��
void velocity_obj(int i, double speed, double angel)
{
	object[i].velocity = speed;
	object[i].Vangel = angel;
}
void velocity_bul(int i, double speed, double angel)
{
	bullet[i].velocity = speed;
	bullet[i].Vangel = angel;
}

//��ü��ٶ�
//��Ŀ��ʵ�壬���ٶȣ����ٶȷ���
void accelerate(Object str, double speed, double angel)
{
	str.velocity = sqrt(pow(str.velocity, 2) + pow(speed, 2) - 2 * str.velocity * speed * cos(str.Vangel - angel + pi));
	str.Vangel = str.Vangel + asin
	(
	(
		speed * sin(
			str.Vangel - angel + pi
			)
		) / str.velocity
		);
}

//������ʾ��غ���=========================================================================================

//��ʾ͸������
//��ʵ���ţ�
void transparent(int i)
{
	IMAGE I = *object[i].sprite.img[0];
	int tstrip = object[i].sprite.strip;
	int tframe = object[i].sprite.frame;
	int widt = I.getwidth() / tstrip;
	int heig = I.getheight();

	putimage(
		object[i].x - widt / 2,
		object[i].y - heig / 2,
		widt, heig,
		object[i].sprite.img[1],
		(tframe - 1) * widt, 0, SRCAND);// ��ʾ�ɰ�
	putimage(
		object[i].x - widt / 2,
		object[i].y - heig / 2,
		widt, heig,
		object[i].sprite.img[0],
		(tframe - 1) * widt, 0, SRCPAINT);//��ʾͼƬ
	
}void animesprite(int i, int x, int y)
{
		if (spr[i].clock == 0) {
			spr[i].clock = spr[i].speed;
			if (spr[i].frame != spr[i].strip)
				spr[i].frame++;
			else
				spr[i].frame = 1;
		}
	IMAGE I = *spr[i].img[0];
	int tstrip = spr[i].strip;
	int tframe = spr[i].frame;
	int widt = I.getwidth() / tstrip;
	int heig = I.getheight();

	putimage(
		x - widt / 2,
		y - heig / 2,
		widt, heig,
		spr[i].img[1],
		(tframe - 1) * widt, 0, SRCAND);// ��ʾ�ɰ�
	putimage(
		x - widt / 2,
		y - heig / 2,
		widt, heig,
		spr[i].img[0],
		(tframe - 1) * widt, 0, SRCPAINT);//��ʾͼƬ

	spr[i].clock--;
}

//���������ɣ����ʵ��
//�������ʵ��[���Ա��]��
void activate_object(Object object)
{
	object.isused = 1;
	object.NO = objno;
	objno++;
}

//����ʵ��
//����ͼ���,��ʼ�ٶ�,��ʼλ��x,��ʼλ��y,��ʼ�ٶȽǶ�,��ײ��⣬��ȣ�֡����
void create_object(int picture_number, double speed, int x, int y, double angel, int hitbox, int deep, int tstrip)
{
	objno++;
	int i = objno;
	object[i].isused = 1;
	object[i].sprite.img[1] = &picture[picture_number][1];
	object[i].sprite.img[0] = &picture[picture_number][0];
	object[i].x = x;
	object[i].y = y;
	object[i].velocity = speed;
	object[i].Vangel = angel;
	object[i].hitbox =hitbox;
	object[i].depht = deep;
	object[i].sprite.strip = tstrip;
	object[objno].NO = objno;
}//����״��,��ʼ�ٶ�,��ʼλ��x,��ʼλ��y,��ʼ�ٶȽǶ�,��ײ�뾶����ȣ�
void create_bullet(int type, double speed, int x, int y, double angel, int hitbox, int deep ,COLORREF color,int group)
{
	bulno++;
	int i = bulno;
	bullet[i].isused = 1;
	bullet[i].type = type;
	bullet[i].x = x;
	bullet[i].y = y;
	bullet[i].velocity = speed;
	bullet[i].Vangel = angel;
	bullet[i].hitbox = hitbox;
	bullet[i].depht = deep;
	bullet[i].color = color;
	bullet[i].group = group;
	bullet[bulno].NO = bulno;
}

//�ƻ�ʵ��
//���ƻ�Ŀ��ʵ�壩
void destory(Object obj) {
	int i;
	for (i = obj.NO; i < objno; i++)
	{
		object[i] = object[i + 1];
		object[i].NO--;
	}
	object[--objno].isused = 0;
}
void destory(Bullet bul) {
	int i;
	for (i = bul.NO; i <= bulno; i++)
	{
		bullet[i] = bullet[i + 1];
		bullet[i].NO--;
	}
	bullet[bulno--].isused = 0;
}

//��ײ���
//�������ʵ��a��������ӵ�b��
int hit(Object a,Bullet b) 
{
	int distance = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
	int totalhitbox = a.hitbox + b.hitbox;
	if (totalhitbox <= distance) {
		return 0;
	}
	else {
		return 1;
	}
}

//������������ţ��Ƿ�͸����
void anime(int i,int j) {
	putimage(0, 0, &white);
	if (vedio[i].sprite.clock == 0) {
		vedio[i].sprite.clock = vedio[0].sprite.speed;
		if (vedio[i].sprite.frame != vedio[0].sprite.strip)
			vedio[i].sprite.frame++;
		else
			vedio[i].sprite.frame = 1;
	}
	IMAGE I = *vedio[i].sprite.img[0];
	int tstrip = vedio[i].sprite.strip;
	int tframe = vedio[i].sprite.frame;
	int widt = I.getwidth() / tstrip;
	int heig = I.getheight();
	if (j == 0) {
		putimage(
			vedio[i].x - widt / 2,
			vedio[i].y - heig / 2,
			widt, heig,
			vedio[i].sprite.img[0],
			(tframe - 1) * widt, 0);//��ʾͼƬ

	}
	if (j == 1) {
		putimage(
			vedio[i].x - widt / 2,
			vedio[i].y - heig / 2,
			widt, heig,
			vedio[i].sprite.img[1],
			(tframe - 1) * widt, 0,SRCAND);//��ʾ�ɰ�
		putimage(
			vedio[i].x - widt / 2,
			vedio[i].y - heig / 2,
			widt, heig,
			vedio[i].sprite.img[0],
			(tframe - 1) * widt, 0, SRCPAINT);//��ʾͼƬ
	}
	
	vedio[i].sprite.clock--;
}


void anime_line(COLORREF col) {
	setlinecolor(col);
	int w = rand() % WIDTH;
	int h = rand() % HIGH;
	line(w, 0, w, 900);
	w = rand() % WIDTH;
	h = rand() % HIGH;
	line(w, 0, w, 900);
	w = rand() % WIDTH;
	h = rand() % HIGH;
	line(w, 0, w, 900);
	w = rand() % WIDTH;
	h = rand() % HIGH;
	line(w, 0, w, 900);
	w = rand() % WIDTH;
	h = rand() % HIGH;
	line(w, 0, w, 900);
	w = rand() % WIDTH;
	h = rand() % HIGH;
	line(w, 0, w, 900);
}

void dialogue(IMAGE I[2], LPCTSTR str) {
	void blanktime();
	static int i;
	i = 0;
	int num = CString(str).GetLength();
	num = num / 8;
	settextstyle(30, 0, _T("�ʲ��鷿"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	while (true)
	{
		cleardevice();
		anime_line(BLACK);
		int w = rand() % 100;
		int h = rand() % 200 + 100;
		int W = rand() % 373;
		int H = rand() % 700;
		putimage(w, h, 200, 200, &I[1], W, H, SRCAND);
		putimage(w, h, 200, 200, &I[0], W, H, SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, 200, 200, &I[1], W, H, SRCAND);
		putimage(w, h, 200, 200, &I[0], W, H, SRCPAINT);
		i++;
		if (i == 30)break;
		FlushBatchDraw();
		blanktime();
	}
	i = 0;
	while (true)
	{
		if ((GetAsyncKeyState(VK_SPACE) & 0x8000) && i < fps * num)i = fps * num;//�ո�����
		cleardevice();
		outtextxy(300 - i, 480, str);//"���֣���ҽ���������¿�����ҽ�����������л������ߵĲ����������ˣ���"
		putimage(0, 200 + i, &I[1], SRCAND);
		putimage(0, 200 + i, &I[0], SRCPAINT);
		if (i > fps * num) {
			anime_line(BLACK);
			i = i + 100;
		}
		i++;
		FlushBatchDraw();
		if (i > 900)break;
		blanktime();
	}

}

void dialogue(LPCTSTR str) {
	void blanktime();
	static int i;
	int num = CString(str).GetLength();
	num = num / 8;
	i = 0;
	settextstyle(30, 0, _T("�ʲ��鷿"));
	settextcolor(BLACK);
	setbkmode(OPAQUE);
	while (true)
	{
		cleardevice();
		anime_line(BLACK);
		i++;
		if (i == 30)break;
		FlushBatchDraw();
		blanktime();
	}
	i = 0;
	while (true)
	{
		if ((GetAsyncKeyState(VK_SPACE) & 0x8000) && i < fps * num)i = fps * num;//�ո�����
		cleardevice();
		outtextxy(300 - i, 480, str);//"���֣���ҽ���������¿�����ҽ�����������л������ߵĲ����������ˣ���"
		if (i > fps * num) {
			anime_line(BLACK);
			i = i + 100;
		}
		i++;
		FlushBatchDraw();
		if (i > 900)break;
		blanktime();
	}

}
void dialogue_white(LPCTSTR str) {
	void blanktime();
	static int i;
	int num = CString(str).GetLength();
	num = num / 8;
	i = 0;
	settextstyle(30, 0, _T("�ʲ��鷿"));
	settextcolor(WHITE);
	setbkmode(OPAQUE);
	while (true)
	{
		cleardevice();
		anime_line(DARKGRAY);
		i++;
		if (i == 30)break;
		FlushBatchDraw();
		blanktime();
	}
	i = 0;
	while (true)
	{
		if ((GetAsyncKeyState(VK_SPACE) & 0x8000) && i < fps * num)i = fps * num;//�ո�����
		cleardevice();
		outtextxy(300 - i, 480, str);//"���֣���ҽ���������¿�����ҽ�����������л������ߵĲ����������ˣ���"
		if (i > fps * num) {
			anime_line(DARKGRAY);
			i = i + 100;
		}
		i++;
		FlushBatchDraw();
		if (i > 900)break;
		blanktime();
	}

}

void backanime(IMAGE bg) 
{
	static int i = 0;
	int widt = bg.getwidth();
	int heig = bg.getheight();
	putimage(object[0].x / 3, i + object[0].y / 3, &bg);
	putimage(object[0].x / 3-widt, i + object[0].y / 3, &bg);
	putimage(object[0].x / 3, i-heig + object[0].y / 3, &bg);
	putimage(object[0].x / 3-widt, i-heig + object[0].y / 3, &bg);
	putimage(object[0].x / 3, i -2* heig + object[0].y / 3, &bg);
	putimage(object[0].x / 3 - widt, i -2* heig + object[0].y / 3, &bg);
	i++;
	if (i == heig)i = 0;
}

int clockcheck(int group, int clocknumber) {
	int i;
	for (i = 0; i <= bulno; i++) {
		if (bullet[i].group == group) 
			if(bullet[i].clock[clocknumber]==0){
				return 1;
				break;
		}
	}
	return 0;
}

void setclock(int group, int clocknumber, int clocktime,int temp) {
	int i;
	for (i = 0; i <= bulno; i++) 
		if (bullet[i].group == group) {
			bullet[i].tempdate = temp;
			bullet[i].clock[clocknumber] = clocktime;
		}
}