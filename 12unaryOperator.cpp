// Unary Operator overloading.
#include<iostream>
using namespace std;

class increase{
    private:
        int v;
    public:
        increase(){
            v = 0;
        }
        // overload ++ when used as an prefix.
        void operator ++();

        // overload ++ when used as an postfix.
        void operator ++(int){
            v = v + 5;
        }
        void display(){
            cout<<"Value is: "<<v<<endl;
        }
};

void increase :: operator ++(){
    v = v + 10;
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
Run the program and attach it to
the Practical file.
*/
