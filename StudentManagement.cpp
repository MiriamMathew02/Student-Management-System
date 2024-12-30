#include "StudentManagement.h"

Student::Student(int aID, string aName, string aGender, string aDepartment, float aGrade){
        ID = aID;
        Name = aName;
        Gender = aGender;
        Department = aDepartment;
        Grade = aGrade;
    }

    //getters
    int Student::getID() const {return ID;}
    string Student::getName() const {return Name;}
    string Student::getGender() const {return Gender;}
    string Student::getDepartment() const {return Department;}
    float Student::getGrade() const {return Grade;}

    //setters
    void Student::setName(const string& newName){Name = newName;}
    void Student::setGender(const string& newGender){Gender = newGender;}
    void Student::setDepartment(const string& newDepartment){Department = newDepartment;}
    void Student::setGrade(float newGrade){
        if(newGrade <= 1.0 || newGrade >= 4.0){
            throw invalid_argument("Grade must be between 1.0 and 4.0");
        }
        Grade = newGrade;
    }

    void displayMenu(){
    cout << "Welcome to the student management system" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "1. Add a student" << endl;
    cout << "2. View student details" << endl;
    cout << "3. Update student details" << endl;
    cout << "4. Remove student" << endl;
    cout << "5. Display all students" << endl;
    cout << "6. Generate reports" << endl;
    cout << "7. Exit the system" << endl;
    cout << "Please select an option from 1-7: ";
}

void addStudent(vector<Student>& students, int& nextID){
    string name, gender, department;
    float grade;
    string choice = "yes";

    cout << "Welcome to the Student Management System!" << endl;

        while(choice == "Yes" || choice == "yes"){
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter student gender: ";
            cin >> gender;
            cout << "Enter student department: ";
            cin >> department;
            cout << "Enter student grade: ";
            cin >> grade;

            students.push_back(Student(nextID, name, gender, department, grade));
            cout << "Student added with ID: " << nextID << endl;
            nextID++;

            cout << "Would you like to add another student?";
            cin >> choice;

    }
}

void viewStudent(const vector<Student>& students, int id_1){
    for(const auto& student : students){
        if(student.getID() == id_1){
            cout << "Student ID: " << student.getID() << endl;
            cout << "Student name: " << student.getName() << endl;
            cout << "Student gender: " << student.getGender() << endl;
            cout << "Student department: " << student.getDepartment() << endl;
            cout << "Student grade: " << student.getGrade() << endl;
            return;
        }
    }
    cout << "No student is found with ID number " << id_1 << endl;
}

void updateStudent(vector<Student>& students, int id_3){
    for(auto& student : students){
        if(student.getID() == id_3){
            cout << "Student information found." << endl;
            cout << "1. You want to change student name" << endl;
            cout << "2. You want to change student gender" << endl;
            cout << "3. You want to change student department" << endl;
            cout << "4. You want to change student grade" << endl;
            int choice_2;
            cin >> choice_2;

            switch(choice_2){
                case 1:{
                    string newName;
                    cout << "Enter the new name: ";
                    cin >> newName;
                    student.setName(newName);
                    break;
                }
                case 2:{
                    string newGender;
                    cout << "Enter the new gender: ";
                    cin >> newGender;
                    student.setGender(newGender);
                    break;
                }
                case 3:{
                    string newDepartment;
                    cout << "Enter the new department: ";
                    cin >> newDepartment;
                    student.setDepartment(newDepartment);
                    break;
                }
                case 4:{
                    float newGrade;
                    cout << "Enter the new grade: ";
                    cin >> newGrade;
                    student.setGrade(newGrade);
                    break;
                }
                default:{
                    cout << "Invalid choice";
                }
            }
            cout << "Student details updated successfully" << endl;
            return;
        }
    cout << "Student information not found" << endl;
    }
}

void removeStudent(vector<Student>& students, int id_2){
    auto id = remove_if(students.begin(), students.end(), [id_2](const Student& student){
        return student.getID() == id_2;
    });

    if(id != students.end()){
        students.erase(id, students.end());
    }
}

void displayStudent(vector<Student>& students){
    cout << "List of students" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    if(students.empty()){
        cout << "No students to display" << endl;
        return;
    }
    for (const auto& student : students){
        cout << "Student ID: " << student.getID() << endl;
        cout << "Student name: " << student.getName() << endl;
        cout << "Student gender: " << student.getGender() << endl;
        cout << "Student department: " << student.getDepartment() << endl;
        cout << "Student grade: " << student.getGrade() << endl;
        cout << "--------------------------------------------------------------------" << endl;

    }
}

void genReports(const vector<Student>& students){
    for(const auto& student : students){
        if(student.getGrade() >= 3.3){
            cout << student.getName() << " qualifies for the honor roll!" << endl;
        }
        else{
            cout << student.getName() << " does not qualify for the honor roll" << endl;
        }
    }
}

void exitSystem(){
    cout << "Thank you for visting the Student Management System!!" << endl;
}