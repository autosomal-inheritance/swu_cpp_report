#include <iostream>
using namespace std;

int main() {

    while (1) {
        cout << "0~100 사이의 점수를 입력하세요>>";

        int score;
        cin >> score;

        try {

            if (score > 100 or score < 0) {
                throw score;
            }
            else {

                switch (score / 10) {
                case 6:
                    cout << "D\n";
                    break;
                case 7:
                    cout << "C\n";
                    break;
                case 8:
                    cout << "B\n";
                    break;
                case 9:
                    cout << "A\n";
                    break;
                case 10:
                    cout << "A\n";
                    break;

                default:
                    cout << "F\n";
                    break;
                }
            }
        }

            catch (int score) {
                cout << "점수 입력이 잘못되었습니다.\n";
        }

        
    }


    return 0;
}