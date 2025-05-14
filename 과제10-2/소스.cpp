#include <iostream>
#include<string>
#include<map>
using namespace std;

void inselt(map<string, string>& m) {
    string name, code;
    cout << "이름 암호>>";
    cin >> name >> code;

    m.insert(make_pair(name, code));
    
}

void check(map<string, string>& m) {
    string ch_name, ch_code;

    cout << "이름? : ";
    cin >> ch_name;

    while (1) {

        cout << "암호? : ";
        cin >> ch_code;

        if (m[ch_name] == ch_code) {
            cout << "통과!!\n";
            break;
        }

        cout << "실패~~\n";
    }

}

void end(int& jud) {
    cout << "프로그램을 종료합니다.\n";
    jud = 0;
}
void excute(map<string, string>& m, int& judge) {
    int choice;
    cout << "삽입:1, 검사:2, 종료:3>>";
    cin >> choice;

    switch (choice)
    {
    case 1: inselt(m); break;
    case 2: check(m); break;
    case 3: end(judge); break;

    default:
        cout << "error\n";
        break;
    }
}

int main() {

    cout << "***** 암호관리 프로그램 WHO를 시작합니다 *****\n";
    map<string, string> code_pro;

    int judge = 1;
    while (judge) {
        excute(code_pro, judge);
    }

    return 0;
}