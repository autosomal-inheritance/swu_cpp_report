#include <iostream>
using namespace std;

class Phone { // ��ȭ ��ȣ�� ǥ���ϴ� Ŭ����
    string name;
    string telnum;
    string address;
public:
    Phone(string name = "", string telnum = "", string address = "") {
        this->name = name;
        this->telnum = telnum;
        this->address = address;

    }


    string return_name() { return this->name; };
    string return_telnum() { return this->telnum; };
    string return_address() { return this->address; };

    friend istream& operator>> (istream& stream, Phone& obj);
    friend ostream& operator<< (ostream& stream, Phone obj);

};


istream& operator>> (istream& stream, Phone& obj) {

    cout << "�̸� : ";
    cin >> obj.name;

    cout << "��ȭ ��ȣ : ";
    cin >> obj.telnum;

    cout << "�ּ� : ";
    cin >> obj.address;

    return stream;
}


ostream& operator<< (ostream& stream, Phone obj) {
    stream << "("<< obj.name<<"," << obj.telnum << "," << obj.address << ")";
    return stream;
}

int main() {

    Phone girl, boy;
    cin>> girl >> boy;
    cout << girl << endl << boy << endl;


    return 0;
}