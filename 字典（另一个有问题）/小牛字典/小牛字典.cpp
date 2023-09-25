#include <stdio.h>
#include <iostream>
int a = 1;
using namespace std;
string dic[1000];
string mean[1000];
void add()
{
	cout << "请输入要添加的单词\n";
	string b;
	cin >> b;
	dic[a] = b;
	cout << "请输入释义\n";
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
	cout <<"请写出"<< dic[m]<<"的意思";
	string d;
	cin >> d;
	if (d == mean[m])
		cout << "答对了，奖励金币\n";
	else
		cout << "金币扣完了哈哈哈哈哈哈哈哈哈\n";
}
int main()
{
	cout << "请输入1,2,3,4(add,check,re,stop)来实现功能\n";
	int get;
	while (true)
	{
		cin >> get;
		switch (get)
		{
		case (1):
			add();
			cout << "请继续输入命令\n";
		case (2):
			check();
			cout << "请继续输入命令\n";
		case(3):
			re();
			cout << "请继续输入命令\n";
		case(4):
			break;
		}
	}
	return 0;
}