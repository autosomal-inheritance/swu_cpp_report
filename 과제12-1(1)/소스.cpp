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
    const char line_change = '\n';
    int line_count = 1;
    char text = '\n';

    while ((c = fin.get()) != EOF) {

        if (text == line_change) {
            cout << line_count++ << " : ";
        }

        text = (char)c;

        cout << text;
        c++;


    }

    fin.close();

    return 0;
}