#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout << "�������ַ�����" << endl;
    getline(cin, s);
    const auto num = s.size();
    int i=0;
    while (s[i] != '\0') {//�ַ��������ı�־��'\0'
        if (s[i] != ' ') {
            s[i] = 'X';
        }
        ++i;
    }


    cout << endl << s << endl;


    system("pause");
    return EXIT_SUCCESS;
}