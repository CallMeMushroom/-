//////////////////
//��̬ͼ��ʾ�ű�//
//���ߣ���Զ��  //
//////////////////
#pragma once
#include<stdio.h>
#include<easyx.h>
#include<graphics.h>
//(����ͼ·��,	��֡��,	ѭ������,	�������Ͻ�x����,	�������Ͻ�y����,	�������	,�����߶�)
void showgif(
	LPCTSTR path, 
	int strip, 
	int time, 
	int x, 
	int y, 
	int w,
	int h
	)
{
	IMAGE gif;
	loadimage(&gif, path, w * strip, h);
	int widt = w;
	int heig = h;
	int i=0;
	while (true) 
	{

		putimage(
			x,
			y,
			widt, heig,
			&gif,
			i * widt, 0);
		FlushBatchDraw();
		Sleep(100);
		i++;
		if (i == strip && time ==1)break;
		if (i == strip && time > 1) {
			i = 0;
			time--;
		}
	}
}