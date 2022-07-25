#include"manager.h"


//无参构造
Manager::Manager()
{

}

//有参构造
Manager::Manager(string id, string name, string pass)
{
	this->m_id = id;
	this->m_name = name;
	this->m_password = pass;
}

//多态函数
void Manager::menu()
{
	cout << "欢迎" << this->m_name << "，来到学生选课系统" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t---------------------------" << endl;
	cout << "\t\t|1、创建学生、老师" << endl;
	cout << "\t\t|2、开创课程" << endl;
	cout << "\t\t|3、查看学生选课" << endl;
	cout << "\t\t|4、清空选课记录" << endl;
	cout << "\t\t|0、退出系统" << endl;
	cout << "\t\t---------------------------" << endl;

 }

//创建功能
 void Manager::creatpeople()
 {
	 cout << "请输入需要添加的类型：" << endl;
	 cout << "1、学生" << endl;
	 cout << "2、老师" << endl;

	 string id;
	 cin >> id;
	 if (id == "1")
	 {
		 string sid;
		 cout << "请输入学生学号：" << endl;
		 
		 while (true)
		 {
			 cin >> sid;
			 bool ds=this->chongfu(sid, id);
			 if (ds)
			 {
				 cout << "学号重复，请重新输入！" << endl;
			 }
			 else
			 {
				 break;
			 }
		 }

		 string sname;
		 cout << "请输入学生姓名：" << endl;
		 cin >> sname;

		 string spass;
		 cout << "请输入学生密码：" << endl;
		 cin >> spass;

		 ofstream ofs;
		 ofs.open(Studentfile, ios::out|ios::app);

		 ofs << sid << " " << sname << " " << spass << endl;

		 ofs.close();
		 cout << "添加成功！" << endl;
		 system("pause");
		 system("cls");
	 }
	 else if (id == "2")
	 {
		 string tid;
		 cout << "请输入教师编号：" << endl;
		 
		 while (true)
		 {
			 cin >> tid;
			bool t= this->chongfu(tid, id);

			if (t)
			{
				cout << "教师编号重复，请重新输入" << endl;

			}
			else
			{
				break;
			}

		 }

		 string tname;
		 cout << "请输入教师姓名：" << endl;
		 cin >> tname;

		 string tpass;
		 cout << "请输入密码：" << endl;
		 cin >> tpass;

		 ofstream ofs;
		 ofs.open(Teacherfile, ios::out | ios::app);

		 ofs << tid << " " << tname << " " << tpass << endl;


		 cout << "添加成功！" << endl;
		 system("pause");
		 system("cls");

	 }
	 else
	 {
		 cout << "输入错误！" << endl;
		 system("pause");
		 system("cls");
	 }


}

//开创课程功能
void Manager::creatWork()
{
	cout << "有以下课程可以选择：" << endl;
	cout << "\t\t1、数学一" << endl;
	cout << "\t\t2、英语一" << endl;
	cout << "\t\t3、政治" << endl;
	cout << "\t\t4、计算机" << endl;
	cout << "\t\t5、数学二" << endl;
	cout << "\t\t6、英语二" << endl;

	cout << "请选择本学期需要开创的课程：" << endl;

	string tc;
	cin >> tc;
	if (tc == "1")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "选课功能，1、教师文件打开失败" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "有以下老师可以安排：" << endl;
		
		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p( tid, tname);
			this->m.insert(make_pair(index, p));
			cout <<index<<"、"<< tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "请选择老师：" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "输入错误，重新输入" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " 选课功能、teacher class文件打开失败" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;
		
		ofs.close();

		cout << "安排课程成功！" << endl;
		system("pause");
		system("cls");




	}

	//英语一
	if (tc == "2")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "选课功能，1、教师文件打开失败" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "有以下老师可以安排：" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "、" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "请选择老师：" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "输入错误，重新输入" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " 选课功能、teacher class文件打开失败" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "安排课程成功！" << endl;
		system("pause");
		system("cls");
	}

	//政治
	if (tc == "3")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "选课功能，1、教师文件打开失败" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "有以下老师可以安排：" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "、" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "请选择老师：" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "输入错误，重新输入" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " 选课功能、teacher class文件打开失败" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "安排课程成功！" << endl;
		system("pause");
		system("cls");
	}

	//计算机
	if (tc == "4")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "选课功能，1、教师文件打开失败" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "有以下老师可以安排：" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "、" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "请选择老师：" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "输入错误，重新输入" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " 选课功能、teacher class文件打开失败" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "安排课程成功！" << endl;
		system("pause");
		system("cls");
	}

	//数学二
	if (tc == "5")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "选课功能，1、教师文件打开失败" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "有以下老师可以安排：" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "、" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "请选择老师：" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "输入错误，重新输入" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " 选课功能、teacher class文件打开失败" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "安排课程成功！" << endl;
		system("pause");
		system("cls");
	}

	//英语二
	if (tc == "6")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "选课功能，1、教师文件打开失败" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "有以下老师可以安排：" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "、" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "请选择老师：" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "输入错误，重新输入" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " 选课功能、teacher class文件打开失败" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "安排课程成功！" << endl;
		system("pause");
		system("cls");
	}

	
}

