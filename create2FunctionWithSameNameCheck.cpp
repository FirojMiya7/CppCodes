#include<iostream>
using namespace std;

void check(int num){
    if(num%2==0){
        cout<<num<<" is even."<<endl;
    }else{
        cout<<num<<" is odd."<<endl;
    }
}

void check(int a, int b){
    int g=(a>b?a:b);
    cout<<"greater num is "<<g<<endl;
}

int main(){
    int x;
    cout<<"Enter any number to check odd or even: "<<endl;
    cin>>x;
    check(x);
    cout<<endl;
    int a,b;
    cout<<"Enter two numbers to check greater: "<<endl;
    cin>>a>>b;
    check(a,b);
    return 0;
}