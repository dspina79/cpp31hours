#include "Person.cpp"

int main() {
    Person pete("Peter", "Smith");
    pete.setEmailAddress("peter@nowhere.net");
    pete.setMiddleName("John");
    pete.getAddress().setAddress1("123 Anywhere Drive");
    cout << pete.getFullName() << endl;
    cout << pete.getAddress().getAddressLine1() << endl;
    return 0;
}