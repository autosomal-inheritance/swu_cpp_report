#include<iostream>
#include<string>
using namespace std;

int main() {

	string text;

	cout << "���ڿ� �Է� : ";

	getline(cin, text);

	int index = -1;

	int count = 0;



	while (true) {

		index = text.find("a", index+1);

		if (index == -1) {
			break;
		}

		count++;


	}



	cout << "\"a\" ���ڴ� " << count << "�� �ֽ��ϴ�." << endl;

	return 0;
}


/*
int index_1 = da.find("/");
	string x = da.substr(0, index_1);
*/