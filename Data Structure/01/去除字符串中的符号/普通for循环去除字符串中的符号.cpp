#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
//��ϰ3.10:��дһ�γ��򣬶���һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ��֡�
int main(){
    
        string s;
        cout << "�������ַ�����" << endl;
        getline(cin, s);
        const auto num = s.size();
        for (int i = 0; i < num; i++) {//Ҳ����ֱ�Ӷ���iΪ unsigned�޷�������
            if (!ispunct(s[i])) {
                cout << s[i];
            }
        }

            cout << endl;
            system("pause");
            return EXIT_SUCCESS;
}
  