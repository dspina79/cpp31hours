#include <iostream>
#include <string>

using namespace std;

void changeString(string* val, string newVal) {
    *val = newVal;
}

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is " << name << endl;
    changeString(&name, "Donald Duck");
    cout << "Now your name is " << name << endl;
    return 0;
}