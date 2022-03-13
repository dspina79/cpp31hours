#include <iostream>
#include <string>

using namespace std;

class Address {
    private:
        string _address1;
        string _address2;
        string _city;
        string _state;
        string _postalCode;
        string _countryCode;
    public:
        string getAddressLine1() { return _address1; }
        string getAddressLine2() { return _address2; }
        string getCity() { return _city; }
        string getStateProvince() { return _state; }
        string getPostalCode() { return _postalCode; }
        string getCountryCode() { return _countryCode; }
        void setAddress1(string address1) { _address1 = address1; }
        void setAddress2(string address2) { _address2 = address2; }
        void setCity(string city) { _city = city; }
        void setStateProvince(string stateProvince) { _state = stateProvince; }
        void setPostalCode(string postalCode) { _postalCode = postalCode; }
        void setCountryCode(string countryCode) { _countryCode = countryCode; }
        void printAddress();
        Address();
        Address(string, string, string, string);
        Address(string, string, string, string, string, string);
};

Address::Address() {
    this->_address1 = "";
    this->_address2 = "";
    this->_city = "";
    this->_state = "";
    this->_postalCode = "";
    this->_countryCode = "";
}

Address::Address(string address1, string city, string stateProvince, string postalCode) {
    this->_address1 = address1;
    this->_address2 = "";
    this->_city = city;
    this->_state = stateProvince;
    this->_postalCode = postalCode;
    this->_countryCode = "";
};

Address::Address(string address1, string address2, string city, string stateProvince, string postalCode, string countryCode) {
    this->_address1 = address1;
    this->_address2 = address2;
    this->_city = city;
    this->_state = stateProvince;
    this->_postalCode = postalCode;
    this->_countryCode = countryCode;
}

void Address::printAddress() {
    string delim = ", ";
    cout << this->_address1 << endl;

    if (this->_address2 != "") {
        cout << this->_address2 << endl;
    }
    if (this->_city == "" || this->_state == "") {
        delim = " ";
    }

    cout << this->_city << delim << this->_state << "  " << this->_postalCode << endl;
    
    if (this->_countryCode != "") {
        cout << this->_address1 << endl;
    }
}

class Person {
    private:
        string _firstName;
        string _lastName;
        string _middleName;
        string _dob;
        Address *addr;
};