#pragma once
#include <iostream>
#include<vector>
#include<map>
#include<deque>
#include<functional>
#include<numeric>
#include<algorithm>
#include<ctime>
#include<string>
#include<fstream>
#include"speaker.h"
using namespace std;

//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ���� �����������̿��ƺ���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�÷�
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	map<int, vector<string>> m_Record;

	//��ʾ����÷�
	void showRecord();

	//����ļ�
	void clearRecord();

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������ 12��
	vector<int> v1;

	//��һ�ֽ�����ѡ�ֱ������ 6��
	vector<int> v2;

	//ʤ��ǰ������ѡ�ֱ������ 3��
	vector<int> vVictory;

	//��ű���Լ���Ӧ����ѡ�ֵ�����
	map<int, Speaker> m_Speaker;

	//��ű�������
	int m_Index;
};