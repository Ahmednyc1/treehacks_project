#include "Patient.cpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Doctor : public Person {

public:
  Doctor();
  Doctor(std::string d_name, std::string h_provider, std::string doctor_spec);
  void setname(const std::string &doc_name);
  std::string getname() const;
  void sethealthcare(const std::string &healthcare);
  std::string gethealthcare() const;
  void set_doctortype(const string &typ);
  string getdoctype() const;
  bool addDoctorsinfo(const string &new_entry);
  bool add(const int &an_entry);
int time_slots_;
private:
  static const int max_capacity = 12;
  int time_slots[max_capacity];
  vector<string> doctors;
  string name_;
  string healthcare_provided_;
  string type_of_doctor_;
  
};
Doctor::Doctor() : name_(""), healthcare_provided_(""), type_of_doctor_("") {}
Doctor::Doctor(string d_name, string h_provider, string doctor_spec) {
  name_ = d_name;
  healthcare_provided_ = h_provider;
  type_of_doctor_ = doctor_spec;
}
void Doctor::setname(const string &doc_name) { name_ = doc_name; }
string Doctor::getname() const { return name_; }
void Doctor::sethealthcare(const string &healthcare) {
  healthcare_provided_ = healthcare;
}
string Doctor::gethealthcare() const { return healthcare_provided_; }
void Doctor::set_doctortype(const string &typ) { type_of_doctor_ = typ; }
string Doctor::getdoctype() const { return type_of_doctor_; }

bool Doctor::addDoctorsinfo(const string &new_entry) {
  for (int i = 0; i < doctors.size(); i++) {
    if (doctors[i] == new_entry) {
      return false;
    }
  }
  doctors.push_back(new_entry);
  return true;
}

bool Doctor::add(const int &an_entry) {
  bool has_room_to_add = (time_slots_ < max_capacity);
  if (has_room_to_add) {
    bool time_already_taken = false;
    for (int i = 0; i < time_slots_; i++) {
      if (time_slots[i] == an_entry) {
        time_already_taken = true;
        break;
      }
    }
    if (!time_already_taken) {
      time_slots[time_slots_] = an_entry;
      time_slots_++;
    } else {
      has_room_to_add = false;
    }
  }
  return has_room_to_add;
}
    
bool is_match(Doctor& doctor, Patient& patient) {
  // Check if the patient's healthcare provider matches the doctor's provided healthcare
  if (doctor.gethealthcare() != patient.getphealthcare()) {
    return false;
  }
  
  // Check if the patient's available time is within the doctor's available time slots
  int patient_time = patient.getPatientsTime();
  bool is_available = false;
  for (int i = 0; i < doctor.time_slots_; i++) {
    if (patient_time >= doctor.time_slots[i] && patient_time < doctor.time_slots[i] + 1) {
      is_available = true;
      break;
    }
  }
  if (!is_available) {
    return false;
  }
  
  // Check if the patient's pain matches the doctor's type of specialty
  if (doctor.getdoctype() != patient.getPatientsPain()) {
    return false;
  }
  
  // If all checks pass, then it is a match
  return true;
}