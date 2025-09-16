#include <iostream>
#include <limits>
#include "Controller/Controller.h"

using namespace std;

void displaySystem();
void showList(const string& value);
int getValidInput(const string& prompt);
void clearInputBuffer();
void studentMenu();
void courseMenu();
void teacherMenu();
void addStudent();
void showAllStudents();
void showStudentByID();
void editStudent();
void removeStudent();
void addCourse();
void showAllCourses();
void showCourseByID();
void editCourse();
void removeCourse();
void addTeacher();
void showAllTeachers();
void showTeacherByID();
void editTeacher();
void removeTeacher();

int main() {
    int choice;
    do {
        displaySystem();
        choice = getValidInput("Please enter your choice: ");
        switch (choice) {
            case 1:
                studentMenu();
                break;
            case 2:
                courseMenu();
                break;
            case 3:
                teacherMenu();
                break;
            case 4:
                cout << "Exiting the system. Goodbye!" <<endl;
                break;
            default:
                cout << "Invalid choice. Please try again." <<endl;
        }
    } while (choice != 4);

    return 0;
}

void displaySystem() {
    cout << "\n\n\t\t************ Management System ************" <<endl;
    cout << "1 - About Students" << "\t\t" << "2 - About Courses" <<endl;
    cout << "3 - About Teachers" << "\t\t" << "4 - Exit" <<endl;
}

void showList(const string& value) {
    cout << "\n\t\t************ " << value << " Management System ************" << endl;
    cout << "1 - Add " << value << "\t\t" << "2 - Show All " << value << endl;
    cout << "3 - Edit " << value << "\t\t" << "4 - Remove " << value << endl;
    cout << "5 - Show " << value << " By ID" << "\t" << "6 - Return to Main Menu" << endl;
}

