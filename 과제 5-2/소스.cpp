#include<iostream>
#include<string>
using namespace std;


char& find(char a[], char c, bool& success) {
	int a_len = strlen(a);

	for (int i = 0; i < a_len; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
		else {
			success = false;
		}
	}
}


int main() {

	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);

	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}

	loc = 'm'; // 'M' ��ġ�� 'm' ���
	cout << s << endl; // "mike"�� ��µ�


	return 0;
}