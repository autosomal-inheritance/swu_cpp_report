#include<iostream>
#include<string>
using namespace std;

int main() {

	string text;

	cout << "���ڿ� �Է� : ";

	getline(cin, text);

	int index = 0;

	int count = 0;

	while (text[index] != NULL) {

		if (text[index] == "a"[0]) {
			count++;
		}

		index++;

}
	
	cout << "\"a\" ���ڴ� " << count << "�� �ֽ��ϴ�." << endl;

	return 0;
}


/*
int index_1 = da.find("/");
	string x = da.substr(0, index_1);
*/