#include"manager.h"


//�޲ι���
Manager::Manager()
{

}

//�вι���
Manager::Manager(string id, string name, string pass)
{
	this->m_id = id;
	this->m_name = name;
	this->m_password = pass;
}

//��̬����
void Manager::menu()
{
	cout << "��ӭ" << this->m_name << "������ѧ��ѡ��ϵͳ" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t---------------------------" << endl;
	cout << "\t\t|1������ѧ������ʦ" << endl;
	cout << "\t\t|2�������γ�" << endl;
	cout << "\t\t|3���鿴ѧ��ѡ��" << endl;
	cout << "\t\t|4�����ѡ�μ�¼" << endl;
	cout << "\t\t|0���˳�ϵͳ" << endl;
	cout << "\t\t---------------------------" << endl;

 }

//��������
 void Manager::creatpeople()
 {
	 cout << "��������Ҫ��ӵ����ͣ�" << endl;
	 cout << "1��ѧ��" << endl;
	 cout << "2����ʦ" << endl;

	 string id;
	 cin >> id;
	 if (id == "1")
	 {
		 string sid;
		 cout << "������ѧ��ѧ�ţ�" << endl;
		 
		 while (true)
		 {
			 cin >> sid;
			 bool ds=this->chongfu(sid, id);
			 if (ds)
			 {
				 cout << "ѧ���ظ������������룡" << endl;
			 }
			 else
			 {
				 break;
			 }
		 }

		 string sname;
		 cout << "������ѧ��������" << endl;
		 cin >> sname;

		 string spass;
		 cout << "������ѧ�����룺" << endl;
		 cin >> spass;

		 ofstream ofs;
		 ofs.open(Studentfile, ios::out|ios::app);

		 ofs << sid << " " << sname << " " << spass << endl;

		 ofs.close();
		 cout << "��ӳɹ���" << endl;
		 system("pause");
		 system("cls");
	 }
	 else if (id == "2")
	 {
		 string tid;
		 cout << "�������ʦ��ţ�" << endl;
		 
		 while (true)
		 {
			 cin >> tid;
			bool t= this->chongfu(tid, id);

			if (t)
			{
				cout << "��ʦ����ظ�������������" << endl;

			}
			else
			{
				break;
			}

		 }

		 string tname;
		 cout << "�������ʦ������" << endl;
		 cin >> tname;

		 string tpass;
		 cout << "���������룺" << endl;
		 cin >> tpass;

		 ofstream ofs;
		 ofs.open(Teacherfile, ios::out | ios::app);

		 ofs << tid << " " << tname << " " << tpass << endl;


		 cout << "��ӳɹ���" << endl;
		 system("pause");
		 system("cls");

	 }
	 else
	 {
		 cout << "�������" << endl;
		 system("pause");
		 system("cls");
	 }


}

