#pragma once
#include <iostream>
#include<vector>
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

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int> v1;

	//��һ�ֽ�����ѡ�ֱ������
	vector<int> v2;


};