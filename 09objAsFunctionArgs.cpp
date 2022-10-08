// passing objects as a function arguments.

#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        void setdata(int v1, int v2){
            a = v1;
            b = v2;            
        }

        void complexSum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNo(){
            cout<<"Complex no is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printNo();

    c2.setdata(3, 4);
    c2.printNo();

    c3.complexSum(c1, c2);
    c3.printNo();

    return 0;
}

/*
Run the program and attach it to the 
practical file.
*/
