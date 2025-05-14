#include <iostream>
#include<string>
#include<map>
using namespace std;

// map ���� �̸��� ��ȣ�� �ִ� �Լ�
void inselt(map<string, string>& m) {
    string name, code;
    cout << "�̸� ��ȣ>>";
    cin >> name >> code;

    // �� �̸� ��ȣ ����
    m.insert(make_pair(name, code));
    
}


// map�ȿ� ����� �̸��� ��ȣ�� ��ġ�Ǵ��� Ȯ���ϴ� �Լ�
void check(map<string, string>& m) {
    string ch_name, ch_code;

    cout << "�̸�? : ";
    cin >> ch_name;
    
    while (1) {

        // ��ȣ�� �ٸ��� �ݺ������� ����
        cout << "��ȣ? : ";
        cin >> ch_code;

        if (m[ch_name] == ch_code) {
            cout << "���!!\n";
            break;
        }

        cout << "����~~\n";
    }

}

// ���α׷� ���� �Լ�
void end(int& jud) {
    cout << "���α׷��� �����մϴ�.\n";


    // �̰� ������ ���� �Լ� �� while���� �� ����
    // ��� swich�� �� ���� ������ ��
    jud = 0;
}


void excute(map<string, string>& m, int& judge) {

    // ���ϴ� �۾� ����
    int choice;
    cout << "����:1, �˻�:2, ����:3>>";
    cin >> choice;

    // switch������ ����ȭ
    switch (choice)
    {
    case 1: inselt(m); break;
    case 2: check(m); break;
    case 3: end(judge); break;

    // 1, 2, 3���� �Է��� ������ ��
    default:
        cout << "error\n";
        break;
    }
}


int main() {

    // ���� �˸�
    cout << "***** ��ȣ���� ���α׷� WHO�� �����մϴ� *****\n";
    map<string, string> code_pro;

    // �⺻���� true
    int judge = 1;

    // �ݺ�����
    while (judge) {
        excute(code_pro, judge);
    }

    return 0;
}