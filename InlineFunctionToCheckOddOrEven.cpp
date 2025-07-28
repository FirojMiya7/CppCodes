#include <iostream>

using namespace std;

inline void showEvenOrOdd(int num) {
    if (num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
}

int main() {
    int x;
    cout<<"Enter any number to check: "<<endl;
    cin>>x;
    showEvenOrOdd(x); 
    return 0;
}