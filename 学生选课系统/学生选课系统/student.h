#pragma once
#include<iostream>
#include"identify.h"
#include<fstream>
#include"ALLfile.h"
using namespace std;

class Student:public Identify
{
public:
	//�޲ι���
	Student();

	//�вι���
	Student(string id, string name, string spass);

	//��̬
	virtual void menu();

	//�鿴���пγ���Ϣ
	void lookwork();

	//����ѡ�ι���
	void choosework();

	//�鿴�Լ�ѡ�����
	void lookchoose();


};