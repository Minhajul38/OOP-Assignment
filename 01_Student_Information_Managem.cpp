#include <iostream>
using namespace std;

class Student
{
private:
    int studentID;
    string name;
    string department;
    int semester;

public:

    void setInformation(int id, string n, string dept, int sem)
    {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }


    void displayInformation()
    {
        cout << "ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main()
{

    Student s1, s2, s3;

    s1.setInformation(25052, "minhajul", "ICT", 1);
    s2.setInformation(25053, "Rahim", "EEE", 2);
    s3.setInformation(25054, "Karim", "CSE", 3);

    cout << "Student 1:" << endl;
    s1.displayInformation();

    cout << "\nStudent 2:" << endl;
    s2.displayInformation();

    cout << "\nStudent 3:" << endl;
    s3.displayInformation();

    return 0;
}

