#include<iostream>
#include "����.h"
using namespace std;
// �ж��Ƿ�Ϊ����
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
// ����һ���ж��ٸ��¡��ܺ���
void calculateYear(int DaysPerMonth, int Days,int Year) {

	/*���ֶ��峣���ķ���
	1. #define
	2. const
	*/
	// �û��������
	cout << "�������" << endl;
	cin >> Year;
	// �û��������ж�����
	cout << "�����ж�����" << endl;
	cin >> DaysPerMonth;
	// �û�������˶�����
	cout << "���˶�����" << endl;
	cin >> Days;
	// ����»�ʣ�¶����� 
	int ReDays = DaysPerMonth - Days;
	// ������������
	int years;
	if (isleadbyte(Year)) {
		years = 365 + 1;
	}
	else
	{
		years = 365;
	}
	// ��ӡ���һ���м����£�һ�����ж�����
	cout << "������" << MONHE << "����" << "��" << 365 / DAY << "��" << "��" << years << "��" << endl;
	cout << "����»�ʣ��" << ReDays << "��" << endl;
}
int test1()
{
	int DaysPerMonth=0, Days=0, Year=0;
	// ���ü��㷽��
	calculateYear(DaysPerMonth, Days, Year);
	// ����
		return 0;
}