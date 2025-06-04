#include <iostream>
using namespace std;


int get() throw(char*);



int main() {

    while (1) {

        try {
            int num_1 = get();
            int num_2 = get();

            cout << num_1 << "x" << num_2 << "=" << num_1 * num_2 << endl;
        }

        catch (const char* s) {
            cout << s << "예외 발생, 계산할 수 없음\n";
        }
        
    }


    return 0;
}

int get() throw(char*) {

    int n;
    cout << "0~9 사이의 정수 입력 >> ";
    cin >> n;

    if (n < 0 or n>9) {
        throw "input fault ";
    }

    return n;
}