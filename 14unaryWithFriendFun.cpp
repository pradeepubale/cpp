// Unary Operator overloading.
#include<iostream>
using namespace std;

class increase{
    private:
        int v;
    public:
        increase(){
            v = 10;
        }
        // overload ++ when used as an prefix.
        // using friend function.
        void friend operator ++(increase &obj);

        // overload ++ when used as an postfix.
        // using friend function.
        friend void operator ++(increase &obj, int );

        void display(){
            cout<<"Value is: "<<v<<endl;
        }
};

// void increase :: operator ++(){
//     v = v + 10;
// }

// unary operator overload with friend function.
void operator ++(increase &obj){
    obj.v = obj.v + 5;
}

void operator ++(increase &obj, int){
    obj.v = obj.v + 10;
}

int main(){
    increase i;
    // call the "void operator ++()" function
    ++i;
    i.display();

    // call the "void operator ++(int)" function
    i++;
    i.display();
    return 0;
}

/*
Run the program and attach it with output to 
Practical File.
*/
