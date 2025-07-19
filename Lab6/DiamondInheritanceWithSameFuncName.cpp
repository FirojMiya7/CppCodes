#include<iostream>
using namespace std;

class first{
    public:
    int n1;
    void getData(){
        cout<<"Enter first number : ";
        cin>>n1;
    }

    void showData(){
        cout<<endl<<"First num : "<<n1<<endl;
    }
};

class second : virtual public first{
    public:
    int n2;
    void getData(){
        cout<<"Enter second number : ";
        cin>>n2;
    }

    void showData(){
        cout<<"Second num : "<<n2<<endl;
    }
};

class third : virtual public first{
    public:
    int n3;
    void getData(){
        cout<<"Enter third number : ";
        cin>>n3;
    }

    void showData(){
        cout<<"Third num : "<<n3<<endl;
    }
};

class fourth : virtual public first{
    public:
    int n4;
    void getData(){
        cout<<"Enter fourth number : ";
        cin>>n4;
    }

    void showData(){
        cout<<"Fourth num : "<<n4<<endl;
    }
};

class average : public second , public third , public fourth{            //no need to make public classes virtual (i.e. virtual public second,so on) because may lead to unwanted results...
    public:
    void getData(){
        first::getData();
        second::getData();
        third::getData();
        fourth::getData();

    }

    void showData(){
        first::showData();
        second::showData();
        third::showData();
        fourth::showData();

        float avrg = (n1+n2+n3+n4)/4.0;

        cout<<endl<<"Average : "<<avrg<<endl;
    }
};

int main(){
    average obj;

    obj.getData();
    obj.showData();
                                                                        
    return 0;
}
