#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int studentID;

public:
    Student()
    {
        name = "Unknown";
        studentID = 0;
    }

    Student(string n, int id)
    {
        name = n;
        studentID = id;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main()
{
    Student s1;

    Student s2("minhajul", 25038);
    Student s3("Rahim", 25053);
    Student s4("Karim", 25054);

    cout << "Default Object:" << endl;
    s1.display();

    cout << "\nStudent 1:" << endl;
    s2.display();

    cout << "\nStudent 2:" << endl;
    s3.display();

    cout << "\nStudent 3:" << endl;
    s4.display();

    return 0;
}
