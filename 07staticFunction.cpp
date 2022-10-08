// static data member and member functions.
#include<iostream>
using namespace std;

class emp{
    int id;
    static int count; // by default initialized to 0

    public:
        void setdata(void){
            cout<<"Enter emp id:";
            cin>>id;
            count++;
        }

        void getdata(void){
            cout<<"Id of an employee is "<<id<<" and Employee count is "<<count<<endl;
        }

        static void getcount(){
            cout<<"Counter is "<<count<<endl;
        }

};

int emp:: count = 1000; // it is nescessary to write it outside the class due to 
// shared memory with all the objects of class.

int main(){
    emp a, b, c;
    a.setdata();
    a.getdata();

    emp::getcount();

    b.setdata();
    b.getdata();

    emp::getcount();

    c.setdata();
    c.getdata();

    emp::getcount();
    return 0;
}

/*
Run the program and attach it with output to the 
Submission File.
*/
