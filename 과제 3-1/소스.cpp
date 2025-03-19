#include <iostream>
#include <string>
#include <cstring>
using namespace std;



class Date {

	int year, month, day;

public:

	char show();

	int getyear();
	int getmonth();
	int getday();

	Date(int a, int b, int c);

	Date(string da);


};

Date::Date(int a, int b, int c) {
	year = a;
	month = b;
	day = c;
}

Date::Date(string da) {

	int index_1 = da.find("/");
	string x = da.substr(0, index_1);

	int index_2 = da.find("/", index_1 + 1);
	string y = da.substr(index_1+1, index_2-index_1-1);

	string z = da.substr(index_2+1, da.length()-index_2-1 );

	year = stoi(x);
	month = stoi(y);
	day = stoi(z);


}

char Date::show() {
	cout << year << "�� " << month << "�� " << day << "��" << endl;

	return 0;
}

int Date::getyear() {
	return year;
}

int Date::getmonth() {
	return month;
}

int Date::getday() {
	return day;
}

int main() {

	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/08/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getyear() << ',' << birth.getmonth() << ',' << birth.getday() << endl;

	return 0;
}