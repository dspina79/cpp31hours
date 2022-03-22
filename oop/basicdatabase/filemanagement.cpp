#include <iostream>
#include <fstream>
#include "Person.cpp"
#include <vector>

using namespace std;

class RoughPersonSerializer {
    public:
        vector<string> serializePerson(Person* p);
        Person* deserializePerson(vector<string> s);
};

vector<string> RoughPersonSerializer::serializePerson(Person* p) {
    vector<string> f;
    f.push_back(p->getFirstName());
    f.push_back(p->getLastName());
    f.push_back(p->getMiddleName());
    f.push_back(p->getEmailAddress());
    return f;
}

Person* RoughPersonSerializer::deserializePerson(vector<string> source) {
    string firstName = source[0];
    string lastName = source[1];
    string middleName = source[2];
    string emailAddress = source[3];

    Person p(firstName, lastName);
    p.setMiddleName(middleName);
    p.setEmailAddress(emailAddress);

    return &p;
}

class DataManager {
    private:
        string _filename;
        ofstream _filestream;
    public:
        DataManager(string);
        ~DataManager();
        void writeToFile(string);
        void writeToFile(Person* p);
        vector<string> readToVector();
};

DataManager::DataManager(string fileName) {
    this->_filename = fileName;
    this->_filestream.open(fileName);
    this->_filestream.close();
}

DataManager::~DataManager() {
    cout << "Closing Data Manager for " << this->_filename << endl;
}

vector<string> DataManager::readToVector() {
    vector<string> data;
    string line;
    ifstream myFile(this->_filename);
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            data.push_back(line);
        }
    }
    return data;
}

void DataManager::writeToFile(string data) {
    this->_filestream.open(this->_filename);
    this->_filestream << data;
    this->_filestream.close();
}

void DataManager::writeToFile(Person* p) {
    cout << "Going to write " << p->getFullName() << endl;
    RoughPersonSerializer s;
    vector<string> dp = s.serializePerson(p);
    this->_filestream.open(this->_filename);
    while (dp.size() > 0) {
        this->_filestream << dp.pop_back();
    } 
    this->_filestream.close();  
}