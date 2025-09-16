#include "Validation.h"
#include <iostream>
#include <cctype> 

// validate names
bool isValidName(const string& name) {
    if (name.length() < 5 || name.length() > 30) {
        cout << "Invalid Name: Name must be between 5 and 30 characters." <<endl;
        return false;
    }
    for (char const &c : name) {
        if (!isalpha(c) && c != ' ') {
            cout << "Invalid Name: Name can only contain letters and spaces." <<endl;
            return false;
        }
    }
    return true;
}

// validate phone numbers
bool isValidEgyptianPhoneNumber(const string& number) {
    if (number.length() != 11) {
        cout << "Invalid Phone Number! Number must be exactly 11 digits." <<endl;
        return false;
    }
    if (number[0] != '0' || number[1] != '1') {
        cout << "Invalid Phone Number! Number must start with '01'." <<endl;
        return false;
    }
    char third_digit = number[2];
    if (third_digit != '0' && third_digit != '1' && third_digit != '2' && third_digit != '5') {
        cout << "Invalid Phone Number! The third digit must be 0, 1, 2, or 5." <<endl;
        return false;
    }
    for (int i = 0; i < number.length(); ++i) {
        if (!isdigit(number[i])) {
            cout << "Invalid Phone Number! All characters must be digits." <<endl;
            return false;
        }
    }
    return true;
}

// StudentValidation Class
int StudentValidation::validateStudent(const Student& student) const {
    if (!isValidName(student.getName())) {
        return -1;
    } else if (student.getAge() > 30 || student.getAge() < 18){
        cout << "Invalid Age! Age must be between 18 and 30." <<endl;
        return -1;
    } else if (!isValidEgyptianPhoneNumber(student.getPhonenumber())) {
        return -1;
    } else if (student.getGpa() >= 5 || student.getGpa() < 0){
        cout << "Invalid GPA! GPA must be between 0 and 4.99." <<endl;
        return -1;
    }
    return 1;
}

// CourseValidation Class
int CourseValidation::validateCourse(const Course& course) const {
    if (!isValidName(course.getName())) {
        return -1;
    } else if (course.getHour() > 20 || course.getHour() < 5){
        cout << "Invalid Hour! Hour must be between 5 and 20." <<endl;
        return -1;
    }
    return 1;
}

// TeacherValidation Class
int TeacherValidation::validateTeacher(const Teacher& teacher) const {
    if (!isValidName(teacher.getName())) {
        return -1;
    } else if (teacher.getAge() > 60 || teacher.getAge() < 30){ 
        cout << "Invalid Age! Age must be between 30 and 60." <<endl;
        return -1;
    } else if (!isValidEgyptianPhoneNumber(teacher.getPhonenumber())) {
        return -1;
    } else if (teacher.getSalary() < 5000 || teacher.getSalary() > 15000){
        cout << "Invalid Salary! Salary must be between 5000 and 15000." <<endl;
        return -1;
    }
    return 1;
}

// ValidationService implementations
void ValidationService::fullData(const string& type) {
    cout << "Full " << type << "!" <<endl;
}

void ValidationService::notExist(const string& type, int id) {
    cout << type << " with Id [" << id << "] does not exist." <<endl;
}