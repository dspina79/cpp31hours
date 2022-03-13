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
        Address();
        Address(string, string, string, string);
        Address(string, string, string, string, string);
};

class Person {
    private:
        string _firstName;
        string _lastName;
        string _middleName;
        string _dob;
        
};