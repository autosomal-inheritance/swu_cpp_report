#include <iostream>
#include<string>
#include<map>
using namespace std;

// map 내에 이름과 암호를 넣는 함수
void inselt(map<string, string>& m) {
    string name, code;
    cout << "이름 암호>>";
    cin >> name >> code;

    // 각 이름 암호 삽입
    m.insert(make_pair(name, code));
    
}


// map안에 연결된 이름과 암호가 매치되는지 확인하는 함수
void check(map<string, string>& m) {
    string ch_name, ch_code;

    cout << "이름? : ";
    cin >> ch_name;
    
    while (1) {

        // 암호가 다르면 반복적으로 물음
        cout << "암호? : ";
        cin >> ch_code;

        if (m[ch_name] == ch_code) {
            cout << "통과!!\n";
            break;
        }

        cout << "실패~~\n";
    }

}

// 프로그램 종료 함수
void end(int& jud) {
    cout << "프로그램을 종료합니다.\n";


    // 이거 없으면 메인 함수 내 while문을 못 나감
    // 사실 swich문 안 쓰면 나가긴 함
    jud = 0;
}


void excute(map<string, string>& m, int& judge) {

    // 원하는 작업 선택
    int choice;
    cout << "삽입:1, 검사:2, 종료:3>>";
    cin >> choice;

    // switch문으로 간소화
    switch (choice)
    {
    case 1: inselt(m); break;
    case 2: check(m); break;
    case 3: end(judge); break;

    // 1, 2, 3외의 입력이 들어왔을 때
    default:
        cout << "error\n";
        break;
    }
}


int main() {

    // 시작 알림
    cout << "***** 암호관리 프로그램 WHO를 시작합니다 *****\n";
    map<string, string> code_pro;

    // 기본설정 true
    int judge = 1;

    // 반복실행
    while (judge) {
        excute(code_pro, judge);
    }

    return 0;
}