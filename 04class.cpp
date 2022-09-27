#include<iostream>
using namespace std;

class employee{
    private:
        string name, sal, dob;

    public:
        string edu, post;

        void setdata(string a, string b, string c);

        void getdata(){
            cout<<"name is "<<name<<endl;
            cout<<"sal is "<<sal<<endl;
            cout<<"dob is "<<dob<<endl;
            cout<<"edu is "<<edu<<endl;
            cout<<"post is "<<post<<endl;
        }
};

void employee :: setdata(string a, string b, string c){
    name = a;
    sal = b;
    dob = c;
}

int main(){
    employee e1;
    e1.setdata("Mr.A", "15000", "10 Dec 2000");
    e1.edu = "MBA";
    e1.post = "Manager";
    e1.getdata();
    return 0;
}

/*
Lab assignment:
create a class with your name.
declare your date_of_birth, adhar_no as private.
declare your name, address, mobile_no as public.

create object and acess all data.
*/
