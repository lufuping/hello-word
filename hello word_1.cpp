#include <iostream>
using namespace std;

int main1()
{
    int h = 104;  // 对应 'h' 的 ASCII 值
    int e = 101;  // 对应 'e' 的 ASCII 值
    int l1 = 108; // 对应 'l' 的 ASCII 值
    int l2 = 108; // 对应 'l' 的 ASCII 值
    int o = 111;  // 对应 'o' 的 ASCII 值
    int space = 32; // 对应空格的 ASCII 值
    int w = 119;  // 对应 'w' 的 ASCII 值
    int r = 114;  // 对应 'r' 的 ASCII 值
    int d = 100;  // 对应 'd' 的 ASCII 值

    cout << static_cast<char>(h) << static_cast<char>(e) << static_cast<char>(l1)
        << static_cast<char>(l2) << static_cast<char>(o) << static_cast<char>(space)
        << static_cast<char>(w) << static_cast<char>(o) << static_cast<char>(r)
        << static_cast<char>(d) << endl;

    cin.get(); // 等待用户输入任意字符之后再退出

    return 0;
}