int getValidInput(const string& prompt) {
    int input;
    while (true) {
        cout << prompt;
        if (cin >> input) {
            clearInputBuffer();
            return input;
        } else {
            cout << "Invalid input! Please enter a number." << endl;
            clearInputBuffer();
        }
    }
}

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void studentMenu() {
    int choice;
    do {
        showList("Student");
        choice = getValidInput("Please enter your choice: ");
        switch (choice) {
            case 1: addStudent(); break;
            case 2: showAllStudents(); break;
            case 3: editStudent(); break;
            case 4: removeStudent(); break;
            case 5: showStudentByID(); break;
            case 6: cout << "Returning to main menu." << endl; break;
            default: cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}

void courseMenu() {
    int choice;
    do {
        showList("Course");
        choice = getValidInput("Please enter your choice: ");
        switch (choice) {
            case 1: addCourse(); break;
            case 2: showAllCourses(); break;
            case 3: editCourse(); break;
            case 4: removeCourse(); break;
            case 5: showCourseByID(); break;
            case 6: cout << "Returning to main menu." << endl; break;
            default: cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}

void teacherMenu() {
    int choice;
    do {
        showList("Teacher");
        choice = getValidInput("Please enter your choice: ");
        switch (choice) {
            case 1: addTeacher(); break;
            case 2: showAllTeachers(); break;
            case 3: editTeacher(); break;
            case 4: removeTeacher(); break;
            case 5: showTeacherByID(); break;
            case 6: cout << "Returning to main menu." << endl; break;
            default: cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}

//////////////////// Student Functions 
void addStudent() {
    cout << "\nPlease Enter Student Data:" << endl;
    Student student;
    string name, phoneNumber;
    int age;
    double gpa;

    cout << "Enter Student Name: ";
    getline(cin, name);
    student.setName(name);

    age = getValidInput("Enter Student Age: ");
    student.setAge(age);

    cout << "Enter Student Phone Number: ";
    getline(cin, phoneNumber);
    student.setPhonenumber(phoneNumber);

    cout << "Enter Student GPA: ";
    cin >> gpa;
    clearInputBuffer();
    student.setGpa(gpa);

    StudentController studentController;
    int id = studentController.addStudent(student);
    if (id != -1) {
        cout << "Success! Student added with ID [" << id << "]" << endl;
    }
}

void showAllStudents() {
    StudentController studentController;
    cout << "Show All Students is not avaliable yet" << endl;
}

void showStudentByID() {
    int id = getValidInput("Enter Student ID: ");
    StudentController studentController;
    studentController.showStudentById(id);
}

void editStudent() {
    cout << "\nPlease Enter Student Data to Edit:" << endl;
    Student student;
    string name, phoneNumber;
    int age, id;
    double gpa;

    id = getValidInput("Enter Student ID: ");
    student.setId(id);

    cout << "Enter Student Name: ";
    getline(cin, name);
    student.setName(name);

    age = getValidInput("Enter Student Age: ");
    student.setAge(age);

    cout << "Enter Student Phone Number: ";
    getline(cin, phoneNumber);
    student.setPhonenumber(phoneNumber);

    cout << "Enter Student GPA: ";
    cin >> gpa;
    clearInputBuffer();
    student.setGpa(gpa);

    StudentController studentController;
    studentController.updateStudent(student);
}

void removeStudent() {
    cout << "Remove Student is not avaliable yet" << endl;
}

/////////////////// Course Functions
void addCourse() {
    cout << "\nPlease Enter Course Data:" << endl;
    Course course;
    string name;
    double hour;

    cout << "Enter Course Name: ";
    getline(cin, name);
    course.setName(name);

    cout << "Enter Course Hour: ";
    cin >> hour;
    clearInputBuffer();
    course.setHour(hour);

    CourseController courseController;
    int id = courseController.addCourse(course);
    if (id != -1) {
        cout << "Success! Course added with ID [" << id << "]" << endl;
    }
}

void showAllCourses() {
    cout << "Show All Courses is not avaliable yet" << endl;
}

void showCourseByID() {
    int id = getValidInput("Enter Course ID: ");
    CourseController courseController;
    courseController.showCourseById(id);
}

void editCourse() {
    cout << "\nPlease Enter Course Data to Edit:" << endl;
    Course course;
    string name;
    double hour;
    int id;

    id = getValidInput("Enter Course ID: ");
    course.setId(id);

    cout << "Enter Course Name: ";
    getline(cin, name);
    course.setName(name);

    cout << "Enter Course Hour: ";
    cin >> hour;
    clearInputBuffer();
    course.setHour(hour);

    CourseController courseController;
    courseController.updateCourse(course);
}

void removeCourse() {
    cout << "Remove Course is not avaliable yet" << endl;
}

//////////////////// Teacher Functions 
void addTeacher() {
    cout << "\nPlease Enter Teacher Data:" << endl;
    Teacher teacher;
    string name, phoneNumber;
    int age;
    double salary;

    cout << "Enter Teacher Name: ";
    getline(cin, name);
    teacher.setName(name);

    age = getValidInput("Enter Teacher Age: ");
    teacher.setAge(age);

    cout << "Enter Teacher Phone Number: ";
    getline(cin, phoneNumber);
    teacher.setPhonenumber(phoneNumber);

    cout << "Enter Teacher Salary: ";
    cin >> salary;
    clearInputBuffer();
    teacher.setSalary(salary);

    TeacherController teacherController;
    int id = teacherController.addTeacher(teacher);
    if (id != -1) {
        cout << "Success! Teacher added with ID [" << id << "]" << endl;
    }
}

void showAllTeachers() {
    cout << "Show All Teachers in not avaliable yet" << endl;
}

void showTeacherByID() {
    int id = getValidInput("Enter Teacher ID: ");
    TeacherController teacherController;
    teacherController.showTeacherById(id);
}

void editTeacher() {
    cout << "\nPlease Enter Teacher Data to Edit:" << endl;
    Teacher teacher;
    string name, phoneNumber;
    int age, id;
    double salary;

    id = getValidInput("Enter Teacher ID: ");
    teacher.setId(id);

    cout << "Enter Teacher Name: ";
    getline(cin, name);
    teacher.setName(name);

    age = getValidInput("Enter Teacher Age: ");
    teacher.setAge(age);

    cout << "Enter Teacher Phone Number: ";
    getline(cin, phoneNumber);
    teacher.setPhonenumber(phoneNumber);

    cout << "Enter Teacher Salary: ";
    cin >> salary;
    clearInputBuffer();
    teacher.setSalary(salary);

    TeacherController teacherController;
    teacherController.updateTeacher(teacher);
}

void removeTeacher() {
    cout << "Remove Teacher is not avaliable yet" << endl;
}