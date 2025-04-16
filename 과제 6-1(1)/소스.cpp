#include<iostream>
#include<string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;

public:
	Person();
	Person(int i, string na);
	Person(int i, string na, double we);

	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

Person::Person() {
	id = 1;
	weight = 20.5;
	name = "Grace";
}
Person::Person(int i , string na) {
	id = i;
	weight = 20.5;
	name = na;
}

Person::Person(int i, string na , double we) {
	id = i;
	weight = we;
	name = na;
}


int main() {

	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);

	grace.show();
	ashley.show();
	helen.show();

	return 0;
}