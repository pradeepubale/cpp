// Binary Operator overloading.
#include<iostream>
using namespace std;

class complex{
    private:
        int real, imag;
    public:
        void input(){
            cout<<"Enter Real and Imaginary parts:";
            cin>>real;
            cin>>imag;
        }

        complex operator +(complex obj){
            complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void output(){
            cout<<"The Complex Number is : "<<real<< " + "<<imag<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, result;
    cout<<"Enter first complex number:";
    c1.input();

    cout<<"Enter second complex number:";
    c2.input();

    result = c1 + c2;
    result.output();

    return 0;
}

/*
Execute the program and 
attach it to the Practical File.
*/
