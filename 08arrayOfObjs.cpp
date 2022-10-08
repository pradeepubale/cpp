#include<iostream>
using namespace std;

class emp{
    int id, sal;
    public:
        void setid(void){
            cout<<"Enter emp id:"<<endl;
            cin>>id;
        }

        void getid(void){
            cout<<"The id of an emp is:"<<id<<endl;
        }
};

int main(){
    emp e[5];

    for(int i = 0; i < 5; i++){
        e[i].setid();
        e[i].getid();
    }
    return 0;
}

/*
Run the program & attch it to the 
Submission file.
*/
