#pragma once
#include<iostream>
using namespace std;
#include"identify.h"
#include<fstream>
#include"ALLfile.h"

class Teacher :public Identify
{
public:
	//无参构造
	Teacher();

	//有参构造
	Teacher(string id, string name, string tpass);

	//多态
	virtual void menu();

	//产看教师的课程安排
	void looktwork();

	

	//查看自己授课人
	void showstudent();

};