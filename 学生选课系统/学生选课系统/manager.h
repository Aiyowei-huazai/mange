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
	//�޲ι���
	Manager();

	//�вι���
	Manager(string id, string name, string pass);

	//��̬����
	virtual void menu();

	//��������
	void creatpeople();

	//����Ƿ��ظ���Ӻ���
	bool chongfu(string zid, string n);

	//�����γ̹���
	void creatWork();

	//����vecot����
	//vector<Teacherlesson> v;
	//����map����
	map<int, Teacherlesson> m;

	//�鿴ѧ��ѡ�ι���
	void lookwork();

	//���ѧ��ѡ�Ρ���ʦ�γ̰���
	void clear();
};