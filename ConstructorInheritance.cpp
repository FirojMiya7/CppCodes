/*
Person { name age gender }
|
|
Employee {salary}
|
|
Department { department }
|    \            \
|     \            \
|      \            \
Admin   Teacher       Others
{Post}   {Subject}    {job}
*/

#include <iostream>
using namespace std;
class person
{
private:
    string name, gender;
    int age;

public:
    person() {}
    person(string n, string g, int a)
    {
        name = n;
        gender = g;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << endl
             << "Gender: " << gender << endl
             << "Age: " << age << endl;
    }
};

class employee : public person
{
private:
    int salary;

public:
    employee() {}
    employee(string n, string g, int a, int s) : person(n, g, a)
    {
        salary = s;
    }
    void display1()
    {
        display();
        cout << "Salary: " << salary << endl;
    }
};

class Department : public employee
{
private:
    string department;

public:
    Department() {}
    Department(string n, string g, int a, int s, string d) : employee(n, g, a, s)
    {
        department = d;
    }
    void display2()
    {
        display1();
        cout << "Department: " << department << endl;
    }
};

class Admin : public Department
{
private:
    string post;

public:
    Admin() {}
    Admin(string n, string g, int a, int s, string d, string ar) : Department(n, g, a, s, d)
    {
        post = ar;
    }
    void display3()
    {
        display2();
        cout << "Post: " << post << endl;
    }
};
class teacher : public Department
{
private:
    string subject;

public:
    teacher() {}
    teacher(string n, string g, int a, int s, string d, string sub) : Department(n, g, a, s, d)
    {
        subject = sub;
    }
    void display4()
    {
        display2();
        cout << "Subject: " << subject << endl;
    }
};
class others : public Department
{
private:
    string Job;

public:
    others() {}
    others(string n, string g, int a, int s, string d, string r) : Department(n, g, a, s, d)
    {
        Job = r;
    }
    void display5()
    {
        display2();
        cout << "Job: " << Job << endl;
    }
};

int main()
{ // Creating objects for each class and displaying their details

    Admin admin1("Alice", "Female", 35, 50000, "HR", "Manager");
    teacher teacher1("Bob", "Male", 40, 45000, "Science", "Physics");
    others other1("Charlie", "Male", 30, 30000, "Maintenance", "Electrician");

    cout << "Admin Details:" << endl;
    admin1.display3();
    cout << endl;

    cout << "Teacher Details:" << endl;
    teacher1.display4();
    cout << endl;

    cout << "Other Staff Details:" << endl;
    other1.display5();
    cout << endl;

    return 0;
}
