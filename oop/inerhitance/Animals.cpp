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
        virtual string getAnimalType() { return "Animal"; }
        Animal();
        Animal(string, int);
        ~Animal();
};

void Animal::speak() {
    cout << this->name << " says nothing..." << endl;
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

class Amoeba : public Animal {
    private:
        int numberOfCilia;
    public:
        int getNumberOfCilia() { return this->numberOfCilia; }
        void setNumberOfCilia(int cilia) { this->numberOfCilia = cilia; }
        string getAnimalType() { return "Amoeba"; }
        Amoeba();
};

Amoeba::Amoeba() : Animal("Amoeba", 0) {
    this->numberOfCilia = 0;
}

class Cat : public Animal {
    public:
        Cat(string, int);
        virtual void meow() { cout << "Meow!" << endl; }
        string getAnimalType() { return "Cat"; }
};

Cat::Cat(string name, int age) : Animal(name, age) {}

class Lion : public Cat {
    private:
        int maneLength;
    public:
        Lion(string, int, int);
        void meow() { cout << "ROAR!!!" << endl; }
};

Lion::Lion(string name, int age, int mane) : Cat(name, age) {
    this->maneLength = mane;
}

int main() {
    Animal gooper("Gooper", 1);
    gooper.speak();
    cout << gooper.getName() << " is a " << gooper.getAnimalType() << endl;

    Amoeba todd;
    todd.setNumberOfCilia(5);
    cout << todd.getName() << " has " << todd.getNumberOfCilia() << " cilia." << endl;
    cout << todd.getName() << " is a " << todd.getAnimalType() << endl;


    Cat kitty("Kitty", 1);
    kitty.meow();
    cout << kitty.getName() << " is a " << kitty.getAnimalType() << endl;

    Lion chester("Chester", 2, 4);
    chester.meow();
    cout << chester.getName() << " is a " << chester.getAnimalType() << endl;

    // another way of class instantiation
    Lion *anotherLion = new Lion("Violet", 2, 3);
    anotherLion->meow();
    cout << anotherLion->getName() << " is a " << anotherLion->getAnimalType() << endl;


    return 0;
}


/* 
    Output
        Gooper says nothing...
        Gooper is a Animal
        Amoeba has 5 cilia.
        Amoeba is a Amoeba
        Meow!
        Kitty is a Cat
        ROAR!!!
        Chester is a Cat
        Chester dies.
        Kitty dies.
        Amoeba dies.
        Gooper dies.    
*/