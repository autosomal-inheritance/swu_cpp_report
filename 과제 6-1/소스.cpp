#include<iostream>
#include<string>
using namespace std;

class Person {
	int id ;
	double weight;
	string name;

public:
	Person(int i , string na, double we);

	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};


Person::Person(int i = 1, string na = "Grace", double we = 20.5) {
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