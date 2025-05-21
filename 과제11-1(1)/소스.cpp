#include <iostream>
using namespace std;

int main() {

    char l[256];

    while(l!="^Z"){
    
        cin.getline(l, 256, ';');
        
        cout << l << endl;
        cin.ignore(256, '\n');

    }

    cout << "^Z<enter>\n";

    return 0;
}