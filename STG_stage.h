#pragma once
#include <stdio.h>//��׼�������
#include <stdlib.h>//��׼��
#include <conio.h>//���̽���
#include <math.h>//��ѧ
#include <Windows.h>//ϵͳ
#include <string.h>//�ַ���
#include <graphics.h>
#include <easyx.h>

#include"STG_io.h"
#include"STG_define.h"
#include"STG_global.h"
#include"STG_thread.h"
#include"STG_anime.h"
void dialogue_1() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(crarcter_assistant, _T("���֣�ҽ���������¿�����ҽ�����������л������ߵĲ����������ˣ�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��õģ���֪���ˣ�лл�㣡���������ɣ�"));
	dialogue(_T("����ôһ�������ǵ�995λ�����ˣ��롰�Ǹ�Ŀ�ꡱ���������ˣ�"));
	dialogue(_T("���ߣ������ˡ���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�û��ϵ�ģ���������ţ�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����������ϣ������������������ôҲ����"));
	dialogue(_T("ϣ�������ף��������װ���С�����¿����ȣ�"));
	dialogue(_T("ϣ�������ף���Ҳû�뵽�����һ�����������������ط�"));
	dialogue(_T("ϣ�������ף�ǰ�����ҷ����Լ�Ⱦ��������")); 
	dialogue(_T("ϣ�������ף�������Ĵ��ε���ҽ��ʱ��С��Ⱦ�ϵİ�")); 
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������������Ϊ��������������˽�ر��������ߵĵ�һ��"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�17��ǰ��ĸ��������ȥ����Ҳ�����������ҡ����ҽ̻�����ҽ��")); 
	dialogue(crarcter_doctor, _T("�����¿����ȣ���ģ������Ǹм�����"));
	dialogue(_T("ϣ�������ף��������㣬Ҳֻ�ǳ��ڶ�û�ܾȻ���ĸ�׵����������ΰ���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ����ǡ���"));
	dialogue(_T("ϣ�������ף�����Ϊ������"));
	dialogue(_T("ϣ�������ף�С�����¿����Ȱ�������������û����������"));
	dialogue(_T("ϣ�������ף�������˵Ĵ������������ҡ���˵���ˣ���ʵ�����ɱĸ���ˡ���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��Ų���������ϣ�����������������Ƕ�֪�����������������ˣ�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ����Űɣ���һ�����κ���ģ�"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(5000);
}

void dialogue_1pass() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(crarcter_doctor, _T("�����¿����ȣ������������ǳɹ��ˡ�ϣ�������������������վ����Ǳ�ס��"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹�������¿����ȣ����Ҳ�ɵò�����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ����Ҳ�Ƕ���������ˣ���˹����Ƥ��˹����"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹�����������ǣ��ҵ�Э�������������é®������ҽ������Ҳ���൱��Ҫ��"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹��ƽ��������������Ϊ������ҽ��������һ���ҵ�ҽ�������ļӳ�"));
	dialogue(crarcter_kami, _T("������˹����Ƥ��˹���������󡣹���Ҳ������������˰�"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹��������ҲҪ�μ����ֹ�ͨ�ӳֵķ��ա���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���֪���ģ����в������ͻ��ò��˲���Ѹ�ٶ���ȥ"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����Ҳ��������Σ��"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹����ס�ͺ�"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹������������Ҳ���ں���λ�������װɡ���һ��Ҫ��ס������Ǽһ�"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹�����������Ҷ���ɵ��Ĵ���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���л�����Ҹ棬�һ�ע���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���λ��������˹���˵��£�Ҳ�Ѿ��ӽ�β��"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹����Ҳ������"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹����Щ���飬����Ӧ�õ�"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_2() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(_T("                    ����"));
	dialogue(crarcter_assistant, _T("       ���֣�ҽ�������в������ˣ�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��õģ�������������"));
	dialogue(crarcter_assistant, _T("       ���֣��õģ�"));
	dialogue(_T(""));
	dialogue(crarcter_doctor, _T("�����¿����ȣ����ã�����"));
	dialogue(_T("��������ҽ�����ã��ҵ������ǰ�������һλ���ӵ�ĸ��"));
	dialogue(_T("�������ҵļ���ʮ��ƶ���������������ⳡ���߸����Ǵ����˼���"));
	dialogue(_T("������������Ϊ�˸�����Ѱ��ʳ�������ֲ��ò������ڴ��С���У��������"));
	dialogue(_T("�������ܶԲ����������ҵ�СŮ�����ȣ���Ⱦ����������ֵĲ�����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������������Ҳʮ��ʹ�ġ�"));
	dialogue(_T("����������ҽ�������Ⱦ��Ұɣ��Ҹ�Ը��Ϊ�������������Ķ���"));
	dialogue(_T("������������Ҳ����Ҫ�ң�����Ҳ����˵Ļ��������͡���"));
	dialogue(crarcter_doctor, _T("����ݳ��ظУ������ǡ�����ô���£���"));
	dialogue(crarcter_doctor, _T("��17��ǰ��ϣ���������������Ǹ�ʱ����Եġ���Ҳ�������������𣿣�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��õģ���һ����ģ�������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����������Ů�����ⳡ���߹�ȥ��")); 
	dialogue(crarcter_doctor, _T("�����¿����ȣ��ܹ�����ƽ�����Ҹ����ճ�"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_2pass() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹�����¾��ǵ�996λ������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��ǵģ����밢��˹���˵Ĵ�ĵ�ʤ�����ָ�����һ��"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹������˹�Ǹ��쵰�����˹���Ҳ����Ȼ�����������"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹�����뿴���Ǳ��顭���һ��Ǻ����⿴����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���������˹����Ҳ˵�ˣ���֮����Ҫ�������ߣ�ԭ�������ڡ���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����֮��Ƶ����ս������ʹ��ս��"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������ǿ������İ�Ȩս�����Ѿ����׽�����ŭ��"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹�����������������߽����˼�Ҳ���ǡ�������Ļ����˼��޹���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����      "));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_3() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(crarcter_assistant, _T("���֣�ҽ����ҽ�������л����ˣ�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������������"));
	dialogue(crarcter_assistant, _T("���֣������ɡ����ǡ���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���ô����"));
	dialogue(crarcter_assistant, _T("���֣��Ǹ��ˡ������Ǹ�ǿ������������")); 
	dialogue(crarcter_assistant, _T("���֣�������ĸ��ȥ����Ǳ�����ļ���������һ��˽���ǿ����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����      "));
	dialogue(crarcter_assistant, _T("���֣�����ȷ��Ҫ����������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��������������ɣ���Щ���Ѿ��ǹ�ȥ������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���Ȼ�����ܻ����ǣ���Ҳû��Ҫ������ʱ�������� "));
	dialogue(crarcter_doctor, _T("�����¿����ȣ����ң�������ҽ������ְ��ҽ�����ģ��Դ�����Ҫһ��ͬ��"));
	dialogue(crarcter_assistant, _T("���֣��á����õġ���"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_3pass() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹���������㰡��СѾͷ���������ػ����Һ�ϲ��"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹��������Ҳ�����ܹ����Ҳ������Ӳ��һ���ҵ�������ԭ������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���������ɣ�������Ҳֻ�Ǹ�������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������������Щ��ޣ�������ǰ��������ֵ������ȥ��ע")); 
	dialogue( _T("(�ǵģ��������ֻ�Ǽ�ס��Щ��ޡ��������罫�ݳ�޻����Կ����ߵ�����)"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_4() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(crarcter_doctor, _T("�����¿����ȣ����ã������"));
	dialogue(_T("   ������������     "));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������Ҳ��Ҫ�������β����𣿻��ǡ���"));
	dialogue(_T("��������ҽ������������ǿ����¿����Ȱ�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�û����ô����"));
	dialogue(_T("����������ĸ��ס�����������������һ��ʿ����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��ǵģ����������Һ�С��ʱ���������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ������Ҹ��׵Ĺ��ˣ�"));
	dialogue(_T("   ������������     "));
	dialogue(_T("��������ҽ�����������ɱ���㸸�׵������й�ʿ��"));
	dialogue(_T("������������������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����"));
	dialogue(_T("ս����20����ǰ�����Ҷ�ȥ���������ӵ��������ƻ�����ļ�ͥ"));
	dialogue(_T("ս����ʹ�����ĸ�׳�Ϊ�˶��Ը���Ů���ĹѸ�"));
	dialogue(_T("ս���������ҵ�һ��ɱ�ˣ�Ҳ�����һ��")); 
	dialogue(_T("ս�����Ҿ�ս���ˣ���Ҳ��Ϊ��ս��"));
	dialogue(_T("ս����������ɺ޵�ս����ɱ���Ѿ���Ϊ��������Ȼ����"));
	dialogue(_T("ս����Ҳ������Ϊ��ս�����Ҳ���Ϊ��ɱ�˷�������������������Ϊս��"));
	dialogue(_T("ս����������ҵĴ������Ⱦ������������Ҳ���ϲԸ����ҵĳͷ�"));
	dialogue(_T("ս�������Ӱ���������ԵĻ�����ϣ��������������ɱ����"));
	dialogue(_T("ս�����������˫���ս��ҵ����������Ҳ������õĽ����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���������һ��ҽ��"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�ҽ�����֣�������������������������������������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��������Ҳ�֪����������˭�����ǣ����������ҵ���ְ"));
	dialogue(_T("ս�������������������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��ǵģ���������������Ĵ󵨵ؽ������Ұ�"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_4pass() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹��СѾͷ���м��£��ұ���Ҫ��������"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹���ҵ�Э����ֻ��ά�ֵ�������"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹��������������ȥ��������������ܾ����Ҫ��ȫɥʧ��"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹��������ڽ�����������Ǿ���Ҫ�������۵�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��������ۡ������ǡ���"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��������뽵���ⳡ���ߵİ���˹���˴����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�ֻҪ�Ȼ�һǧ�ˣ��ⳡ���߾�һ�������Ƭ�������ʧ"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�û�������������ҡ����ҿ��ܡ���"));
	dialogue(_T("��˹����Ƥ��˹��û����ġ��㾭��������ô��ο���"));
	dialogue(_T("��������û���ҵ������ļӻ�����Ҳһ����ƾ���Լ�������սʤ���߰�"));
	dialogue(_T("��Ҳ�ǡ�����ϣ��������������ҵ�����֮��"));
	dialogue(_T("�ʹ˱���ɣ�С�����¿�����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������֪����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ���ô���죬�������Ĺ����ˣ���˹����Ƥ��˹����"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	setbkmode(OPAQUE);
	cleardevice();
	FlushBatchDraw();
	
	for (i = 0; i < 240; i++) {
		setbkcolor(RED);
		cleardevice();
		int w = rand() % 2;
		outtextxy(100+w, 450+w, _T("������Ϊ1��������ʧ���ӵ�ǰ�ؿ���ʼ�ص�������Ч"));
		anime_line(BLACK);
		FlushBatchDraw();
		blanktime();
	}
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_5() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(_T("                �����      "));
	dialogue(_T("�����������ã������ǿ����¿�����ҽ����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��ǵģ���ʲô���԰���������"));
	dialogue(_T("�����������Ǹ����������������������Ǹ�ʲô�������"));
	dialogue(_T("�����������Ҿ����Ͻ����ߣ����һ����С�ľ�Ⱦ����"));
	dialogue(_T("���������񣺲��������ڲ�ͬ���Ǹ�ʱ����Ҳ������ô������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ������ðɣ���֪���ˡ��һᾡ�������"));
	dialogue(crarcter_doctor, _T("�����������𡭡�û�а�˹����Ƥ��˹���˵�Э��������"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_5pass() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(crarcter_doctor, _T("������ı������е�Ҫ�򵥣�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������������ֻʣ��һ�����ˡ���"));
	dialogue(crarcter_assistant, _T(" ���֣������¿�����ҽ�������Ѿ����������ܳ�ʱ����"));
	dialogue(crarcter_assistant, _T(" ���֣��о��������е㲻��״̬������Ҫ��Ϣһ����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�лл����û��"));
	dialogue(crarcter_doctor, _T("�����ˣ���Ҫʵ���Ǹ�Ŀ���ˣ�"));
	dialogue(crarcter_doctor, _T("������˹���ˡ������½�ƾ������������֮������Ҳ������ģ����Űɣ���"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_6() {
	fps = 60;
	static int i = 0;
	setbkcolor(0xC7F2F8);
	cleardevice();
	FlushBatchDraw();
	dialogue(_T("                һ���"));
	dialogue(_T("��������Ӵ���Ǹ�ʲô��ҽ���������"));
	dialogue(_T("���������������ҿ��������⵽������ô�����ˣ�"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�������λ�����������Ե�"));
	dialogue(_T("�������������Ҷ���Ҳ���������ˣ����⺢�Ӱ�����"));
	dialogue(_T("��һ�����ߵĸ��ף����Ǵ�С���󶼺ܲ��ҵ�����"));
	dialogue(_T("��һ�����ߵĸ��ף�ʲô�������ǻ�Ī�����������ͷ�ϡ���������������Ҫ����ôԶ����"));
	dialogue(_T("��һ�����ߵĸ��ף�ι��������˵���𣿣�"));
	dialogue(_T("��һ�����ߵĸ��ף���㣬���ҿ�������ҽ�������ְ����Ǿ��β��˰ɣ�"));
	dialogue(_T("��һ�����ߵĸ��ף���Ҳ�ǻ��ߣ���ĥ���ˣ��Ͻ������κð��쵰��"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����ע������Դ�"));
	dialogue(_T("��һ�����ߵĸ��ף�������������ʲô̬�ȣ���"));
	dialogue(_T("��һ�����ߵĸ��ף���ƾʲô��������������˵���������ֲ��᲻����Ǯ��"));
	dialogue(crarcter_assistant, _T("���֣�ҽ������λ���������ʡ���"));
	dialogue(_T("��һ�����ߵĸ��ף�Ҫ�������������������׬�������Ǯ��"));
	dialogue(_T("��һ�����ߵĸ��ף��м��Ҷ����������ɣ�"));
	dialogue(crarcter_assistant, _T("       ���֣��㣡       "));
	dialogue(crarcter_doctor, _T("���⻰Ҳ̫�����˰ɡ������ˣ����̾͹�ȥ�ˡ�����"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ��ðɣ���֪���ˣ�����"));
	dialogue(crarcter_assistant, _T("       ���֣�ҽ������   "));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}

void dialogue_lost() {
	fps = 60;
	static int i = 0;
	setbkcolor(BLACK);
	cleardevice();
	FlushBatchDraw();
	dialogue_white(_T("                    �� �� �� ��"));
	dialogue_white(_T("                    ����ֵ��Ϊ0"));
	dialogue_white(_T(""));
	dialogue_white(_T(""));
	dialogue_white(_T("           ��ι�������¿����ȣ�ι��������"));
	dialogue_white(_T("          �������¿����ȣ�������һ�㣡����"));
	dialogue_white(_T("      ������û�취�ˡ�����ֻ���ٻ���һ�Ρ����� "));
	dialogue_white(_T("          ��������ȥ����������һ�졭����      "));
	setbkcolor(WHITE);
	dialogue(_T("                  "));
	dialogue(crarcter_doctor, _T("�����¿����ȣ������ǡ���"));
	dialogue(crarcter_assistant, _T("���֣�ҽ�������������������"));
	dialogue(crarcter_doctor, _T("�����¿����ȣ�����֪���ˣ�����͹�ȥ"));
	dialogue(crarcter_kami, _T("��˹����Ƥ��˹������"));
	i = 0;
	loadimage(&blood[0], _T("image\\title\\blood.png"));
	loadimage(&blood[1], _T("image\\title\\blood_mask.png"));
	while (true)
	{
		i++;
		if (i > 30)break;
		int w = rand() % WIDTH - 200;
		int h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		w = rand() % WIDTH - 200;
		h = rand() % HIGH - 200;
		putimage(w, h, &blood[1], SRCAND);
		putimage(w, h, &blood[0], SRCPAINT);
		anime_line(BLACK);
		FlushBatchDraw();
	}
	setbkcolor(RED);
	cleardevice();
	anime_line(BLACK);
	FlushBatchDraw();
	Sleep(1000);
}