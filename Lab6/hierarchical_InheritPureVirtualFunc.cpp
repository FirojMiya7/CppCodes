#include<iostream>
using namespace std;

class ABSTRACT{
    public:
    virtual void insert() = 0;
    virtual void display() = 0;
};

class concrete1 : public ABSTRACT{
    private:
    string name;
    char license;
    int age;

    public:
    void insert() override {            //safer recommended for bug check or error finding..
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
        cout<<"License status[y/n]: ";
        cin>>license;
    }
    void display() override {
        cout<<endl<<"----------Owner Info----------";
        cout<<endl<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"license: "<<license<<endl;
    }
};

class concrete2 : public ABSTRACT{
    private:
    string brand,carName,model;
    public:
    void insert() {         //without override(keyword); valid,but no compiler checking...
        cout<<endl<<"Enter car brand: ";
        cin>>brand;
        cout<<"Enter car name: ";
        cin>>carName;
        cout<<"Enter car model: ";
        cin>>model;
    }

    void display() override {
        cout<<"-----------Car Info-----------"<<endl;
        cout<<"Car Brand: "<<brand<<endl;
        cout<<"Car Name: "<<carName<<endl;
        cout<<"Car Model: "<<model<<endl;
    }
};

int main(){
    ABSTRACT* ptr1;
    ABSTRACT* ptr2;

    concrete1 obj1;
    concrete2 obj2;

    ptr1 = &obj1;
    ptr2 = &obj2;

    ptr1->insert();
    ptr2->insert();

    ptr1->display();
    ptr2->display();

    return 0;
}