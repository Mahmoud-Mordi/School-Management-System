**School Management System**:
--------------------------
This program is designed to manage academic data by performing various operations on students, courses, and teachers. The code for this system is organized into a robust, layered architecture, where each folder serves a specific purpose, enhancing the projecscalability and maintainability.
The system is built on a layered architecture, which separates the project's concerns into distinct folders. This design makes the code clean, organized, and easy to debug and expand.

* **Model**: The foundational layer of the project. It defines the core data structures used throughout the application. It contains only data members and getter/setter functions.
* **Validation**: This folder contains the logic for validating all user inputs. It ensures that data (such as names, ages, phone numbers, etc.) adheres to a specific set of rules before it is processed by the system.
* **Repo**: The repository layer. It acts as a data access layer that directly handles the storage and retrieval of data. In this project, it store all data in memory.
* **Service**: This layer contains the core business logic of the application. It orchestrates the flow of data by using functions from the **Validation** layer to check data and from the **Repo** layer to persist it.
* **Controller**: The user interface layer. It receives requests and data from the user and delegates these requests to the appropriate service layer functions. It is responsible for displaying the results back to the user.
* **Main.cpp**: The entry point of the entire application. It contains the main program loop, displays all menus, handles user input, and calls the functions in the **Controller** layer.

---
How to Use the Program?

Download the program's executable file ( start.exe )...
Run the program by double-clicking on the executable file or executing it from the command line.

---
The program will display a main menu with options for managing students, courses, and teachers.
Use the number keys (1, 2, 3) to select the desired menu.
Follow the on-screen prompts to enter data or navigate through the options.

**Data Validation**
The program includes robust data validation to ensure the information you enter is correct. If you enter invalid data (e.g., a letter instead of an age), the program will display an error message and prompt you to try again.

**Available Options**
The main menu leads to three sub-menus, each with its own set of operations.

Students Menu:
1. Add a new student.
2. Show all students.
3. Edit an existing student.
4. Remove a student.
5. Search for a student by their ID.
6. Return to the main menu.

Courses Menu:
1. Add a new course.
2. Show all courses.
3. Edit an existing course.
4. Remove a course.
5. Search for a course by its ID.
6. Return to the main menu.

Teachers Menu:
1. Add a new teacher.
2. Show all teachers.
3. Edit an existing teacher.
4. remove a teacher.
5. Search for a teacher by their ID.
6. Return to the main menu.

Option 4 : Exit the program.

---
Feel free to use and customize this management system according to your needs. If you encounter any issues or have further questions, please refer to the source code and the README file for guidance.

