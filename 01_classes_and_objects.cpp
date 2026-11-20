#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int studentID;

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << studentID << endl;
    }
};

int main()
{

    Student s1;

    s1.name = "minhajul";
    s1.studentID = 25038;

    s1.displayInfo();

    return 0;
}
