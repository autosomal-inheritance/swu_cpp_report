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
	name = "�̸�";
	tel = "��ȭ��ȣ";
}

int main() {

	Person per_list[3];

	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���" << endl;

	string name;
	string tel;


	for (int i = 0; i < 3; i++) {
		cout << "��� " << i+1 << " : ";
		
		cin >> name >> tel;
		
		per_list[i].set(name, tel);

	}
	
	Person* p;

	p = per_list;

	cout << "��� ����� �̸��� ";

	for (int i = 0; i < 3; i++) {
		cout << p->getName() << " ";
		p++;
	}

	cout << endl;
	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� : ";

	cin >> name;

	for (int i = 0; i < 3; i++) {
		if (name == per_list[i].getName()) {
			tel = per_list[i].getTel();
		}
	}

	cout << "��ȭ��ȣ��" << tel << endl;

	return 0;
}