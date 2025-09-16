#ifndef MODELS_H
#define MODELS_H

#include <iostream>
#include <string>
#include <vector> 
using namespace std;

// Create Model ShareData
class ShareData {
    private:
        int id;
        string name;
    public:
        void setId(int id);
        void setName(string name);
        int getId() const;
        string getName() const;
};

// create Model BaseEntity
class BaseEntity : public ShareData {
    private:
        int age;
        string phonenumber;
    public:
        void setAge(int age);
        void setPhonenumber(string phonenumber);
        int getAge() const;
        string getPhonenumber() const;
};

// create Model Teacher
class Teacher : public BaseEntity {
    private:
        double salary;
        vector<int> studentIds; 
    public:
        void setSalary(double salary);
        void addStudentId(int id);
        double getSalary() const;
        const vector<int>& getStudentIds() const; 
};

// Create Model Course
class Course : public ShareData {
    private:
        double hour;
        vector<int> studentIds; 
    public:
        void setHour(double hour);
        void addStudentId(int id); 
        double getHour() const;
        const vector<int>& getStudentIds() const; 
};

// create Model Student
class Student : public BaseEntity {
    private:
        double gpa;
        vector<Course> courses; 
        vector<Teacher> teachers;   
    public:
        void setGpa(double gpa);
        void addTeacher(const Teacher& teacher); 
        void addCourse(const Course& course); 
        double getGpa() const;
        const vector<Teacher>& getTeachers() const; 
        const vector<Course>& getCourses() const;
};

#endif