#include"teacher.h"


//�޲ι���
Teacher::Teacher()
{

}

//�вι���
Teacher::Teacher(string id, string name, string pass)
{
	this->m_id = id;
	this->m_name = name;
	this->m_password = pass;
}

//��̬
void Teacher::menu()
{
	cout << "��ӭ" << this->m_name << "����ʦ����ѡ��ϵͳ" << endl;
	cout << "\t\t-----------------------" << endl;
	cout << "\t\t1���鿴�γ̱�" << endl;
	cout << "\t\t2���鿴�γ���ѧ��" << endl;
	cout << "\t\t0���˳�ϵͳ" << endl;
	cout << "\t\t-----------------------" << endl;
	


 }

//������ʦ�Ŀγ̰���
void Teacher::looktwork()
{
	
	ifstream ifs;

	ifs.open(Teacherclass, ios::in);

	if (!ifs.is_open())
	{
		cout << "Teacherclass�ļ���ʧ��" << endl;
		system("pause");
		ifs.close();

	}

	/*ifstream tfs;

	tfs.open(Teacherfile, ios::in);

	if (!tfs.is_open())
	{
		cout << "Teacherfile�ļ���ʧ��" << endl;
		system("pause");
		ifs.close();

	}*/


	string Leid;
	string Lname;
	string Lpass;
	bool Tein = true;

	cout << "����Ҫ�ϵĿ�Ŀ�У�" << endl;
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
				cout << "��ѧһ" << "   "<<this->m_name<< endl;
			}
			else if (Leid == "2")
			{
				cout << "Ӣ��һ" << "   " << this->m_name  << endl;
			}
			else if (Leid == "3")
			{
				cout << "����" << "   " << this->m_name << endl;
			}
			else if (Leid == "4")
			{
				cout << "�����" << "   " << this->m_name << endl;
			}
			else if (Leid == "5")
			{
				cout << "��ѧ��" << "   " << this->m_name << endl;
			}
			else if (Leid == "6")
			{
				cout << "Ӣ���" << "   " << this->m_name << endl;
			}
		}
	}
	if (Tein)
	{
		cout << "����û�пγ̣�����Ҫ�Ͽ�" << endl;
		system("pause");
		system("cls");
		return;
	}
	ifs.close();
	system("pause");
	system("cls");


}

//�鿴�Լ��ڿ���
void Teacher::showstudent()
{
	ifstream ifs;

	ifs.open(Teacherclass, ios::in);

	if (!ifs.is_open())
	{
		cout << "Teacherclass�ļ���ʧ��" << endl;
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
				cout << "studentlesson�ļ���ʧ��" << endl;
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
					cout << " ��Ŀ��  ��ѧһ " << "ѧ��������   " << Spass << endl;

				}
				else if (CSid == CTid && CTid == "2")
				{
					index2= false;
					cout << " ��Ŀ��  Ӣ��һ " << "ѧ��������   " << Spass << endl;
				}
				else if (CSid == CTid && CTid == "3")
				{
					index3 = false;
					cout << " ��Ŀ��  ���� " << "ѧ��������   " << Spass << endl;
				}
				else if (CSid == CTid && CTid == "4")
				{
					index4 = false;
					cout << " ��Ŀ�� �����" << "ѧ��������   " << Spass << endl;
				}
				else if (CSid == CTid && CTid == "5")
				{
					index5 = false;
					cout << " ��Ŀ��  ��ѧ�� " << "ѧ��������   " << Spass << endl;
				}
				else if (CSid == CTid && CTid == "6")
				{
					index6 = false;
					cout << " ��Ŀ��  Ӣ��� " << "ѧ��������   " << Spass << endl;
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
		cout << "��ʱû��ѧ��ѡ��" << endl;
		system("pause");
		system("cls");
		return;

	}


	if (Tindex)
	{
		cout << "�ý�ʦû�пγ̰���" << endl;
		system("pause");
		system("cls");
		return;
	}
	
	system("pause");
	system("cls");
}