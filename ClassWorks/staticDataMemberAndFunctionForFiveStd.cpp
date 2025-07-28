#include<iostream>
using namespace std;

class Student{
    static string clgName;
    string name,address,gender;

    public:

    static void getClg(){
        cout<<endl<<"Enter college name: ";
        getline(cin,clgName);
    }

    static void showClg(){
        cout<<endl<<"College Name: "<<clgName<<endl;
    }

    void getStd(){
        cout<<endl<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your address: ";
        cin>>address;
        cout<<"Enter your gender: ";
        cin>>gender;
    }

    void showStd(){
        cout<<endl<<"Name: "<<name<<endl
            <<"Address: "<<address<<endl
            <<"Gender: "<<gender<<endl;
    }
};

string Student::clgName="";

int main(){
    Student::getClg();
    Student::showClg();

    Student s[5];

    for (int i = 0; i < 5; i++)
    {
        s[i].getStd();
    }
    
    cout<<endl<<"----------College Info----------" <<endl;
    Student::showClg();
    
    cout<<endl<<"----------Student Info----------" <<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<endl<<"Student "<<i+1<<": ";
        s[i].showStd();
    }

    return 0;
}