#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // 읽기 
    const char* address = "c:\\windows\\system.ini";

    ifstream fin;
    fin.open(address, ios::in | ios::binary);
    if (!fin) {
        cout << "Error";
        return 0;
    }

    int c = 0;
    char text[256];

    int index = 0;

    while (!fin.eof()) {

        c = fin.get();
        text[index] = (char)c;


        index++;
    }

    fin.close();

    // 쓰기

    ofstream fout("c:\\temp\\system.txt", ios::out | ios::binary);
    if (!fout) {
        cout << "Error";
            return 0;
    }
    
    for (int i = index-2; i > -1; i--) {
        fout << text[i];
    }

    fout.close();

    return 0;
}