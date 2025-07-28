#include<iostream>
using namespace std;

class money{
    private:
    int rs, paisa;
    public:
    money(int r, int p){
        rs=r;
        paisa=p;
    }
    void show(){
        cout<<endl<<"Rupees: "<<rs<<endl<<"Paisa: "<<paisa<<endl;
    }

    friend void operator++(money& obj,int);
};

void operator++ (money& obj,int){
    obj.paisa++;

    if(obj.paisa>=100){
        obj.rs=obj.rs+(obj.paisa/100);
        obj.paisa=obj.paisa%100;
    }
}

int main(){
    money m(10,85);
    m++;
    m.show();
    return 0;
}