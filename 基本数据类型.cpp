#include<iostream>
#include "utils.h"
//#include "opre.cpp"
using namespace std;
/*
基本数据类型的使用
*/
// 判断数据类型
template<typename T>
void DetermineTheDataType(const string& type, const string& pc) {
	// 用户输入值
	T val;
	cout << "用户输入值:" << endl;
	cin >> val;
	cout << val << "的数据类型是" << type;
	if (type == "long" && pc == "linux") {
		 //控制台看结果
        cout << "在当前系统下占用" << 8 << "个字节的内存大小";
        cout << endl;
       
	}
	else {
        //控制台看结果
        cout << "在当前系统下占用" << sizeof(T) << "个字节的内存大小";
        cout << endl;
	}
    
}

int main()
{
    /*std:: string type , pc;
    bool isqut = true;
    while (isqut)
    {
        cout << "请输入数据类型：" << endl;
        cin >> type;
        cout << "请输入平台类型（例如：linux）：" << endl;
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
            cout << "无效的数据类型" << endl;
        }
        cout << "是否退出？" << endl;
        string res = "否";
        cin >> res;
        if (res == "是") {
            isqut = false;
        }
    }*/
    oper();
   
	return 0;
}