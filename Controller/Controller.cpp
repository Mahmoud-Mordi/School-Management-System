#include "Controller.h"
#include <iostream>

using namespace std;

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class StudentController
int StudentController::addStudent(Student student) {
    return studentService.addStudent(student);
}

void StudentController::showStudentById(int id) {
    Student* studentPtr = studentService.getStudentById(id);
    if (studentPtr != nullptr) {
        cout << "\t\t ID \t\t Name \t\t Age \t\t Phone Number \t\t GPA" << endl;
        cout << "\t\t" << studentPtr->getId() << "\t\t" << studentPtr->getName() << "\t\t" << studentPtr->getAge() << "\t\t" << studentPtr->getPhonenumber() << "\t\t" << studentPtr->getGpa() << endl;
    }
}

void StudentController::updateStudent(Student student) {
    studentService.editStudent(student);
}

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class CourseController
int CourseController::addCourse(Course course) {
    return courseService.addCourse(course);
}
void CourseController::showCourseById(int id) {
    Course* coursePtr = courseService.getCourseById(id);
    if (coursePtr != nullptr) {
        cout << "\t\t ID \t\t Name \t\t Hour" << endl;
        cout << "\t\t" << coursePtr->getId() << "\t\t" << coursePtr->getName() << "\t\t" << coursePtr->getHour() << endl;
    }
}
void CourseController::updateCourse(Course course) {
    courseService.editCourse(course);
}

/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class TeacherController
int TeacherController::addTeacher(Teacher teacher) {
    return teacherService.addTeacher(teacher);
}
void TeacherController::showTeacherById(int id) {
    Teacher* teacherPtr = teacherService.getTeacherById(id);
    if (teacherPtr != nullptr) {
        cout << "\t\t ID \t\t Name \t\t Age \t\t Phone Number \t\t Salary" << endl;
        cout << "\t\t" << teacherPtr->getId() << "\t\t" << teacherPtr->getName() << "\t\t" << teacherPtr->getAge() << "\t\t" << teacherPtr->getPhonenumber() << "\t\t" << teacherPtr->getSalary() << endl;
    }
}
void TeacherController::updateTeacher(Teacher teacher) {
    teacherService.editTeacher(teacher);
}