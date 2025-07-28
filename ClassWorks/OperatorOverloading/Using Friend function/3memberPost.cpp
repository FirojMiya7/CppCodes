#include<iostream>
using namespace std;

class sankhya{
    private:
    int a, b, c;
    public:
    sankhya(int x,int y ,int z){
        a=x;
        b=y;
        c=z;
    }

    void show(){
        cout<<endl<<a<<endl<<b<<endl<<c<<endl;
    }

    friend void operator ++(sankhya &obj, int);
};


void operator ++(sankhya &obj, int){
    obj.a++;
    obj.b++;
    obj.c++;
}

int main(){
    sankhya A(10,20,24);
    A++;
    A.show();
    return 0;
}