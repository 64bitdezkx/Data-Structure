#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
//��ϰ3.10:��дһ�γ��򣬶���һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ��֡�
int main01()
{
    string s;
    cout << "�������ַ�����" << endl;
    getline(cin, s);

    for (auto& c : s) {
        if (!ispunct(c)) {
            cout << c ;
        }
    }
    cout << endl;

    system("pause");
    return EXIT_SUCCESS;
}