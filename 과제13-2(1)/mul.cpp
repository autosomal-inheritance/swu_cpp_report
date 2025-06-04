#include <iostream>
using namespace std;

extern "C" int get();

int main() {

    int num_1 = get();
    int num_2 = get();

    cout << "°öÀº " << num_1 * num_2 << "ÀÔ´Ï´Ù\n";

    return 0;
}