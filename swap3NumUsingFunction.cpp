#include <iostream>

using namespace std;

void swap(int &x,int &y , int &z){
    int temp = x;
    x=y;
    y=z;
    z=temp;
}

int main() {
    int a,b,c;
    cout<<"Enter any number to check: "<<endl;
    cin>>a>>b>>c;
    cout<<"value before swapping"<<endl<<a<<endl<<b<<endl<<c<<endl;
    swap(a,b,c);
    cout<<"value after swapping"<<endl<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}