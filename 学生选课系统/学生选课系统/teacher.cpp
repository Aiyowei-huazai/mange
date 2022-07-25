#include"teacher.h"


//无参构造
Teacher::Teacher()
{

}

//有参构造
Teacher::Teacher(string id, string name, string pass)
{
	this->m_id = id;
	this->m_name = name;
	this->m_password = pass;
}

//多态
void Teacher::menu()
{
	cout << "欢迎" << this->m_name << "，教师进入选课系统" << endl;
	cout << "\t\t-----------------------" << endl;
	cout << "\t\t1、查看课程表" << endl;
	cout << "\t\t2、查看课程与学生" << endl;
	cout << "\t\t0、退出系统" << endl;
	cout << "\t\t-----------------------" << endl;
	


 }

//产看教师的课程安排
void Teacher::looktwork()
{
	
	ifstream ifs;

	ifs.open(Teacherclass, ios::in);

	if (!ifs.is_open())
	{
		cout << "Teacherclass文件打开失败" << endl;
		system("pause");
		ifs.close();

	}

	/*ifstream tfs;

	tfs.open(Teacherfile, ios::in);

	if (!tfs.is_open())
	{
		cout << "Teacherfile文件打开失败" << endl;
		system("pause");
		ifs.close();

	}*/


	string Leid;
	string Lname;
	string Lpass;
	bool Tein = true;

	cout << "您需要上的科目有：" << endl;
	//cout << this->m_name << endl;
	
	while (ifs >> Leid && ifs >> Lname && ifs >> Lpass)
	{
		//cout << "zhe1" << endl;
		/*cout << Lname << endl;
		cout << Lpass << endl;
		cout << this->m_name << endl;
			cout << Leid << endl;*/
		//cout << this->m_name << endl;
		//cout << Lname << endl;
		if (Lpass == this->m_name)
		{
			Tein = false;
			
			if (Leid == "1")
			{
				cout << "数学一" << "   "<<this->m_name<< endl;
			}
			else if (Leid == "2")
			{
				cout << "英语一" << "   " << this->m_name  << endl;
			}
			else if (Leid == "3")
			{
				cout << "政治" << "   " << this->m_name << endl;
			}
			else if (Leid == "4")
			{
				cout << "计算机" << "   " << this->m_name << endl;
			}
			else if (Leid == "5")
			{
				cout << "数学二" << "   " << this->m_name << endl;
			}
			else if (Leid == "6")
			{
				cout << "英语二" << "   " << this->m_name << endl;
			}
		}
	}
	if (Tein)
	{
		cout << "您还没有课程，不需要上课" << endl;
		system("pause");
		system("cls");
		return;
	}
	ifs.close();
	system("pause");
	system("cls");


}

//查看自己授课人
void Teacher::showstudent()
{
	ifstream ifs;

	ifs.open(Teacherclass, ios::in);

	if (!ifs.is_open())
	{
		cout << "Teacherclass文件打开失败" << endl;
		system("pause");
		ifs.close();
	}

	string CTid;
	string Tname;
	string Tpass;
	bool Tindex = true;
	bool index1 = true;
	bool index2 = true;
	bool index3 = true;
	bool index4 = true;
	bool index5 = true;
	bool index6 = true;

	while (ifs >> CTid && ifs >> Tname && ifs >> Tpass)
	{
		if (Tpass == this->m_name)
		{
			Tindex = false;
			ifstream sfs;
			sfs.open(Studentlesson, ios::in);

			if (!sfs.is_open())
			{
				cout << "studentlesson文件打开失败" << endl;
			}
			string CSid;
			string Sname;
			string Spass;
			
			
			
			while (sfs >> CSid && sfs >> Sname && sfs >> Spass)
			{
			/*	bool index1 = true;
				bool index2 = true;
				bool index3 = true;
				bool index4 = true;
				bool index5 = true;
				bool index6 = true;*/

				if (CSid == CTid&&CTid=="1")
				{
					index1 = false;
					cout << " 科目：  数学一 " << "学生姓名：   " << Spass << endl;

				}
				else if (CSid == CTid && CTid == "2")
				{
					index2= false;
					cout << " 科目：  英语一 " << "学生姓名：   " << Spass << endl;
				}
				else if (CSid == CTid && CTid == "3")
				{
					index3 = false;
					cout << " 科目：  政治 " << "学生姓名：   " << Spass << endl;
				}
				else if (CSid == CTid && CTid == "4")
				{
					index4 = false;
					cout << " 科目： 计算机" << "学生姓名：   " << Spass << endl;
				}
				else if (CSid == CTid && CTid == "5")
				{
					index5 = false;
					cout << " 科目：  数学二 " << "学生姓名：   " << Spass << endl;
				}
				else if (CSid == CTid && CTid == "6")
				{
					index6 = false;
					cout << " 科目：  英语二 " << "学生姓名：   " << Spass << endl;
				}
			}
			/*cout << index1 << endl;
			cout << index2 << endl;
			cout << index3 << endl;
			cout << index4 << endl;
			cout << index5 << endl;
			cout << index6<< endl;*/
			
			
			
		}



	}
	if (index1&& index2&& index3&& index4&& index5&& index6)
	//if (false)
	{
		cout << "暂时没有学生选择" << endl;
		system("pause");
		system("cls");
		return;

	}


	if (Tindex)
	{
		cout << "该教师没有课程安排" << endl;
		system("pause");
		system("cls");
		return;
	}
	
	system("pause");
	system("cls");
}