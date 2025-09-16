#ifndef REPO_H
#define REPO_H

#include "../Model/Models.h"
#include <vector>

// interface StudentRepository
class StudentRepository {
public:
    virtual int addStudent(Student student) = 0;
    virtual Student* getStudentById(int id) = 0; 
    virtual int editStudent(Student student) = 0;
};

// StudentRepositoryImpl
class StudentRepositoryImpl : public StudentRepository {
private:
    vector<Student> students;
public:
    int addStudent(Student student) override;
    Student* getStudentById(int id) override;
    int editStudent(Student student) override;
};

// interface CourseRepository
class CourseRepository {
public:
    virtual int addCourse(Course course) = 0;
    virtual Course* getCourseById(int id) = 0;
    virtual int editCourse(Course course) = 0;
};

// CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository {
private:
    vector<Course> courses;
public:
    int addCourse(Course course) override;
    Course* getCourseById(int id) override;
    int editCourse(Course course) override;
};

// interface TeacherRepository
class TeacherRepository {
public:
    virtual int addTeacher(Teacher teacher) = 0;
    virtual Teacher* getTeacherById(int id) = 0;
    virtual int editTeacher(Teacher teacher) = 0;
};

// TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository {
private:
    vector<Teacher> teachers;
public:
    int addTeacher(Teacher teacher) override;
    Teacher* getTeacherById(int id) override;
    int editTeacher(Teacher teacher) override;
};

#endif