#include<iostream>
using namespace std;

class shape{
    public:
    int l;
    virtual void calculateArea() = 0;

    virtual void getDimension(){
        cout<<"Enter the dimension : ";
        cin>>l;
    }
};

class square : public shape{
    public:
    void calculateArea(){
        getDimension();
        int s = l*l;
        cout<<"Area of Square is "<<s<<endl;
    }
};

class circle : public shape{
    public:
    void calculateArea(){
        getDimension();

        // float c = 3.14*(l*l);            //can be access by var c

        cout<<"Area of Circle is "<<3.14*(l*l)<<endl;
    }
};

int main(){
    square obj;
    obj.calculateArea();

    circle obj1;
    obj1.calculateArea();

    return 0;
}