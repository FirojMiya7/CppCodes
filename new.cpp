// #include<iostream>
// using namespace std;

// class base{
//     public:
//      virtual void show(){           //virtual rakhesi same name ko function derived class maa aauxa
//         cout<<"Naste beta namasteeyyyy"<<endl;
//     }
// };

// class derived : public base{
//     public:
//      void show(){
//         cout<<"Hello"<<endl;
//     }
// };

// int main(){
//     base *ptr;

//     base b;
//     ptr = &b;
//     ptr->show();

//     derived d;
//     ptr = &d;
//     ptr -> show();

//     // d.show();

//     return 0;
// }







#include<iostream>
using namespace std;

class base{
    public:
     base(){
        cout<<"base constructor"<<endl;

     }
      virtual ~ base(){
        cout<<" base des calleed"<<endl;
      }
    };

class derived : public base{
    public:
    derived(){
        cout<<"derived constructor"<<endl;

     }
     
     ~ derived(){
        cout<<"derived des calleed"<<endl;
      }
};

int main(){
    base *ptr = new derived();
    delete ptr;

   

   

    return 0;
}




