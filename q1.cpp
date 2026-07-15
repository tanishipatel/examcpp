#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:
    
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{

    Student s[3] = {
        Student("Riya", 101),
        Student("kahaan", 102),
        Student("sakshi", 103)
    };


    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].display();
    }

    return 0;
}