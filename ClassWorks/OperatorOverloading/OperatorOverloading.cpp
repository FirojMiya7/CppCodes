#include<iostream>
using namespace std;

class abc{
    private: 
    int N;
    public:
    abc(){}
    abc(int x){
        N=x;
    }
    void show(){
        cout<<N<<endl;
    }
    void operator ++(){
        N+=5;
    }
};

int main(){
    // int A = 7;
    // cout<<A<<endl;

    abc A(7);
    ++A;
    A.show();

    return 0;
}