#include<iostream>
using namespace std;

class Mero{
    private:
    int first, second, third;
    public:
    Mero(int first, int second, int third){
        this->first=first;          //(this) keyword is used to verify(differentiate betn..) either class data members or constructor parameters (or local variables) that have the same name....
        this->second=second;
        this->third=third;
    }
    void print(){
        cout<<"First: "<<first<<endl
            <<"Second: "<<second<<endl
            <<"Third: "<<third<<endl;
    }
};

int main(){
    Mero obj(30,20,50);
    obj.print();

    return 0;
}