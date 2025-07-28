#include <iostream>
using namespace std;

void display(char ch = '$', int num = 5) {
    for (int i = 0; i < num; i++) {
        cout << ch;
    }
    cout << endl;
}

int main() {
    display();
    display('*'); // yadi parameter ma value na diye paxi default value use huncha
    display('#', 10); // yadi yaha parameter ma value diye paxi tyo value use huncha nah ki mathi ko default value
    display('@', 3);
    return 0;
}
