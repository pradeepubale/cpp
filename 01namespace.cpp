/* Understanding namespaces */

#include<cstdio>

#include<iostream>

// Namespaces provide separate scopes for variable, function, and other declarations

namespace Demo1{
    void hello(){
        printf("This is inside Demo1 namespace");
    }
    void abc(){
        printf("\nfhuwffeiow\n");
    }
}

namespace demo2{
    void hello(){
        printf("This is inside namespace demo2");
    }
}

void hello(){
    printf("THIS IS A GLOBAL hello function");
}

int main(){
    using namespace Demo1;
    abc();
    //Demo1::hello();

    demo2::hello();
    // Global function
    //::hello();

    std::cout<<"Done....."<<std::endl;
}

/*
Homework Assignment 01:
Create your own 2 namespaces in CPP.
- Give first namespace your first name.
- Write function named Biodata() in first namespace which will print your name, age & address.

- Give second namespace your surname.
- Write function named Biodata() in second namespace which will print your School name.
*/
