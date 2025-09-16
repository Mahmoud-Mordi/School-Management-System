#include "Repo.h"
#include <iostream>

// Student Data
static int studentIdCounter = 1;

// Course Data
static int courseIdCounter = 1;

// Teacher Data
static int teacherIdCounter = 1;

////////////////////////////// Student ////////////////////////////// 
//StudentRepositoryImpl
int StudentRepositoryImpl::addStudent(Student student) {
    student.setId(studentIdCounter++);
    this->students.push_back(student);
    return student.getId();
}

Student* StudentRepositoryImpl::getStudentById(int id) {
    for(int i = 0; i < this->students.size(); i++){
        if(this->students[i].getId() == id){
            return &this->students[i];
        }
    }
    return nullptr;
}

int StudentRepositoryImpl::editStudent(Student student){
    for(int i = 0; i < this->students.size(); i++){
        if(this->students[i].getId() == student.getId()){
            this->students[i] = student;
            return 1 ;
        }
    }
    return -1; 
}

////////////////////////////// Course ////////////////////////////// 
//CourseRepositoryImpl
int CourseRepositoryImpl::addCourse(Course course) {
    course.setId(courseIdCounter++);
    this->courses.push_back(course);
    return course.getId();
}

Course* CourseRepositoryImpl::getCourseById(int id) {
    for(int i = 0; i < this->courses.size(); i++){
        if(this->courses[i].getId() == id){
            return &this->courses[i];
        }
    }
    return nullptr;
}

int CourseRepositoryImpl::editCourse(Course course) {
    for(int i = 0; i < this->courses.size(); i++){
        if(this->courses[i].getId() == course.getId()){
            this->courses[i] = course;
            return 1; 
        }
    }
    return -1; 
}

////////////////////////////// Teacher ////////////////////////////// 
//TeacherRepositoryImpl
int TeacherRepositoryImpl::addTeacher(Teacher teacher) {
    teacher.setId(teacherIdCounter++);
    this->teachers.push_back(teacher);
    return teacher.getId();
}

Teacher* TeacherRepositoryImpl::getTeacherById(int id) {
    for(int i = 0; i < this->teachers.size(); i++){
        if(this->teachers[i].getId() == id){
            return &this->teachers[i];
        }
    }
    return nullptr; 
}

int TeacherRepositoryImpl::editTeacher(Teacher teacher) {
    for(int i = 0; i < this->teachers.size(); i++){
        if(this->teachers[i].getId() == teacher.getId()){
            this->teachers[i] = teacher;
            return 1; 
        }
    }
    return -1; 
}