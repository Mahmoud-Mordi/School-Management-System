School Management System

This is the README file for the School Management System. This program is designed to manage academic data by performing various operations on students, courses, and teachers.t's  The code for this system is organized into a robust, layered architecture, where each folder serves a specific purpose, enhancing the projecscalability and maintainability.

The system is built on a layered architecture, which separates the project's concerns into distinct folders. This design makes the code clean, organized, and easy to debug and expand.

* **Model**: The foundational layer of the project. It defines the core data structures used throughout the application. It contains only data members and getter/setter functions.
* **Validation**: This folder contains the logic for validating all user inputs. It ensures that data (such as names, ages, phone numbers, etc.) adheres to a specific set of rules before it is processed by the system.
* **Repo**: The repository layer. It acts as a data access layer that directly handles the storage and retrieval of data. In this project, it store all data in memory.
* **Service**: This layer contains the core business logic of the application. It orchestrates the flow of data by using functions from the **Validation** layer to check data and from the **Repo** layer to persist it.
* **Controller**: The user interface layer. It receives requests and data from the user and delegates these requests to the appropriate service layer functions. It is responsible for displaying the results back to the user.
* **Main.cpp**: The entry point of the entire application. It contains the main program loop, displays all menus, handles user input, and calls the functions in the **Controller** layer.

---

The program will display a main menu with options for managing students, courses, and teachers. Use the corresponding number keys to select an option and follow the on-screen prompts.

Available Options:
Students Menu :

Add a new student.

Show all students.

Edit an existing student.

Remove a student.

Search for a student by ID.

Courses Menu :

Add a new course.

Show all courses.

Edit an existing course.

Remove a course.

Search for a course by ID.

Teachers Menu :

Add a new teacher.

Show all teachers.

Edit an existing teacher.

Remove a teacher.

Search for a teacher by ID.

Exit :

Exits the program.

Author
Mahmoud Mordi
