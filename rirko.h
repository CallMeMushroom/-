#include <stdio.h>
#include <Windows.h>
LARGE_INTEGER cpuFreq;//cpuƵ��
LARGE_INTEGER tickBeginTime;//�δ�ʼʱ��
LARGE_INTEGER tickEndTime;//�δ����ʱ��
int fps = 60;//��Ϸ֡��

void blanktime()
{
	double sleeptime;
	QueryPerformanceCounter(&tickEndTime);//��ȡ֡�����δ�
	sleeptime = (double)(1000.0 / fps) - ((double)tickEndTime.QuadPart - (double)tickBeginTime.QuadPart) / (double)cpuFreq.QuadPart;
	if (sleeptime > 0 && sleeptime < 1000)
		Sleep(sleeptime);
	QueryPerformanceCounter(&tickBeginTime);//��ȡ֡��ʼ�δ�
}