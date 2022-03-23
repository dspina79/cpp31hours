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
    f.push_back(p->getPhoneNumber());
    f.push_back(p->getDateOfBirth());
    Address addr = p->getAddress();
    f.push_back(addr.getAddressLine1());
    f.push_back(addr.getAddressLine2());
    f.push_back(addr.getCity());
    f.push_back(addr.getStateProvince());
    f.push_back(addr.getPostalCode());
    f.push_back(addr.getCountryCode());
    return f;
}

Person* RoughPersonSerializer::deserializePerson(vector<string> source) {
    string firstName = source[0];
    string lastName = source[1];
    string middleName = source[2];
    string emailAddress = source[3];
    string phone = source[4];
    string dob = source[5];
    string address1 = source[6];
    string address2 = source[7];
    string city = source[8];
    string state = source[9];
    string postalCode = source[10];
    string country = source[11];
    Address addr(address1, address2, city, state, postalCode, country);
    Person p(firstName, lastName);
    p.setMiddleName(middleName);
    p.setEmailAddress(emailAddress);
    p.setPhoneNumber(phone);
    p.setDateOfBirth(dob);
    p.setAddress(&addr);
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
    for (int i = 0; i < dp.size(); i++) {
        this->_filestream << dp[i];
    } 
    this->_filestream.close();  
}