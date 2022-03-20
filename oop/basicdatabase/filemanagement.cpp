#include <iostream>
#include <fstream>
#include "Person.cpp"
#include <vector>

using namespace std;

class RoughPersonSerializer {
    public:
        vector<string> serializePerson(Person* p);
};

vector<string> RoughPersonSerializer(Person* p) {
    vector<string> f;
    f.push_back(p->getFirstName());
    f.push_back(p->getLastName());
    f.push_back(p->getMiddleName());
    f.push_back(p->getEmailAddress());
    return f;
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
};

DataManager::DataManager(string fileName) {
    this->_filename = fileName;
    this->_filestream.open(fileName);
    this->_filestream.close();
}

DataManager::~DataManager() {
    cout << "Closing Data Manager for " << this->_filename << endl;
}

void DataManager::writeToFile(string data) {
    this->_filestream.open(this->_filename);
    this->_filestream << data;
    this->_filestream.close();
}

void DataManager::writeToFile(Person* p) {
    cout << "Going to write " << p->getFullName() << endl;
}