A C++ Student Management System designed for managing student information efficiently. The system allows users to add, update, delete, and view student records, as well as display all students or exit the console-based application.

## Features
1. Add Student
  - Input student details: name, department, grade.
  - Automatically assigns a unique studentID to each student.
2. Update Student Details
  - Search for a student by their unique studentID.
  - Modify the student's name, department, or grade.
3. Remove Student
  - Delete a student from the system using their studentID.
4. View Specific Student Details
  - Search and display information of a student by their studentID.
5. Display All Students
  - List all students along with their studentID, name, department, and grade.
6. Exit the System
  - Safely terminates the program.

## How It Works
- The program uses a vector to store student records dynamically.
- Each student is uniquely identified using a studentID.
- Modular functions handle specific tasks like adding, updating, and displaying students.
- The functions are organized into a separate file for better readability and maintainability.

## Installation and Usage
- Requirements
  - A C++ compiler (e.g., GCC)
  - A terminal or IDE for running the program
 
- Steps
  - Clone this repository:
    ```
    git clone https://github.com/your-username/student-management-system.git
    cd student-management-system
    ```
  - Compile the program:
    ```
    g++ main.cpp student_functions.cpp -o StudentManagementSystem
    ```
  - Run the program:
    ```
    ./StudentManagementSystem
    ```

## Future Enhancements
 - Add a GUI interface for a more user-friendly experience.
 - Integrate with databases like MySQL or MongoDB.
