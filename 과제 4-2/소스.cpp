#include<iostream>
#include<string>
using namespace std;

int main() {

	string text;

	cout << "문자열 입력 : ";

	getline(cin, text);

	int index = 0;

	int count = 0;

	while (text[index] != NULL) {

		if (text[index] == "a"[0]) {
			count++;
		}

		index++;

}
	
	cout << "\"a\" 문자는 " << count << "개 있습니다." << endl;

	return 0;
}


/*
int index_1 = da.find("/");
	string x = da.substr(0, index_1);
*/