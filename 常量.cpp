#include<iostream>
#include "常量.h"
using namespace std;
// 判断是否为闰年
bool isLeapYear(int year) {
	if (year % 400 == 0) {
		return true;
	}
	else if (year % 100 == 0) {
		return false;
	}
	else if (year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}
// 计算一年有多少个月、周和天
void calculateYear(int DaysPerMonth, int Days,int Year) {

	/*两种定义常量的方法
	1. #define
	2. const
	*/
	// 用户输入年份
	cout << "输入年份" << endl;
	cin >> Year;
	// 用户输入月有多少天
	cout << "这月有多少天" << endl;
	cin >> DaysPerMonth;
	// 用户输入过了多少天
	cout << "过了多少天" << endl;
	cin >> Days;
	// 这个月还剩下多少天 
	int ReDays = DaysPerMonth - Days;
	// 计算今年的天数
	int years;
	if (isleadbyte(Year)) {
		years = 365 + 1;
	}
	else
	{
		years = 365;
	}
	// 打印输出一年有几个月，一个周有多少天
	cout << "今年有" << MONHE << "个月" << "有" << 365 / DAY << "周" << "有" << years << "天" << endl;
	cout << "这个月还剩下" << ReDays << "天" << endl;
}
int test1()
{
	int DaysPerMonth=0, Days=0, Year=0;
	// 调用计算方法
	calculateYear(DaysPerMonth, Days, Year);
	// 结束
		return 0;
}