#include "Service.h"
#include <iostream>

using namespace std;

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class StudentServiceImpl
int StudentServiceImpl::addStudent(Student student) {
    if(studentValidation.validateStudent(student) == 1){
        int id = studentRepository.addStudent(student);
        return id;
    }
    return -1;
}

Student* StudentServiceImpl::getStudentById(int id) {
    Student* studentPtr = studentRepository.getStudentById(id);
    if(studentPtr == nullptr){
        validationService.notExist("Student", id);
    }
    return studentPtr;
}

int StudentServiceImpl::editStudent(Student student) {
    if(studentValidation.validateStudent(student) == 1){
        int result = studentRepository.editStudent(student);
        if(result == -1){
            validationService.notExist("Student", student.getId());
        } else {
            cout << "Successfully Edited Student With ID [" << student.getId() << "]" << endl;
        }
        return result;
    }
    return -1;
}

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class CourseServiceImpl
int CourseServiceImpl::addCourse(Course course) {
    if(courseValidation.validateCourse(course) == 1) {
        int id = courseRepository.addCourse(course);
        if(id == -1){
            validationService.fullData("Course");
        }
        return id;
    }
    return -1;
}

Course* CourseServiceImpl::getCourseById(int id) {
    Course* coursePtr = courseRepository.getCourseById(id);
    if(coursePtr == nullptr){
        validationService.notExist("Course", id);
    }
    return coursePtr;
}

int CourseServiceImpl::editCourse(Course course) {
    if(courseValidation.validateCourse(course) == 1){
        int result = courseRepository.editCourse(course);
        if(result == -1){
            validationService.notExist("Course", course.getId());
        } else {
            cout << "Successfully Edited Course With ID [" << course.getId() << "]" << endl;
        }
        return result;
    }
    return -1;
}

/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class TeacherServiceImpl
int TeacherServiceImpl::addTeacher(Teacher teacher) {
    if(teacherValidation.validateTeacher(teacher) == 1) {
        int id = teacherRepository.addTeacher(teacher);
        if(id == -1){
            validationService.fullData("Teacher");
        }
        return id;
    }
    return -1;
}

Teacher* TeacherServiceImpl::getTeacherById(int id) {
    Teacher* teacherPtr = teacherRepository.getTeacherById(id);
    if(teacherPtr == nullptr){
        validationService.notExist("Teacher", id);
    }
    return teacherPtr;
}

int TeacherServiceImpl::editTeacher(Teacher teacher) {
    if(teacherValidation.validateTeacher(teacher) == 1){
        int result = teacherRepository.editTeacher(teacher);
        if(result == -1){
            validationService.notExist("Teacher", teacher.getId());
        } else {
            cout << "Successfully Edited Teacher With ID [" << teacher.getId() << "]" << endl;
        }
        return result;
    }
    return -1;
}