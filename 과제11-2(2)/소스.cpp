#include <iostream>
#include <string>
using namespace std;

istream& prompt(istream& outs) {
	cout << "¾ÏÈ£?";
	return outs;
}

int main() {


	string password;
	while (true) {
		cin >> prompt >> password;
		if (password == "C++") {
			cout << "login success!!" << endl;
			break;
		}
		else
			cout << "login fail. try again!!" << endl;
	}

    return 0;
}