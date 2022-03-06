#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
        string name;
        int age;
    public:
        string getName() { return name; }
        int getAge() { return age; }
        void setName(string name) { this->name = name; }
        void setAge(int age) { this->age = age; }
        void speak();
        Animal();
        Animal(string, int);
        ~Animal();
};

void Animal::speak() {
    cout << this->name << "says nothing..." << endl;
}

Animal::Animal() {
    this->name = "Animal";
    this->age = 0;
}

Animal::Animal(string name, int age) {
    this->name = name;
    this->age = age;
}

Animal::~Animal() {
    cout << this->name << " dies." << endl;
}

int main() {
    return 0;
}