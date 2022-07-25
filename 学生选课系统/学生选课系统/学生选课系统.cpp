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

	//Teacher* Te = (Teacher*)iden;    ������
	

	string tid;
	cout << "�������ʦְ����ţ�" << endl;
	cin >> tid;

	string tname;
	cout << "�������û�����" << endl;
	cin >>tname;

	string tpass;
	cout << "���������룺" << endl;
	cin >> tpass;

	ifstream ifs;
	ifs.open(Teacherfile, ios::in);

	if (!ifs.is_open())
	{
		cout << "Teacherfile�ļ���ʧ�ܣ�" << endl;
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
			cout << "��֤�ɹ�" << endl;
			system("pause");
			system("cls");

			iden = new Teacher(tid, tname, tpass);
			Teacher* Te = (Teacher*)iden;

			while (true)
			{
				iden->menu();
				string choose;
				cout << "����������ѡ��" << endl;
				cin >> choose;

				if (choose == "1")
				{
					//cout << "�鿴�γ̱�" << endl;
					Te->looktwork();
				}
				else if (choose == "2")
				{
					cout << "�鿴�α���ѧ��" << endl;
					Te->showstudent();

				}
				else if (choose == "0")
				{
					cout << "��ӭ�´�ʹ��" << endl;
					system("pause");
					system("cls");
					return;

				}
				else
				{
					cout << "�����������ѡ��" << endl;
				}
			}


		}
		
	}

	cout << "��֤ʧ�ܣ�" << endl;
	system("pause");
	system("cls");






}


//ѧ����¼ϵͳ
void Loadstudent()
{
	Identify* ide = NULL;
	

	string sid;
	string sname;
	string spass;

	string ssid;
	string ssname;
	string sspass;
	cout << "������ѧ�ţ�" << endl;
	cin >> ssid;

	cout << "�������û�����" << endl;
	cin >> ssname;

	cout << "���������룺" << endl;
	cin >> sspass;
	ifstream ifs;

	ifs.open(Studentfile, ios::in);

	while (ifs >> sid && ifs >> sname && ifs >> spass)
	{
		if (sid == ssid && ssname == sname && sspass == spass)
		{
			cout << "��֤�ɹ�" << endl;
			system("pause");
			system("cls");

			ide = new Student(ssid, ssname, sspass);
			Student* stu = (Student*)ide;
			while (true)
			{
               ide->menu();
			   cout << "��ѡ��" << endl;
			   string s;
			   cin >> s;
			   if (s == "1")
			   {
				   cout << "�鿴�γ���Ϣ" << endl;
				   stu->lookwork();
				
			   }
			   else if (s == "2")
			   {
				   stu->choosework();

			   }
			   else if (s == "3")
			   {
				  // cout << "�鿴�Լ�ѡ��" << endl;
				   stu->lookchoose();
			   }
			   else if (s == "0")
			   {
				   cout << "�˳��ɹ�" << endl;
				   cout << "��ӭ�����´�ʹ��" << endl;
				   system("pause");
				   system("cls");
				   break;
			   }
			   else
			   {
				   cout << "�����������������" << endl;
			   }

			}

			return;
		}
	}

	cout << "��֤ʧ��" << endl;
	system("pause");
	system("cls");
}



//����Ա
void Loadmanager()
{
	Identify* iden = NULL;
	ifstream ifs;
	ifs.open(Managerfile, ios::in);


	//bool test = ifs.is_open();
	//cout << test << endl;
	if (!ifs.is_open())
	{
		cout << "managerfile�ļ���ʧ��" << endl;
		system("pause");
		return;
	}
	string id;
	cout << "���������Ա��ţ�" << endl;
	cin >> id;

	string name;
	cout << "�������û�����" << endl;
	cin >> name;
	
	string pass;
	cout << "���������룺" << endl;
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
			cout << "��֤�ɹ���" << endl;
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
					//cout << "�����γ�" << endl;
					Mana->creatpeople();
					
				}
				else if (mchoose == "2")
				{
					cout << "�����γ�" << endl;
					Mana->creatWork();
				}
				else if (mchoose == "3")
				{
					cout << "�鿴ѧ��ѡ��" << endl;
					Mana->lookwork();
				}
				else if (mchoose == "4")
				{
					cout << "���ѡ�μ�¼" << endl;
					Mana->clear();
				}
				else if (mchoose == "0")
				{
					cout << "�˳�ϵͳ�ɹ�" << endl;
					cout << "��ӭ�´ε�¼" << endl;
					system("pause");
					system("cls");
					break;
				}
				else
				{
					cout << "����������������룡" << endl;
				}
			}
			return;

		}
		


	}
	cout << "��֤����" << endl;
	system("pause");
	system("cls");


	
}

int main()
{
	
	string  choose;
	while (true)
	{
		cout << "\t\t��ӭ����ѡ��ϵͳ\t" << endl;

		cout << endl;
		cout << endl;
		cout << "\t\t---------------------------" << endl;
		cout << "\t\t|1��ѧ����¼\t|" << endl;
		cout << "\t\t|2����ʦ��¼\t|" << endl;
		cout << "\t\t|3������Ա��¼\t|" << endl;
		cout << "\t\t|0���˳�ϵͳ\t|" << endl;
		cout << "\t\t---------------------------" << endl;
		cout << "��ѡ��" << endl;
		cin >> choose;
		if (choose == "1")
		{
			//ѧ��
			//cout << "ѧ��" << endl;
			Loadstudent();
		}
		else if (choose == "2")
		{
			//��ʦ
			//cout << "��ʦ" << endl;
			LoadTeacher();
		}
		else if (choose == "3")
		{
			//����Ա
			//cout << "����Ա" << endl;
			Loadmanager();
		}
		else if (choose == "0")
		{
			
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;

		}
		else
		{
			cout << "����������������룡" << endl;
		}

	}

	system("pause");
	system("cls");

	return 0;
}