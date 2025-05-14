#include <iostream>
using namespace std;

int main(){
    string nama = "cuki";
    int angka = 10;
    float angka2 = 2.54;
    double angka3 = 3.657;
    bool ada = true;

    cout<< nama <<endl; 
    cout<< angka <<endl; 
    cout<< angka2 <<endl; 
    cout<< angka3 <<endl; 
    cout<< ada <<endl; 


    int num1,num2;
    cout<< "masukan angka pertama : ";
    cin>> num1;

    cout<< "maskan angka kedua : ";
    cin>> num2;

    int hasil = num1 - num2;
    cout<< "hasil dari num1 : " << num1 << " - " << num2 << " adalah : "<<hasil;
}

