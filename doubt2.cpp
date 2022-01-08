#include<iostream>
using namespace std;

class A{
    public :
    int val1;

    A(int num1){
        val1 = num1;
    }

    A(){

    }

};

class B : public A{
    public :
    int val2;

    B(int num2){
        val2 = num2;
    }

    void printData();
};

void B :: printData(){
    cout<<"The val2 is :"<<val2<<endl;
}

int main(){
    B b(5);
    b.printData();

    
    return 0;
}

//but here always use a blank constructor or use the derived
// constructor method in cpp
//refer doubt2.py