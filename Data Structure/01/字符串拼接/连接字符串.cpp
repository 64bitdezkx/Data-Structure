#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//��ϰ3.5:��дһ�γ���ӱ�׼�����ж������ַ�����������������һ��������ӳɵĴ��ַ�����Ȼ���޸����������ÿո������Ķ���ַ����ָ�������


//���Ӷ���ַ����ĳ���������ʾ:
int main01()
{
    char IsY = 'Y';
    string s, result;
    cout << "�������һ���ַ���:" << endl;
    while (1) {
        cin >> s;
        result += s;

        cout << "�Ƿ�������룺��Y/N��" << endl;
        cin >> IsY;
        if (IsY == 'y' || IsY == 'Y') {
            cout << "��������һ���ַ���" << endl;
            
        }
        else {
            break;//����ѭ��
        }
    }
    cout << "ƴ��֮����ַ����ǣ�" << result << endl;
    return 0;


    system("pause");
    return EXIT_SUCCESS;
}

//���Ӷ���ַ������Կո�ָ��ĳ���������ʾ:
int main() {

    char IsY = 'Y';
    string s, result;
    cout << "�������һ���ַ���:" << endl;
    while (1) {
        cin >> s;
        result += (s+" ");

        cout << "�Ƿ�������룺��Y/N��" << endl;
        cin >> IsY;
        if (IsY == 'y' || IsY == 'Y') {
            cout << "��������һ���ַ���" << endl;

        }
        else {
            break;//����ѭ��
        }
    }
    cout << "ƴ��֮����ַ����ǣ�" << result << endl;
    return 0;


    system("pause");
    return EXIT_SUCCESS;
}