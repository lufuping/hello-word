#include<iostream>
using namespace std;

int a()
{
	//system("pause");
	// ����һ��int����a��ʼֵΪ0
	int a = 0;
	a = 10;
	int b;
	b = a;
	b -= 2;
	// ���hello word������̨
	cout << "hello word" <<"a��ֵ��"<<a<<"b��ֵ��"<< b<< endl;
	// �û��������⽨���˳�
	cin.get();
	return 0;
}