//�����γ̹���
void Manager::creatWork()
{
	cout << "�����¿γ̿���ѡ��" << endl;
	cout << "\t\t1����ѧһ" << endl;
	cout << "\t\t2��Ӣ��һ" << endl;
	cout << "\t\t3������" << endl;
	cout << "\t\t4�������" << endl;
	cout << "\t\t5����ѧ��" << endl;
	cout << "\t\t6��Ӣ���" << endl;

	cout << "��ѡ��ѧ����Ҫ�����Ŀγ̣�" << endl;

	string tc;
	cin >> tc;
	if (tc == "1")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "ѡ�ι��ܣ�1����ʦ�ļ���ʧ��" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "��������ʦ���԰��ţ�" << endl;
		
		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p( tid, tname);
			this->m.insert(make_pair(index, p));
			cout <<index<<"��"<< tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "��ѡ����ʦ��" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "���������������" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " ѡ�ι��ܡ�teacher class�ļ���ʧ��" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;
		
		ofs.close();

		cout << "���ſγ̳ɹ���" << endl;
		system("pause");
		system("cls");




	}

	//Ӣ��һ
	if (tc == "2")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "ѡ�ι��ܣ�1����ʦ�ļ���ʧ��" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "��������ʦ���԰��ţ�" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "��" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "��ѡ����ʦ��" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "���������������" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " ѡ�ι��ܡ�teacher class�ļ���ʧ��" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "���ſγ̳ɹ���" << endl;
		system("pause");
		system("cls");
	}

	//����
	if (tc == "3")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "ѡ�ι��ܣ�1����ʦ�ļ���ʧ��" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "��������ʦ���԰��ţ�" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "��" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "��ѡ����ʦ��" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "���������������" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " ѡ�ι��ܡ�teacher class�ļ���ʧ��" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "���ſγ̳ɹ���" << endl;
		system("pause");
		system("cls");
	}

	//�����
	if (tc == "4")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "ѡ�ι��ܣ�1����ʦ�ļ���ʧ��" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "��������ʦ���԰��ţ�" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "��" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "��ѡ����ʦ��" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "���������������" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " ѡ�ι��ܡ�teacher class�ļ���ʧ��" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "���ſγ̳ɹ���" << endl;
		system("pause");
		system("cls");
	}

	//��ѧ��
	if (tc == "5")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "ѡ�ι��ܣ�1����ʦ�ļ���ʧ��" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "��������ʦ���԰��ţ�" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "��" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "��ѡ����ʦ��" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "���������������" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " ѡ�ι��ܡ�teacher class�ļ���ʧ��" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "���ſγ̳ɹ���" << endl;
		system("pause");
		system("cls");
	}

	//Ӣ���
	if (tc == "6")
	{
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);
		if (!ifs.is_open())
		{
			cout << "ѡ�ι��ܣ�1����ʦ�ļ���ʧ��" << endl;
		}
		string tid;
		string tname;
		string pass;
		int index = 1;
		cout << "��������ʦ���԰��ţ�" << endl;

		while (ifs >> tid && ifs >> tname && ifs >> pass)
		{
			Teacherlesson p(tid, tname);
			this->m.insert(make_pair(index, p));
			cout << index << "��" << tid << " " << tname << endl;
			index++;
		}
		ifs.close();
		cout << endl;
		cout << "��ѡ����ʦ��" << endl;
		int ttea;
		while (true)
		{
			cin >> ttea;
			if (ttea > 0 && ttea <= index)
			{
				break;
			}
			cout << "���������������" << endl;
		}
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::app);

		if (!ofs.is_open())
		{
			cout << " ѡ�ι��ܡ�teacher class�ļ���ʧ��" << endl;
			ofs.close();
		}

		ofs << tc << " " << m[ttea].idclass << " " << m[ttea].nameclass << endl;

		ofs.close();

		cout << "���ſγ̳ɹ���" << endl;
		system("pause");
		system("cls");
	}

	
}

//�鿴ѧ��ѡ�ι���
void Manager::lookwork()
{
	ifstream ifs;

	ifs.open(Studentlesson, ios::in);
	if (!ifs.is_open())
	{
		cout << "����Ա��Stduentlesson�ļ���ʧ��" << endl;
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
			cout << Stuid << " " << StuName << " " << "��ѧһ" << endl;
		}
		else if (Classid == "2")
		{
			cout << Stuid << " " << StuName << " " << "Ӣ��һ" << endl;
		}
		else if (Classid == "3")
		{
			cout << Stuid << " " << StuName << " " << "����" << endl;
		}
		else if (Classid == "4")
		{
			cout << Stuid << " " << StuName << " " << "�����" << endl;
		}
		else if (Classid == "5")
		{
			cout << Stuid << " " << StuName << " " << "��ѧ��" << endl;
		}
		else if (Classid == "6")
		{
			cout << Stuid << " " << StuName << " " << "Ӣ���" << endl;
		}
	}

	system("pause");
	system("cls");

}

//���ѧ��ѡ�Ρ���ʦ�γ̰���
void Manager::clear()
{
	cout << "ȷ�������" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2��ȡ��" << endl;
	
	string c;
	cin >> c;
	if (c == "1")
	{
		ofstream ofs;
		ofs.open(Teacherclass, ios::out | ios::trunc);
		ofs.close();
		
		ofs.open(Studentlesson, ios::out | ios::trunc);
		ofs.close();

		cout << "��ճɹ���" << endl;
		system("pause");
		system("cls");
	}
	else if (c == "2")
	{
		cout << "ȡ���ɹ���" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "�������" << endl;
		system("pause");
		system("cls");
	}
	
}

bool Manager:: chongfu(string zid, string n)
{
	if (n == "1")
	{
		//ѧ��ѧ�ż��
		ifstream ifs;
		ifs.open(Studentfile, ios::in);

		if (!ifs.is_open())
		{
			cout << "ѧ������ļ���ʧ��" << endl;
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
		//��ʦ��ż��
		ifstream ifs;
		ifs.open(Teacherfile, ios::in);

		if (!ifs.is_open())
		{
			cout << "ѧ������ļ���ʧ��" << endl;
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