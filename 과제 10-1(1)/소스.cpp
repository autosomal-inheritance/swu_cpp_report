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
    if (equalArrays(x, y, 5)) cout << "같다" << endl; // 5는 배열 x, y의 크기
    else cout << "다르다" << endl;
    if (equalArrays(a, b, 3)) cout << "같다" << endl; // 3은 배열 a, b의 크기
    else cout << "다르다" << endl;


    return 0;
}