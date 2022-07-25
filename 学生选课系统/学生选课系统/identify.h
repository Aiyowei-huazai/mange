#pragma once
#include<iostream>
using namespace std;


class Identify
{
public:

	//构造函数
	//Identify();

	//纯虚函数
	virtual void menu() = 0;

	//id属性
	string m_id;

	//用户名属性
	string m_name;

	//密码属性
	string m_password;
};