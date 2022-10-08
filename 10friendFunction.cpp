#include <iostream>
using namespace std;

// forward declaration.
class number;

class calculator{
    public:
        int add(int a, int b){
            return a + b;
        }
        // only declaration of prototype
        int sumof_a(number, number);
        // here n1, n2 objs will give an error bcoz not declared yet.
        int sumof_b(number, number);
};

class number
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend number sumOfNo(number n1, number n2);
    
    // make friend another class's function.
    friend int calculator :: sumof_a(number, number);

    friend int calculator :: sumof_b(number, number);

    void displayNo(void)
    {
        cout << "Numbers are a:" << a << " & b:" << b << endl;
    }
};

number sumOfNo(number n1, number n2)
{
    number n3;
    n3.setdata((n1.a + n2.a), (n1.b + n2.b));
    return n3;
}

int calculator ::sumof_a(number n1, number n2){
    return n1.a + n2.a;
}

int calculator ::sumof_b(number n1, number n2){
    return n1.b + n2.b;
}

int main()
{
    number n1, n2, sum;
    calculator c1;
    c1.add(5, 6);

    n1.setdata(5, 7);
    n1.displayNo();

    n2.setdata(8, 4);
    n2.displayNo();

    sum = sumOfNo(n1, n2);
    sum.displayNo();

    int r = c1.sumof_a(n1, n2);
    cout<<"Sum of a is "<<r<<endl;

    int r1 = c1.sumof_b(n1, n2);
    cout<<"sum of b is "<< r1 <<endl;
    return 0;
}

/*
Run the program and attach it to the 
practical file.
*/
