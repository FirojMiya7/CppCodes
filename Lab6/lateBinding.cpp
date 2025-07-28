#include<iostream>
using namespace std;

class animal{
    public:
    virtual void sound(){               //virtual made this functioin late binding(it will make sure where the function will be work after event action...)
        cout<<"Animal makes sound.."<<endl;
    }
};

class dog : public animal{
    public:
    void sound(){
        cout<<"Dog barks."<<endl;
    }
};

class cat : public animal{
    public:
    void sound(){
        cout<<"Cat meows.."<<endl;
    }
};

int main(){
    animal* ptr;

    dog d;
    cat c;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();
    
    return 0;
}