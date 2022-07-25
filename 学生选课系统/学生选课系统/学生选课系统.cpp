#include<iostream>
#include"identify.h"
#include<fstream>
#include"ALLfile.h"
#include"manager.h"
#include"student.h"
using namespace std;


void LoadTeacher()
{
	Identify* iden = NULL;

	//Teacher* Te = (Teacher*)iden;    有问题
	

	string tid;
	cout << "请输入教师职工编号：" << endl;
	cin >> tid;

	string tname;
	cout << "请输入用户名：" << endl;
	cin >>tname;

	string tpass;
	cout << "请输入密码：" << endl;
	cin >> tpass;

	ifstream ifs;
	ifs.open(Teacherfile, ios::in);

	if (!ifs.is_open())
	{
		cout << "Teacherfile文件打开失败！" << endl;
		system("pause");
		ifs.close();
	}
	string ttid;
	string ttname;
	string ttpass;

	while (ifs >> ttid && ifs >> ttname && ifs >> ttpass)
	{
		if (ttid == tid && ttname == tname && ttpass == tpass)
		{
			cout << "验证成功" << endl;
			system("pause");
			system("cls");

			iden = new Teacher(tid, tname, tpass);
			Teacher* Te = (Teacher*)iden;

			while (true)
			{
				iden->menu();
				string choose;
				cout << "请输入您的选择：" << endl;
				cin >> choose;

				if (choose == "1")
				{
					//cout << "查看课程表" << endl;
					Te->looktwork();
				}
				else if (choose == "2")
				{
					cout << "查看课表与学生" << endl;
					Te->showstudent();

				}
				else if (choose == "0")
				{
					cout << "欢迎下次使用" << endl;
					system("pause");
					system("cls");
					return;

				}
				else
				{
					cout << "输出错误，重新选择" << endl;
				}
			}


		}
		
	}

	cout << "验证失败！" << endl;
	system("pause");
	system("cls");






}


//学生登录系统
void Loadstudent()
{
	Identify* ide = NULL;
	

	string sid;
	string sname;
	string spass;

	string ssid;
	string ssname;
	string sspass;
	cout << "请输入学号：" << endl;
	cin >> ssid;

	cout << "请输入用户名：" << endl;
	cin >> ssname;

	cout << "请输入密码：" << endl;
	cin >> sspass;
	ifstream ifs;

	ifs.open(Studentfile, ios::in);

	while (ifs >> sid && ifs >> sname && ifs >> spass)
	{
		if (sid == ssid && ssname == sname && sspass == spass)
		{
			cout << "验证成功" << endl;
			system("pause");
			system("cls");

			ide = new Student(ssid, ssname, sspass);
			Student* stu = (Student*)ide;
			while (true)
			{
               ide->menu();
			   cout << "请选择：" << endl;
			   string s;
			   cin >> s;
			   if (s == "1")
			   {
				   cout << "查看课程信息" << endl;
				   stu->lookwork();
				
			   }
			   else if (s == "2")
			   {
				   stu->choosework();

			   }
			   else if (s == "3")
			   {
				  // cout << "查看自己选课" << endl;
				   stu->lookchoose();
			   }
			   else if (s == "0")
			   {
				   cout << "退出成功" << endl;
				   cout << "欢迎您的下次使用" << endl;
				   system("pause");
				   system("cls");
				   break;
			   }
			   else
			   {
				   cout << "输入错误，请重新输入" << endl;
			   }

			}

			return;
		}
	}

	cout << "验证失败" << endl;
	system("pause");
	system("cls");
}



//管理员
void Loadmanager()
{
	Identify* iden = NULL;
	ifstream ifs;
	ifs.open(Managerfile, ios::in);


	//bool test = ifs.is_open();
	//cout << test << endl;
	if (!ifs.is_open())
	{
		cout << "managerfile文件打开失败" << endl;
		system("pause");
		return;
	}
	string id;
	cout << "请输入管理员编号：" << endl;
	cin >> id;

	string name;
	cout << "请输入用户名：" << endl;
	cin >> name;
	
	string pass;
	cout << "请输入密码：" << endl;
	cin >> pass;
	
	

	
	string mid;
	string mname;
	string mpass;
	while (ifs >> mid && ifs >> mname && ifs >> mpass)
	{
		//cout << mid << endl;
		//cout << mname << endl;
		//cout << mpass << endl;
		if (mid == id && mname == name && mpass == pass)
		{
			cout << "验证成功！" << endl;
			system("pause");
			system("cls");
		

			string mchoose;
			while (true)
			{
				iden = new Manager(id, name, pass);
				Manager* Mana = (Manager*)iden;
				iden->menu();
				cin >> mchoose;
				if (mchoose == "1")
				{
					//cout << "创建课程" << endl;
					Mana->creatpeople();
					
				}
				else if (mchoose == "2")
				{
					cout << "开创课程" << endl;
					Mana->creatWork();
				}
				else if (mchoose == "3")
				{
					cout << "查看学生选课" << endl;
					Mana->lookwork();
				}
				else if (mchoose == "4")
				{
					cout << "清空选课记录" << endl;
					Mana->clear();
				}
				else if (mchoose == "0")
				{
					cout << "退出系统成功" << endl;
					cout << "欢迎下次登录" << endl;
					system("pause");
					system("cls");
					break;
				}
				else
				{
					cout << "输入错误，请重新输入！" << endl;
				}
			}
			return;

		}
		


	}
	cout << "验证错误" << endl;
	system("pause");
	system("cls");


	
}

int main()
{
	
	string  choose;
	while (true)
	{
		cout << "\t\t欢迎来到选课系统\t" << endl;

		cout << endl;
		cout << endl;
		cout << "\t\t---------------------------" << endl;
		cout << "\t\t|1、学生登录\t|" << endl;
		cout << "\t\t|2、教师登录\t|" << endl;
		cout << "\t\t|3、管理员登录\t|" << endl;
		cout << "\t\t|0、退出系统\t|" << endl;
		cout << "\t\t---------------------------" << endl;
		cout << "请选择：" << endl;
		cin >> choose;
		if (choose == "1")
		{
			//学生
			//cout << "学生" << endl;
			Loadstudent();
		}
		else if (choose == "2")
		{
			//教师
			//cout << "教师" << endl;
			LoadTeacher();
		}
		else if (choose == "3")
		{
			//管理员
			//cout << "管理员" << endl;
			Loadmanager();
		}
		else if (choose == "0")
		{
			
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;

		}
		else
		{
			cout << "输入错误，请重新输入！" << endl;
		}

	}

	system("pause");
	system("cls");

	return 0;
}