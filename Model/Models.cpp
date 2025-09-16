#include "Models.h"

// Define the functions for each class
// ShareData
void ShareData::setId(int id) {
    this->id = id;
}
void ShareData::setName(string name) { 
    this->name = name;
}
int ShareData::getId() const { return id; }
string ShareData::getName() const { return name; }

// BaseEntity
void BaseEntity::setAge(int age) {
    this->age = age; 
}
void BaseEntity::setPhonenumber(string phonenumber) {
    this->phonenumber = phonenumber;
}
int BaseEntity::getAge() const { return age; }
string BaseEntity::getPhonenumber() const { return phonenumber; }

// Teacher
void Teacher::setSalary(double salary) { 
    this->salary = salary; 
}
void Teacher::addStudentId(int id) {
    this->studentIds.push_back(id);
}
double Teacher::getSalary() const { return salary; }
const vector<int>& Teacher::getStudentIds() const { return studentIds; }

// Course
void Course::setHour(double hour) { 
    this->hour = hour;
}
void Course::addStudentId(int id) {
    this->studentIds.push_back(id);
}
double Course::getHour() const { return hour; }
const vector<int>& Course::getStudentIds() const { return studentIds; }

// Student
void Student::setGpa(double gpa) { 
    this->gpa = gpa; 
}
void Student::addTeacher(const Teacher& teacher) {
    this->teachers.push_back(teacher);
}
void Student::addCourse(const Course& course) {
    this->courses.push_back(course);
}
double Student::getGpa() const { return gpa; }
const vector<Teacher>& Student::getTeachers() const { return teachers; }
const vector<Course>& Student::getCourses() const { return courses; }