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

        // 영어 대문자 아스키 65~90 (A ~ Z)
        // 영어 소문자 아스키 97~122 (a ~ z)

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