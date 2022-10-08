// Everything about constructor 
#include<iostream>
using namespace std;

class number{
    int a, b;
    public:
        number(void); // default constructor.

        // parameterized constructor.
        number(int x, int y){
            a = x;
            b = y;
        }

        number(int x){
            a = x;
            b = 0;
        }

        void printNumber(void){
            cout<<"value of a:"<<a<<" and b:"<<b<<endl;
        }
};

number :: number(){
    a = 10;
    b = 20;
}

int main(){
    // default constructor.
    number n1, n2;
    cout<<"Default constructor example"<<endl;
    n1.printNumber();
    n2.printNumber();

    // parameterized constructors.
    // implicit call
    cout<<"parameterized constructors"<<endl;
    number n3(5, 7), n4(150, 200);
    n3.printNumber();
    n4.printNumber();

    // explicit call
    number n = number(25, 50);
    n.printNumber();
    
    // Constructor overloading.
    cout<<"Constructor Overloading..."<<endl;
    number o1, o2(1000, 2000), o3(45);
    o1.printNumber();
    o2.printNumber();
    o3.printNumber();
    
    return 0;
}


/*
Run it and attach it to the 
Practical Fle.
*/
