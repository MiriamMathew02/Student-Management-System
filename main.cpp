#include "StudentManagement.h"

int main(){
    vector<Student> students;
    int nextID = 1;
    int num;
    int id_1;
    int id_2;
    int id_3;
    int choice_2;

    while(true){
        displayMenu();
        cin >> num;

        switch(num){
            case 1:
                addStudent(students, nextID);
                break;
            case 2:
                cout << "Enter the student ID: ";
                cin >> id_1;
                cout << "-----------------------------------------" << endl;
                viewStudent(students, id_1);
                break;
            case 3:
                cout << "Enter the student ID: ";
                cin >> id_3;
                cout << "-----------------------------------------" << endl;
                updateStudent(students, id_3);
                break;
            case 4:
                cout << "Enter the student ID: ";
                cin >> id_2;
                cout << "-----------------------------------------" << endl;
                removeStudent(students, id_2);
                break;
            case 5:
                displayStudent(students);
                break;
            case 6:
                genReports(students);
                break;
            case 7:
                cout << "Exit the system?" << endl;
                exitSystem();
                return 0;
            default:
                cout << "Invalid input" << endl;
                break;

        }
    }
    

    return(0);
}