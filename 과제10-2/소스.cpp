#include <iostream>
#include<string>
#include<map>
using namespace std;

void inselt(map<string, string>& m) {
    string name, code;
    cout << "�̸� ��ȣ>>";
    cin >> name >> code;

    m.insert(make_pair(name, code));
    
}

void check(map<string, string>& m) {
    string ch_name, ch_code;

    cout << "�̸�? : ";
    cin >> ch_name;

    while (1) {

        cout << "��ȣ? : ";
        cin >> ch_code;

        if (m[ch_name] == ch_code) {
            cout << "���!!\n";
            break;
        }

        cout << "����~~\n";
    }

}

void end(int& jud) {
    cout << "���α׷��� �����մϴ�.\n";
    jud = 0;
}
void excute(map<string, string>& m, int& judge) {
    int choice;
    cout << "����:1, �˻�:2, ����:3>>";
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

    cout << "***** ��ȣ���� ���α׷� WHO�� �����մϴ� *****\n";
    map<string, string> code_pro;

    int judge = 1;
    while (judge) {
        excute(code_pro, judge);
    }

    return 0;
}