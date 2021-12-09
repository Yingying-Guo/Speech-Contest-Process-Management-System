#pragma once
#include <iostream>
#include<vector>
using namespace std;

//设计演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	//展示菜单
	void show_Menu();

	//退出系统
	void exitSystem();

	//析构函数
	~SpeechManager();

	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int> v1;

	//第一轮晋级的选手编号容器
	vector<int> v2;


};