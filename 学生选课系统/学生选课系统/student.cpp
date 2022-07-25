#include"student.h"


//无参构造
Student::Student()
{

}

//有参构造
Student::Student(string id, string name, string spass)
{
	this->m_id = id;
	this->m_name = name;
	this->m_password = spass;
}

//多态
void Student::menu()
{
	cout << "欢迎" << this->m_name << "，来到选课系统" << endl;
	cout << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t|1、查看课程信息" << endl;
	cout << "\t\t|2、进行选课" << endl;
	cout << "\t\t|3、查看自己的选课" << endl;
	cout << "\t\t|0、退出系统" << endl;
	cout << "\t\t------------------------------------" << endl;
 }

//查看所有课程信息
void Student::lookwork()
{
	ifstream ifs;

	ifs.open(Teacherclass, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件Teacherclass，学生查看课程信息失败" << endl;
		ifs.close();
	}
	

	string d;
	string tid;
	string tname;
	while (ifs >> d && ifs >> tid && ifs >> tname)
	{
		if (d == "1")
		{
			cout << "科目： 数学一 " << " " << "教师：" << tname << endl;
		}
		else if (d == "2")
		{
			cout << "科目： 英语二 " <<" " << "教师：" << tname << endl;
		}
		else if (d == "3")
		{
			cout << "科目： 政治" << " " << "教师：" << tname << endl;
		}
		else if (d == "4")
		{
			cout << "科目： 计算机 " << " " << "教师：" << tname << endl;
		}
		else if (d == "5")
		{
			cout << "科目： 数学二 " << " " << "教师：" << tname << endl;
		}
		else if (d == "6")
		{
			cout << "科目： 英语二 " << " " << "教师：" << tname << endl;
		}
		else
		{
			cout << "文件为空" << endl;
			return;
		}


		
	}
	ifs.close();
	system("pause");
	system("cls");
}

//进行选课功能
void Student::choosework()
{
	ifstream ifs;

	ifs.open(Teacherclass, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件Teacherclass，学生查看课程信息失败" << endl;
		ifs.close();
	}


	string d;
	string tid;
	string tname;
	while (ifs >> d && ifs >> tid && ifs >> tname)
	{
		if (d == "1")
		{
			cout << "1、  科目： 数学一 " << " " << "教师：" << tname << endl;
		}
		else if (d == "2")
		{
			cout << "2、  科目： 英语二 " << " " << "教师：" << tname << endl;
		}
		else if (d == "3")
		{
			cout << "3、  科目： 政治" << " " << "教师：" << tname << endl;
		}
		else if (d == "4")
		{
			cout << "4、  科目： 计算机 " << " " << "教师：" << tname << endl;
		}
		else if (d == "5")
		{
			cout << "5、  科目： 数学二 " << " " << "教师：" << tname << endl;
		}
		else if (d == "6")
		{
			cout << "6、  科目： 英语二 " << " " << "教师：" << tname << endl;
		}
		else
		{
			cout << "文件为空" << endl;
			return;
		}
	}

	ifs.close();
	

	cout << endl;
	string co;
	cout << "请进行选择：" << endl;
	cin >> co;
	//数学一
	if (co == "1")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "选择成功" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}

	//英语一
	if (co == "2")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "选择成功" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}
	//政治
	if (co == "3")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "选择成功" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}
	//计算机
	if (co == "4")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "选择成功" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}
	//数学二
	if (co == "5")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "选择成功" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}
	//英语二
	if (co == "6")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "选择成功" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}

}

//查看自己选课情况
void Student::lookchoose()
{
	ifstream ifs;

	ifs.open(Studentlesson, ios::in);
	if (!ifs.is_open())
	{
		cout << "student lesson，选课情况文件打开失败" << endl;
		ifs.close();
	}

	string hao;
	string id;
	string name;
	bool d = true;
	
	while (ifs >> hao && ifs >> id &&ifs >> name)
	{
		if (id == this->m_id && name == this->m_name)
		{
			d = false;
			if (hao == "1")
			{
				cout << "科目： 数学一" << " " << endl;
			}
			else if (hao == "2")
			{
				cout << "科目： 英语一" << " " << endl;
			}
			else if (hao == "3")
			{
				cout << "科目： 政治" << " " << endl;
			}
			else if (hao == "4")
			{
				cout << "科目： 计算机" << " " << endl;
			}
			else if (hao == "5")
			{
				cout << "科目： 数学二" << " " << endl;
			}
			else if (hao == "6")
			{
				cout << "科目： 英语二" << " " << endl;
			}
		}
	}

	if (d)
	{
		cout << this->m_name << "，同学还没有进行选课！" << endl;
	}

	//cout << "目前还没有选课" << endl;
	system("pause");
	system("cls");

}