//查看学生选课功能
void Manager::lookwork()
{
	ifstream ifs;

	ifs.open(Studentlesson, ios::in);
	if (!ifs.is_open())
	{
		cout << "管理员，Stduentlesson文件打开失败" << endl;
		system("pause");
		ifs.close();
	}
	string Classid;

	string Stuid;

	string StuName;

	while (ifs >> Classid && ifs >> Stuid && ifs >> StuName)
	{
		if (Classid == "1")
		{
			cout << Stuid << " " << StuName << " " << "数学一" << endl;
		}
		else if (Classid == "2")
		{
			cout << Stuid << " " << StuName << " " << "英语一" << endl;
		}
		else if (Classid == "3")
		{
			cout << Stuid << " " << StuName << " " << "政治" << endl;
		}
		else if (Classid == "4")
		{
			cout << Stuid << " " << StuName << " " << "计算机" << endl;
		}
		else if (Classid == "5")
		{
			cout << Stuid << " " << StuName << " " << "数学二" << endl;
		}
		else if (Classid == "6")
		{
			cout << Stuid << " " << StuName << " " << "英语二" << endl;
		}
	}

	system("pause");
	system("cls");

}

//清空学生选课、教师课程安排
void Manager::clear()
{
	cout << "确定清空吗？" << endl;
	cout << "1、确定" << endl;
	cout << "2、取消" << endl;
	
	string c;
	cin >> c;
	if (c == "1")
	{
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::trunc);
		ofs.close();
		
		ofs.open(Studentlesson, ios::out | ios::trunc);
		ofs.close();

		cout << "清空成功！" << endl;
		system("pause");
		system("cls");
	}
	else if (c == "2")
	{
		cout << "取消成功！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "输入错误" << endl;
		system("pause");
		system("cls");
	}
	
}

bool Manager:: chongfu(string zid, string n)
{
	if (n == "1")
	{
		//学生学号检测
		ifstream ifs;
		ifs.open(Studentfile, ios::in);

		if (!ifs.is_open())
		{
			cout << "学生检测文件打开失败" << endl;
			system("pause");
			ifs.close();
			
		}
		string ssid;
		string ssname;
		string sspass;
		while (ifs >> ssid && ifs >> ssname && ifs >> sspass)
		{
			if (ssid == zid)
			{
				return true;
			}
		}

		return false;

		ifs.close();

	}
	else if (n == "2")
	{
		//老师编号检测
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);

		if (!ifs.is_open())
		{
			cout << "学生检测文件打开失败" << endl;
			system("pause");
			ifs.close();
			
		}
		string ttid;
		string ttname;
		string ttpass;

		while (ifs >> ttid && ifs >> ttname && ifs >> ttpass)
		{
			if (ttid == zid)
			{
				return true;
			}
		}
		return false;
	}
}