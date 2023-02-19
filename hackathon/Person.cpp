
#include <iostream>
using namespace std; 

class Person{
    public:
    Person();
    Person(string p_name,string city,string address );
    void setName(const string &name);
    string getName();
     void setCity(const string &person_city);
     string getCity();
     void setaddress(const string &person_address);
     string getaddress();
    private:
    string p_name_;
    string city_;
    string address_ ;

};

Person::Person():p_name_(""),city_(""),address_(""){

}
Person::Person(string p_name, string city,string address){
    p_name_=p_name;
    city_=city ;
    address_=address;
}
void Person:: setName(const string &name){
    p_name_=name ;
}
string Person::getName(){
    return p_name_;
}
void Person::setCity(const string &person_city){
    city_=person_city;
}
string Person::getCity(){
    return city_;
}
void Person::setaddress(const string& person_address){
    address_=person_address;
}
string Person::getaddress(){
    return address_ ;
}