#include <iostream>
using namespace std;

int main1()
{
    int h = 104;  // ��Ӧ 'h' �� ASCII ֵ
    int e = 101;  // ��Ӧ 'e' �� ASCII ֵ
    int l1 = 108; // ��Ӧ 'l' �� ASCII ֵ
    int l2 = 108; // ��Ӧ 'l' �� ASCII ֵ
    int o = 111;  // ��Ӧ 'o' �� ASCII ֵ
    int space = 32; // ��Ӧ�ո�� ASCII ֵ
    int w = 119;  // ��Ӧ 'w' �� ASCII ֵ
    int r = 114;  // ��Ӧ 'r' �� ASCII ֵ
    int d = 100;  // ��Ӧ 'd' �� ASCII ֵ

    cout << static_cast<char>(h) << static_cast<char>(e) << static_cast<char>(l1)
        << static_cast<char>(l2) << static_cast<char>(o) << static_cast<char>(space)
        << static_cast<char>(w) << static_cast<char>(o) << static_cast<char>(r)
        << static_cast<char>(d) << endl;

    cin.get(); // �ȴ��û����������ַ�֮�����˳�

    return 0;
}
