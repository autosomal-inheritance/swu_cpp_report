#include <iostream>
using namespace std;

extern "C" int get();

int main() {

    int num_1 = get();
    int num_2 = get();

    cout << "���� " << num_1 * num_2 << "�Դϴ�\n";

    return 0;
}