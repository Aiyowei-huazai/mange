#include"student.h"


//�޲ι���
Student::Student()
{

}

//�вι���
Student::Student(string id, string name, string spass)
{
	this->m_id = id;
	this->m_name = name;
	this->m_password = spass;
}

//��̬
void Student::menu()
{
	cout << "��ӭ" << this->m_name << "������ѡ��ϵͳ" << endl;
	cout << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t|1���鿴�γ���Ϣ" << endl;
	cout << "\t\t|2������ѡ��" << endl;
	cout << "\t\t|3���鿴�Լ���ѡ��" << endl;
	cout << "\t\t|0���˳�ϵͳ" << endl;
	cout << "\t\t------------------------------------" << endl;
 }

//�鿴���пγ���Ϣ
void Student::lookwork()
{
	ifstream ifs;

	ifs.open(Teacherclass, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�Teacherclass��ѧ���鿴�γ���Ϣʧ��" << endl;
		ifs.close();
	}
	

	string d;
	string tid;
	string tname;
	while (ifs >> d && ifs >> tid && ifs >> tname)
	{
		if (d == "1")
		{
			cout << "��Ŀ�� ��ѧһ " << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "2")
		{
			cout << "��Ŀ�� Ӣ��� " <<" " << "��ʦ��" << tname << endl;
		}
		else if (d == "3")
		{
			cout << "��Ŀ�� ����" << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "4")
		{
			cout << "��Ŀ�� ����� " << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "5")
		{
			cout << "��Ŀ�� ��ѧ�� " << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "6")
		{
			cout << "��Ŀ�� Ӣ��� " << " " << "��ʦ��" << tname << endl;
		}
		else
		{
			cout << "�ļ�Ϊ��" << endl;
			return;
		}


		
	}
	ifs.close();
	system("pause");
	system("cls");
}

//����ѡ�ι���
void Student::choosework()
{
	ifstream ifs;

	ifs.open(Teacherclass, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�Teacherclass��ѧ���鿴�γ���Ϣʧ��" << endl;
		ifs.close();
	}


	string d;
	string tid;
	string tname;
	while (ifs >> d && ifs >> tid && ifs >> tname)
	{
		if (d == "1")
		{
			cout << "1��  ��Ŀ�� ��ѧһ " << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "2")
		{
			cout << "2��  ��Ŀ�� Ӣ��� " << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "3")
		{
			cout << "3��  ��Ŀ�� ����" << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "4")
		{
			cout << "4��  ��Ŀ�� ����� " << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "5")
		{
			cout << "5��  ��Ŀ�� ��ѧ�� " << " " << "��ʦ��" << tname << endl;
		}
		else if (d == "6")
		{
			cout << "6��  ��Ŀ�� Ӣ��� " << " " << "��ʦ��" << tname << endl;
		}
		else
		{
			cout << "�ļ�Ϊ��" << endl;
			return;
		}
	}

	ifs.close();
	

	cout << endl;
	string co;
	cout << "�����ѡ��" << endl;
	cin >> co;
	//��ѧһ
	if (co == "1")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "ѡ��ɹ�" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}

	//Ӣ��һ
	if (co == "2")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "ѡ��ɹ�" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}
	//����
	if (co == "3")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "ѡ��ɹ�" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}
	//�����
	if (co == "4")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "ѡ��ɹ�" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}
	//��ѧ��
	if (co == "5")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "ѡ��ɹ�" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}
	//Ӣ���
	if (co == "6")
	{
		ofstream ofs;
		ofs.open(Studentlesson, ios::out | ios::app);
		ofs << co << " " << this->m_id << " " << this->m_name << endl;

		cout << "ѡ��ɹ�" << endl;
		ofs.close();
		system("pause");
		system("cls");
	}

}

//�鿴�Լ�ѡ�����
void Student::lookchoose()
{
	ifstream ifs;

	ifs.open(Studentlesson, ios::in);
	if (!ifs.is_open())
	{
		cout << "student lesson��ѡ������ļ���ʧ��" << endl;
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
				cout << "��Ŀ�� ��ѧһ" << " " << endl;
			}
			else if (hao == "2")
			{
				cout << "��Ŀ�� Ӣ��һ" << " " << endl;
			}
			else if (hao == "3")
			{
				cout << "��Ŀ�� ����" << " " << endl;
			}
			else if (hao == "4")
			{
				cout << "��Ŀ�� �����" << " " << endl;
			}
			else if (hao == "5")
			{
				cout << "��Ŀ�� ��ѧ��" << " " << endl;
			}
			else if (hao == "6")
			{
				cout << "��Ŀ�� Ӣ���" << " " << endl;
			}
		}
	}

	if (d)
	{
		cout << this->m_name << "��ͬѧ��û�н���ѡ�Σ�" << endl;
	}

	//cout << "Ŀǰ��û��ѡ��" << endl;
	system("pause");
	system("cls");

}