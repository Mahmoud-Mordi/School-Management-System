#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Service/Service.h"

// Class StudentController
class StudentController {
private:
    StudentServiceImpl studentService;
public:
    int addStudent(Student student);
    void showStudentById(int id);
    void updateStudent(Student student);
};

// Class CourseController
class CourseController {
private:
    CourseServiceImpl courseService;
public:
    int addCourse(Course course);
    void showCourseById(int id);
    void updateCourse(Course course);
};

// Class TeacherController
class TeacherController {
private:
    TeacherServiceImpl teacherService;
public:
    int addTeacher(Teacher teacher);
    void showTeacherById(int id);
    void updateTeacher(Teacher teacher);
};

#endif