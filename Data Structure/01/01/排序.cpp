#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//��������,�ȸ㶮�������鴫��֮����ʹ��swap��������
//void swap(int arr[], int i, int j) {
//    int temp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = temp;
//}



//ð������

void printBubble(int arr[], int n) {//arr�Ǵ���������飬n������Ԫ�صĸ���,ע�⣺���鴫���������׵�ַ
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//void bubbleSort(int  arr[], int n) {//arr�Ǵ���������飬n������Ԫ�صĸ���,ע�⣺���鴫���������׵�ַ
//
//    for (int i = 0; i<n-1; i++) {
//        for (int j = 0; j < n-i-1; j++) {//��һ����Ҫn��1�αȽϣ��ڶ�����Ҫn-2��
//            if (arr[j] > arr[j+1]) {
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//    
//}

int main01()
{
    //int arr[5] = {1,2.5,3,6};
    //bubbleSort(arr, 5);

    //printBubble(arr, 5);

    int s[10] = { 8,1,9,7,2,4,5,6,10,3 };
        cout << "��ʼ���У�";
        printBubble(s, 10);
        bubbleSort(s, 10);
        cout << "��������";
        printBubble(s, 10);
        system("pause");

    return EXIT_SUCCESS;
}

//#include<iostream>
//using namespace std;
//
//void print(int arr[], int n)
//{
//    for (int j = 0; j < n; j++)
//    {
//        cout << arr[j] << "  ";
//    }
//    cout << endl;
//}
//
//void BubbleSort(int arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int s[10] = { 8,1,9,7,2,4,5,6,10,3 };
//    cout << "��ʼ���У�";
//    print(s, 10);
//    BubbleSort(s, 10);
//    cout << "��������";
//    print(s, 10);
//    system("pause");
//}