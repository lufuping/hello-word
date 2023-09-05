#include<iostream>
using namespace std;

int a()
{
	//system("pause");
	// 声明一个int变量a初始值为0
	int a = 0;
	a = 10;
	int b;
	b = a;
	b -= 2;
	// 输出hello word到控制台
	cout << "hello word" <<"a的值是"<<a<<"b的值是"<< b<< endl;
	// 用户输入任意建后退出
	cin.get();
	return 0;
}