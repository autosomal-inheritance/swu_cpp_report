#include<iostream>
using namespace std;

int main() {

	

	char word[256];
	cin >> word;


	// len함수 있음
	int len = strlen(word);

	for (int i = 0; i < strlen(word); i++) {

		for (int j = 0; j < i + 1; j++) {
			cout << word[j];
		}

		cout << endl;

	}
			

	return 0;
}