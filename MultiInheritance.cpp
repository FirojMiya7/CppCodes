// human, department and employee : parameterized constructor and multi inheritance//
#include <iostream>
#include <string>
using namespace std;

class human
{
protected:
    string n;
    int a;

public:
    human(string nm, int ag)
    {
        n = nm;
        a = ag;
    }
};

class department
{
protected:
    string dn;

public:
    department(string d)
    {
        dn = d;
    }
};

class employee : public human, public department
{
private:
    string p;
    int s;

public:
    employee(string nm, int ag, string d, string ps, int sl)
        : human(nm, ag), department(d)
    {
        p = ps;
        s = sl;
    }

    void show()
    {
        cout << "Employee Details:" << endl;
        cout << "------------------" << endl;
        cout << "name:" << n << endl;
        cout << "age:" << a << endl;
        cout << "department:" << dn << endl;
        cout << "post:" << p << endl;
        cout << "salary:" << s << endl;
    }
};

int main()
{
    employee e("Firoj", 20, "csit", "SoftwareEngineer", 20000);
    e.show();
    return 0;
}
