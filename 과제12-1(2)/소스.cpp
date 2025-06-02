#include <iostream>
#include <fstream>
using namespace std;

int main() {


    const char* address = "c:\\windows\\system.ini";

    ifstream fin(address);
    if (!fin) {
        cout << "Error";
        return 0;
    }

    int c = 0;
    char text = '\n';

    while ((c = fin.get()) != EOF) {

        text = (char)c;

        // ���� �빮�� �ƽ�Ű 65~90 (A ~ Z)
        // ���� �ҹ��� �ƽ�Ű 97~122 (a ~ z)

        if (int(text) > 96 && int(text) < 123) {
            cout << char(text - 32);
        }
        else {
            cout << text;
        }
        


    }

    fin.close();

    return 0;
}