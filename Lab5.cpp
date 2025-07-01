// // lab 5.3




// #include<iostream>
// using namespace std;

// class author {
//     private:
//         string name,quali;
//     public:
//         void getdata(){
//             cout<<"enter the name:"<<endl;
//             getline(cin,name);
//             cout<<"enter the qualification : "<<endl;
//             getline(cin,quali);
//         }
//         void putdata(){
//             cout<<endl<<"Name : "<<name<<endl;
//             cout<<"Qualification : "<<quali<<endl;
//         }
// };

// class publication{
//     private:
//         string pname;
//     public:
//         void getdata1(){
//             cout<<"enter the publication name : "<<endl;
//             getline(cin,pname);
//         }
//         void putdata1(){
//             cout<<"Publication Name : "<<pname<<endl;
//         }
// };

// class book : public author, public publication{
//     private:
//         int price;
//         string title;
//     public:
//         void getdata2(){
//             getdata();
//             getdata1();
//             cout<<"enter the title :"<<endl;
//             getline(cin,title);
//             cout<<"enter the price : "<<endl;
//             cin>>price;
//             }
//         void putdata2(){
//             putdata();
//             putdata1();
//             cout<<"Title : "<<title<<endl
//                 <<"Price : "<<price<<endl;
//             }
// };

// int main(){
//     book obj;
//     obj.getdata2();
//     obj.putdata2();
//     return 0;
// }



// lab 5.4

// #include <iostream>
// using namespace std;

// class Vehicle {
// protected:
//     string brand;
// public:
//     void inputBrand() {
//         cout << "Enter vehicle brand: ";
//         getline(cin, brand);
//     }
//     void displayBrand() {
//         cout << "Brand: " << brand << endl;
//     }
// };

// class Car : public Vehicle {
// protected:
//     string model;
// public:
//     void inputModel() {
//         inputBrand();
//         cout << "Enter car model: ";
//         getline(cin, model);
//     }
//     void displayModel() {
//         displayBrand();
//         cout << "Model: " << model << endl;
//     }
// };

// class ElectricCar : public Car {
// private:
//     int batteryCapacity;
// public:
//     void inputDetails() {
//         inputModel();
//         cout << "Enter battery capacity (in kWh): ";
//         cin >> batteryCapacity;
//         cin.ignore(); // clear newline from input buffer
//     }
//     void displayDetails() {
//         displayModel();
//         cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
//     }
// };

// int main() {
//     ElectricCar ecar;
//     ecar.inputDetails();
//     cout << "\nElectric Car Details:\n";
//     ecar.displayDetails();
//     return 0;
// }

