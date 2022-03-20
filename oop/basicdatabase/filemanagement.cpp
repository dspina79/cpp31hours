#include <iostream>
#include <fstream>
#include "Person.cpp"

using namespace std;

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