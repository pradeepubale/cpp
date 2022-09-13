/*
    Function overloading
    13 Sep 2022
*/

#include <iostream>
using namespace std;

void hello()
{
    cout << "Hello C++" << endl;
}

void hello(string str)
{
    cout << "The string from the function is:" << str << endl;
}

void hello(int a, int b)
{
    cout << "Integer Addition is " << a + b << endl;
}

void hello(double x, double y)
{
    cout << "Double addition is " << x + y << endl;
}

int main()
{
    // Function overloading
    hello();
    hello("MIT Cidco");
    hello(10, 20);
    hello(25.3, 31.569);

    return 0;
}

/*
Home Assignment (02) 
Create a function named print()
pass two strings, two integers, two double variables

ex:
print()
print(two string variables)
print(two integer variables)
print(two double variables)
*/
