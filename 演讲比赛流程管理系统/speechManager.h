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

	//初始化容器和属性
	void initSpeech();

	//创建12名选手
	void createSpeaker();

	//开始比赛 比赛整个流程控制函数
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示得分
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//判断文件是否为空
	bool fileIsEmpty;

	map<int, vector<string>> m_Record;

	//显示往届得分
	void showRecord();

	//清空文件
	void clearRecord();

	//成员属性
	//保存第一轮比赛选手编号容器 12人
	vector<int> v1;

	//第一轮晋级的选手编号容器 6人
	vector<int> v2;

	//胜出前三名的选手编号容器 3人
	vector<int> vVictory;

	//存放编号以及对应具体选手的容器
	map<int, Speaker> m_Speaker;

	//存放比赛轮数
	int m_Index;
};