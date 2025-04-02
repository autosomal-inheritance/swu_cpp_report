#include<iostream>
#include<string>
using namespace std;


class Person {
	string name;
	string tel;

public:
	Person();

	string getName() { return name; }
	string getTel() { return tel; }

	void set(string nam, string tel);

};

void Person::set(string nam, string te) {
	name = nam;
	tel = te;
}

Person::Person() {
	name = "이름";
	tel = "전화번호";
}

int main() {

	Person per_list[3];

	cout << "이름과 전화번호를 입력해 주세요" << endl;

	string name;
	string tel;


	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i+1 << " : ";
		
		cin >> name >> tel;
		
		per_list[i].set(name, tel);

	}
	
	Person* p;

	p = per_list;

	cout << "모든 사람의 이름은 ";

	for (int i = 0; i < 3; i++) {
		cout << p->getName() << " ";
		p++;
	}

	cout << endl;
	cout << "전화번호를 검색합니다. 이름을 입력하세요 : ";

	cin >> name;

	for (int i = 0; i < 3; i++) {
		if (name == per_list[i].getName()) {
			tel = per_list[i].getTel();
		}
	}

	cout << "전화번호는" << tel << endl;

	return 0;
}