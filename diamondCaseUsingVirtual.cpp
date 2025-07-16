#include<iostream>

using namespace std;

class First{
    private:
    int a;
    public:
    void getF(){
        cout<<"Enter any number1 : ";
        cin>>a;
    }
    void showF(){
        cout<<endl<<"First Number : "<<a<<endl;
    }
};

class Second : virtual public First{
    private:
    int b;
    public:
    void getS(){
        cout<<"Enter any number2 : ";
        cin>>b;
    }
    void showS(){
        cout<<"Second Number : "<<b<<endl;
    }
};

class Third : virtual public First{
    private:
    int c;
    public:
    void getT(){
        cout<<"Enter any number3 : ";
        cin>>c;
    }
    void showT(){
        cout<<"Third Number : "<<c<<endl;
    }
};

class Fourth : virtual public First, virtual public Second, virtual public Third{
    private:
    int d;
    public:
    void getFF(){
        getF();
        getS();
        getT();
        cout<<"Enter any number4 : ";
        cin>>d;
    }
    void showFF(){
        showF();
        showS();
        showT();
        cout<<"Fourth Number : "<<d<<endl;
    }
};

int main(){
    Fourth obj;
    obj.getFF();
    obj.showFF();
    return 0;
}