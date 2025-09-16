#ifndef VALIDATION_H
#define VALIDATION_H

#include "../Model/Models.h"
#include <string>

bool isValidName(const string& name);
bool isValidEgyptianPhoneNumber(const string& number);

// StudentValidation Class
class StudentValidation {
public:
    int validateStudent(const Student& student) const;
};

// CourseValidation Class
class CourseValidation {
public:
    int validateCourse(const Course& course) const;
};

// TeacherValidation Class
class TeacherValidation {
public:
    int validateTeacher(const Teacher& teacher) const;
};

class ValidationService {
public:
    void fullData(const string& type);
    void notExist(const string& type, int id);
};

#endif