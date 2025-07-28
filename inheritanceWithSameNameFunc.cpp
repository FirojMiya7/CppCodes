#include<iostream>
using namespace std;

class First{
    private:
    int a;
    public:
    void get(){
        cout<<"Enter any number1 : ";
        cin>>a;
    }
    void show(){
        cout<<"First Number : "<<a<<endl;
    }
};

class Second : public First{
    private:
    int b;
    public:
    void get(){
        First::get();
        cout<<"Enter any number2 : ";
        cin>>b;
    }
    void show(){
        First::show();
        cout<<"Second Number : "<<b<<endl;
    }
};

class Third : public Second{
    private:
    int c;
    public:
    void get(){
        Second::get();
        cout<<"Enter any number3 : ";
        cin>>c;
    }
    void show(){
        Second::show();
        cout<<"Third Number : "<<c<<endl;
    }
};

int main(){
    Third obj;
    obj.get();
    obj.show();
    return 0;
}