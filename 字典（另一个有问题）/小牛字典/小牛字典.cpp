#include <stdio.h>
#include <iostream>
int a = 1;
using namespace std;
string dic[1000];
string mean[1000];
void add()
{
	cout << "������Ҫ��ӵĵ���\n";
	string b;
	cin >> b;
	dic[a] = b;
	cout << "����������\n";
	string c;
	cin >> c;
	mean[a] = c;
	a++;
}
void check()
{
	for (int i = 0; i < a; i++)
	{
		cout << dic[i] << ' '<< mean[i];
	}
}
void re()
{
	int m = rand() % a + 1;
	cout <<"��д��"<< dic[m]<<"����˼";
	string d;
	cin >> d;
	if (d == mean[m])
		cout << "����ˣ��������\n";
	else
		cout << "��ҿ����˹�����������������\n";
}
int main()
{
	cout << "������1,2,3,4(add,check,re,stop)��ʵ�ֹ���\n";
	int get;
	while (true)
	{
		cin >> get;
		switch (get)
		{
		case (1):
			add();
			cout << "�������������\n";
		case (2):
			check();
			cout << "�������������\n";
		case(3):
			re();
			cout << "�������������\n";
		case(4):
			break;
		}
	}
	return 0;
}