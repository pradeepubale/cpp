// inline function

#include<iostream>
using namespace std;

// use only when the code is small.
// Don't use in recursion, or with static variable, when fun code is large.  
inline int product(int a, int b){
    return a * b;
}

int dot(int a, int b){
    static int c = 0;
    c += 1;
    return (a*b)+c;
}

int main() {
    int a,b;
    cout<<"Enter value of a and b:";
    cin>>a>>b;
    cout<< "Product of a & b is: "<<product(a, b)<<endl;
    cout<< "Product of a & b is: "<<product(a, b)<<endl;
    cout<< "Product of a & b is: "<<product(a, b)<<endl;

    //with static function
    cout<< "Product of a & b is: "<<dot(a, b)<<endl;
    cout<< "Product of a & b is: "<<dot(a, b)<<endl;
    cout<< "Product of a & b is: "<<dot(a, b)<<endl;
    return 0;
}

/*
Run the program and attch it with output to the File.
*/
