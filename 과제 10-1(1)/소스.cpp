#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T arr_1[], T arr_2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr_1[i] != arr_2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {

    int x[] = { 1, 10, 100, 5, 4 };
    int y[] = { 1, 10, 100, 5, 4 };
    double a[] = { 0.1, 2.3, 3.5 };
    double b[] = { 5.3, -2.1, 12.5 };
    if (equalArrays(x, y, 5)) cout << "����" << endl; // 5�� �迭 x, y�� ũ��
    else cout << "�ٸ���" << endl;
    if (equalArrays(a, b, 3)) cout << "����" << endl; // 3�� �迭 a, b�� ũ��
    else cout << "�ٸ���" << endl;


    return 0;
}