// M[2][3]

#include<iostream>
using namespace std;

class matrixAdd
{
private:
    int M[2][3];
public:
    matrixAdd(){}
    matrixAdd(int  N[2][3]){          //paxadi ko box ma hunai parxa ko baal bhayena
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                M[i][j]=N[i][j];
            }
        }
    }

    void show(){
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
               cout<< M[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    void operator++ (int){
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                M[i][j]++;
            }
        }
    }
};

int main(){
    int arr[2][3] = { {6, 5, 23}, {5, 56, 2} };  // ✅ Define array
    matrixAdd obj(arr); 
    obj.show();
    obj++;
    cout<<endl<<"after increasing the value by 1 "<<endl;
    obj.show();
    return 0;
}
