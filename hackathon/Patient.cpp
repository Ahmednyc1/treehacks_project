#include "Person.cpp"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Patient : public Person {
public:
  Patient();
  Patient(string patient_name, string patients_healthcare,
          string patients_pain);
  void setPname(const string &pname);
  string getPname();
  void setPhealthcare(const string &phealthcare);
  string getphealthcare();
  void setPatientsPain(const string &pPain);
  string getPatientsPain();
  string addPatientsinfo(string &new_entry);
  void setPatientstimeavailibity(int time_from, int time_to);
  int getPatientsTime();

private:
  vector<string> Patients_info;
  string patient_name_;
  string patients_healthcare_;
  string patients_pain_;
  int time_from_;
  int time_to_;
};
Patient::Patient()
    : patient_name_(""), patients_healthcare_(""), patients_pain_(""),
      time_from_(0), time_to_(0) {}
Patient::Patient(string patient_name, string patients_healthcare,
                 string patients_pain) {
  patient_name_ = patient_name;
  patients_healthcare_ = patients_healthcare;
  patients_pain_ = patients_pain;
}
void Patient::setPname(const string &pname) { patient_name_ = pname; }
string Patient::getPname() { return patient_name_; }
void Patient::setPhealthcare(const string &phealthcare) {
  patients_healthcare_ = phealthcare;
}
string Patient::getphealthcare() { return patients_healthcare_; }
void Patient::setPatientsPain(const string &pPain) { patients_pain_ = pPain; }
string Patient::getPatientsPain() { return patients_pain_; }
string Patient::addPatientsinfo(string &new_entry) {
  for (size_t i = 0; i < Patients_info.size(); i++) {
    if (Patients_info[i] == new_entry) {
      return "Entry already exists.";
    }
  }
  Patients_info.push_back(new_entry);
  return "Entry added.";
}
void Patient ::setPatientstimeavailibity(int time_from, int time_to) {
  time_from_ = time_from;
  time_to_ = time_to;
}
int Patient::getPatientsTime() { return time_from_ + time_to_; }