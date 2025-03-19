#include<iostream>
using namespace std;

int main() {

	int num_1;
	int	num_2;

	cout << "두 수를 공백으로 구분하여 입력하세요. : ";
	cin >> num_1 >> num_2;

	if (num_1 > num_2) 
		cout << num_1 << endl;
	
	else 
		cout << num_2 << endl;
	



	return 0;
}