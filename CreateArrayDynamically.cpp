#include<iostream>
using namespace std;

int main() {
    int *arr;
    arr = new int[5];  

    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "\nYour numbers are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;  // Free the allocated memory
    return 0;
}