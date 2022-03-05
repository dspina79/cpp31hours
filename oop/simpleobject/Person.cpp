#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        static int numberOfPersons;
    public:
        string getFirstName() { return firstName; }
        string getLastName() { return lastName; }
        string getEmailAddress() { return emailAddress; }
        string getFullName() { return firstName + " " + lastName; }
        int getAge() { return age; }
        void setFirstName(string fn) { firstName = fn; };
        void setLastName(string ln) { lastName = ln; }
        void setEmailAddress(string email) { emailAddress = email; }
        void setAge(int newAge) { age = newAge; }

        void reset(string, string, string, int);
        void introduce();
        static void printPopulation();
        Person();
        Person(string, string);
        ~Person();

};

int Person::numberOfPersons = 0;

void Person::reset(string firstName, string lastName, string email, int age) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = email;
    this->age = age;
}

 void Person::introduce() {
    cout << "Hello, I am " << this->getFullName() << endl;
}

Person::Person() {
    this->firstName = "Unknown";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    Person::numberOfPersons++;
}

Person::Person(string firstName, string lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = "";
    this->age = 0;
    Person::numberOfPersons++;
}

Person::~Person() {
    cout << "Removing " << this->getFullName() << endl;
    Person::numberOfPersons--;
    Person::printPopulation();
}

void Person::printPopulation() {
    if (Person::numberOfPersons == 0) {
        cout << "There is nobody..." << endl;
    } else if (Person::numberOfPersons == 1) {
        cout << "There is just one person." << endl;
    } else {
        cout << "There are " << Person::numberOfPersons << " people." << endl;
    }
}

int main() {
    Person lou("Lou", "Miller");
    lou.introduce();
    Person::printPopulation();
    Person linda("Linda", "Seridan");
    linda.setEmailAddress("linda@nowhere.net");
    linda.setAge(30);
    linda.introduce();
    Person::printPopulation();
    return 0;
}