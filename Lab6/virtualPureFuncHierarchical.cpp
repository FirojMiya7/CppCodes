#include<iostream>
#define Pi 3.14
using namespace std;

class shape{
    public:
    float dimension;
    virtual void getDimension(){
        cout<<"Enter the dimension: ";
        cin>>dimension;
    }
    virtual void calculateArea() = 0;
};

class square : public shape{
    public:
    void calculateArea(){
        getDimension();
        float area = dimension * dimension;
        cout<<"Area: "<<area<<endl;
    }
};

class circle : public shape{
    public:
    void calculateArea(){
        getDimension();
        float area = Pi * (dimension * dimension);
        cout<<"Area: "<<area<<endl;
    }
};

int main(){
    square s;
    s.calculateArea();

    circle c;
    c.calculateArea();

    return 0;
}