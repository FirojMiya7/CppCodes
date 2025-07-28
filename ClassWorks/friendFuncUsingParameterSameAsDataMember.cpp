#include<iostream>
using namespace std;

class second;

class first{
    int n1;
    public:
    first(int n1){
        this->n1=n1;
    }
    friend void Sum(first f,second s);
};

class second{
    int n2;
    public:
    second(int n2){
        this->n2=n2;
    }
    friend void Sum(first f,second s);
};

void Sum(first f, second s){
    cout<<"The Sum of "<<f.n1<<" and "<<s.n2<<" is "<<f.n1+s.n2<<endl;
}

int main(){
    first fi(10);
    second se(20);

    Sum(fi,se);

    return 0;
}