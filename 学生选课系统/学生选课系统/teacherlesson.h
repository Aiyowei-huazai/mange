#pragma once
#include<iostream>
using namespace std;


class Teacherlesson
{
public:
	Teacherlesson(){}
	Teacherlesson( string ti, string tname)
	{
		//this->id = idle;
		this->idclass = ti;
		this->nameclass = tname;
	}

	//课程编号
	//int  id;

	//教师编号
	string idclass;

	//教师名字

	string nameclass;
};
