#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main02()
{
    string s;
    cout << "�������ַ�����" << endl;
    getline(cin, s);
    const auto num=s.size();
    for (int i = 0; i <num ;i++) {//Ҳ����ֱ�Ӷ���iΪ unsigned�޷�������
        if (s[i] != ' ') {
            s[i] = 'X';
        }
    }
    cout << endl << s << endl;


    system("pause");
    return EXIT_SUCCESS;
}