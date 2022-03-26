#include "filemanagement.cpp"

int main() {
    Person pete("Peter", "Smith");
    pete.setEmailAddress("peter@nowhere.net");
    pete.setMiddleName("John");
    Address peteAddress("123 Anywhere Drive", "Rochester", "NY", "14623");
    pete.setAddress(&peteAddress);
    DataManager mgr("./lib/data.txt");
    mgr.writeToFile(&pete);

    return 0;
}