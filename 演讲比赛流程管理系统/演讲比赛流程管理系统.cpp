#include<iostream>
#include"speechManager.h"
using namespace std;

int main()
{
	//�������������
	SpeechManager sm;

	int choice = 0; //���ڴ洢�û�����

	while(true)
	{ 
		sm.show_Menu();

		cin >> choice;

		switch (choice)
		{
		case 1:   //��ʼ�ݽ�����
			sm
			break;
		case 2:   //�鿴�����¼
			sm
			break;
		case 3:   //��ձ�����¼
			sm
			break;
		case 0:   //�˳���������
			sm.exitSystem();
			break;
		default:
			system("cls");  //����
			break;
		}
	}

	system("pause");
	return 0;
}