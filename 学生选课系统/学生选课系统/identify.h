#pragma once
#include<iostream>
using namespace std;


class Identify
{
public:

	//���캯��
	//Identify();

	//���麯��
	virtual void menu() = 0;

	//id����
	string m_id;

	//�û�������
	string m_name;

	//��������
	string m_password;
};