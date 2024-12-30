#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>
#include<algorithm>

using namespace std;

class Student{
    private:
    int ID;
    string Name;
    string Gender;
    string Department;
    float Grade;

    public:
    Student(int aID, string aName, string aGender, string aDepartment, float aGrade);

    int getID() const;
    string getName() const;
    string getGender() const;
    string getDepartment() const;
    float getGrade() const;

    void setName(const string& newName);
    void setGender(const string& newGender);
    void setDepartment(const string& newDepartment);
    void setGrade(float newGrade);
};

void displayMenu();
void addStudent(vector<Student>& students, int& nextID);
void viewStudent(const vector<Student>& students, int id_1);
void updateStudent(vector<Student>& students, int id_3);
void removeStudent(vector<Student>& students, int id_2);
void displayStudent(vector<Student>& students);
void genReports(const vector<Student>& students);
void exitSystem();

#endif