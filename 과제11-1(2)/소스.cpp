#include <iostream>
#include<cctype>
#include <iomanip>

using namespace std;

int main() {

    for (int i = 0; i < 4; i++) {
        cout << setw(8) << "dec";
        cout << setw(8) << "hexa";
        cout << setw(8) << "char";
    }
    
    cout << endl;

    for (int i = 0; i < 4; i++) {
        cout << setw(8) << "---";
        cout << setw(8) << "----";
        cout << setw(8) << "----";
    }

    cout << endl;

    for (int i = 0; i < 128; i++) {
        if (i % 4 == 0) {
            cout << endl;
        }


        cout << setw(8) <<dec<< i;
        cout << setw(8) << hex<<i;
        if (isprint(i)) {
            cout << setw(8) << char(i);
        }
        else {
            cout << setw(8) << ".";
        }

    }


    return 0;
}