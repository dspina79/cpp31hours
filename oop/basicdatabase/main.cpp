#include "Person.cpp"

int main() {
    Person pete("Peter", "Smith");
    pete.setEmailAddress("peter@nowhere.net");
    pete.setMiddleName("John");
    Address peteAddress("123 Anywhere Drive", "Rochester", "NY", "14623");
    pete.setAddress(&peteAddress);
    cout << pete.getFullName() << endl;
    cout << pete.getAddress().getAddressLine1() << endl;
    return 0;
}