#ifndef SERVICE_H
#define SERVICE_H

#include "../Repo/Repo.h"
#include "../Validation/Validation.h"

// interface StudentService
class StudentService {
public:
    virtual int addStudent(Student student) = 0;
    virtual Student* getStudentById(int id) = 0;
    virtual int editStudent(Student student) = 0;
};
// Class StudentServiceImpl
class StudentServiceImpl : public StudentService {
private:
    StudentRepositoryImpl studentRepository;
    StudentValidation studentValidation;
    ValidationService validationService;
public:
    int addStudent(Student student) override;
    Student* getStudentById(int id) override;
    int editStudent(Student student) override;
};

// interface CourseService
class CourseService {
public:
    virtual int addCourse(Course course) = 0;
    virtual Course* getCourseById(int id) = 0;
    virtual int editCourse(Course course) = 0;
};
// Class CourseServiceImpl
class CourseServiceImpl : public CourseService {
private:
    CourseRepositoryImpl courseRepository;
    CourseValidation courseValidation;
    ValidationService validationService;
public:
    int addCourse(Course course) override;
    Course* getCourseById(int id) override;
    int editCourse(Course course) override;
};
// interface TeacherService
class TeacherService {
public:
    virtual int addTeacher(Teacher teacher) = 0;
    virtual Teacher* getTeacherById(int id) = 0;
    virtual int editTeacher(Teacher teacher) = 0;
};
// Class TeacherServiceImpl
class TeacherServiceImpl : public TeacherService {
private:
    TeacherRepositoryImpl teacherRepository;
    TeacherValidation teacherValidation;
    ValidationService validationService;
public:
    int addTeacher(Teacher teacher) override;
    Teacher* getTeacherById(int id) override;
    int editTeacher(Teacher teacher) override;
};

#endif