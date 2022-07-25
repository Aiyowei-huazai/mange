#pragma once
#include<iostream>
#include"identify.h"
#include<fstream>
#include"ALLfile.h"
using namespace std;

class Student:public Identify
{
public:
	//无参构造
	Student();

	//有参构造
	Student(string id, string name, string spass);

	//多态
	virtual void menu();

	//查看所有课程信息
	void lookwork();

	//进行选课功能
	void choosework();

	//查看自己选课情况
	void lookchoose();


};