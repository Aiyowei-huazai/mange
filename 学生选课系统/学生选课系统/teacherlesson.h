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

	//�γ̱��
	//int  id;

	//��ʦ���
	string idclass;

	//��ʦ����

	string nameclass;
};
