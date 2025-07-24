#include<iostream>
using namespace std;

class sankhya{
    private: 
    int a,b,c,d;
    public:
    sankhya(){}
    sankhya(int w,int x,int y,int z){
        a=w;
        b=x;
        c=y;
        d=z;
    }
    void show(){
        cout<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    }
    void operator ++(){             //yo bhaneko pre method ho...
        a+=5;
        b+=2;
        c+=3;
        d+=4;
    }
    void operator --(int){          //yo bhaneko post method ho...
        a-=5;
        b-=2;
        c-=3;
        d-=4;
    }
};

int main(){
    // int A = 7;
    // cout<<A<<endl;

    sankhya A(7,4,5,6);
    ++A;
    A.show();
    A--;
    A.show();

    return 0;
}