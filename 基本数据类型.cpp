#include<iostream>
#include "utils.h"
//#include "opre.cpp"
using namespace std;
/*
�����������͵�ʹ��
*/
// �ж���������
template<typename T>
void DetermineTheDataType(const string& type, const string& pc) {
	// �û�����ֵ
	T val;
	cout << "�û�����ֵ:" << endl;
	cin >> val;
	cout << val << "������������" << type;
	if (type == "long" && pc == "linux") {
		 //����̨�����
        cout << "�ڵ�ǰϵͳ��ռ��" << 8 << "���ֽڵ��ڴ��С";
        cout << endl;
       
	}
	else {
        //����̨�����
        cout << "�ڵ�ǰϵͳ��ռ��" << sizeof(T) << "���ֽڵ��ڴ��С";
        cout << endl;
	}
    
}

int main()
{
    /*std:: string type , pc;
    bool isqut = true;
    while (isqut)
    {
        cout << "�������������ͣ�" << endl;
        cin >> type;
        cout << "������ƽ̨���ͣ����磺linux����" << endl;
        cin >> pc;
        if (type == "int") {
            DetermineTheDataType<int>(type, pc);
        }
        else if (type == "short") {
            DetermineTheDataType<short>(type, pc);
        }
        else if (type == "long") {
            DetermineTheDataType<long>(type, pc);
        }
        else if (type == "longlong") {
            DetermineTheDataType<long long>(type, pc);
        }
        else if (type == "float") {
            DetermineTheDataType<float>(type, pc);
        }
        else if (type == "double") {
            DetermineTheDataType<double>(type, pc);
        }
        else if (type == "char") {
            DetermineTheDataType<char>(type, pc);
        }
        else if (type == "string") {
            DetermineTheDataType<string>(type, pc);
        }
        else if (type == "bool") {
            DetermineTheDataType<bool>(type, pc);
        }
        else {
            cout << "��Ч����������" << endl;
        }
        cout << "�Ƿ��˳���" << endl;
        string res = "��";
        cin >> res;
        if (res == "��") {
            isqut = false;
        }
    }*/
    oper();
   
	return 0;
}