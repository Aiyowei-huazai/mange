#pragma once
#include<iostream>
using namespace std;
#include"identify.h"
#include<fstream>
#include"ALLfile.h"

class Teacher :public Identify
{
public:
	//�޲ι���
	Teacher();

	//�вι���
	Teacher(string id, string name, string tpass);

	//��̬
	virtual void menu();

	//������ʦ�Ŀγ̰���
	void looktwork();

	

	//�鿴�Լ��ڿ���
	void showstudent();

};