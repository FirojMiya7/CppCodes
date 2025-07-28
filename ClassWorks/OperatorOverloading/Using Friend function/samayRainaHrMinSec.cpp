#include<iostream>
using namespace std;

class samay{
    private:
    int hr,min,sec;
    public:
    samay(int h, int m,int s){
        hr=h;
        min=m;
        sec=s;
    }
    void show(){
        cout<<endl<<"Hour: "<<hr<<endl<<"Minute: "<<min<<endl<<"Second: "<<sec<<endl;
    }

    friend void operator ++ (samay& po,int);
    void operator --(){
        sec--;
        if(sec < 0){
            min--;
            sec= 59;
            if(min < 0){
                hr--;
                min = 59;

            }
        }

    }
};

void operator++ (samay& po,int){
    // po.sec++;

    if(po.sec>=60){
        po.min=po.min+(po.sec/60);
        po.sec=po.sec%60;
        po.hr=po.hr+(po.min/60);
        po.min=po.min%60;
    }
}



int main(){
    samay pre(2,65,85);
    pre++;
    pre.show();

    samay s2(3,15,2);
    s2.show();


    --s2;
    s2.show();


    return 0;
}