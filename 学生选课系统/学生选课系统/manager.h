#pragma once
#include<iostream>
#include"identify.h"
#include<fstream>
#include"ALLfile.h"
#include<map>
#include"teacher.h"
#include"teacherlesson.h"
#include<vector>

using namespace std;


class Manager :public Identify
{
public:
	//无参构造
	Manager();

	//有参构造
	Manager(string id, string name, string pass);

	//多态函数
	virtual void menu();

	//创建功能
	void creatpeople();

	//检测是否重复添加函数
	bool chongfu(string zid, string n);

	//开创课程功能
	void creatWork();

	//开创vecot容器
	//vector<Teacherlesson> v;
	//开创map容器
	map<int, Teacherlesson> m;

	//查看学生选课功能
	void lookwork();

	//清空学生选课、教师课程安排
	void clear();
};