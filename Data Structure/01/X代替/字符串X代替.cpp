#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main01() //ʹ�÷�Χfor������ѭ��
{
    string s;
    cout << "�������ַ�����" << endl;
    getline(cin, s);

    for (auto& c : s) {//�ж�c������ʵ���Ͼ���char
        c = 'X';

    }
    cout << endl << s << endl;

    system("pause");
    return EXIT_SUCCESS;
}
