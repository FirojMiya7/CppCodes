#include<iostream>
using namespace std;

class sign{
    private:
    int a,b;
    public:
    sign(){}
    sign(int x, int y){
        a=x;
        b=y;
    }

    void show(){
        cout<<endl<<a<<endl<<b<<endl;
    }

    void operator --(){             //---------pre method---------
        a=-a;
        b=-b;
    }
    // void operator ++(int){          //.........post method.........
    //     a=-a;
    //     b=-b;
    // }
};

int main(){
    sign A(7,-4);

    //-------pre garney tarika-------
    --A;
    A.show();

    // //.......post garney tarika......
    // A++;
    // A.show();
}