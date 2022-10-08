void hello(void);
int myFunction(int, int);
//void Print(string);

void Print(std::string str){
    std::cout<<str<<std::endl;
}

void hello(){
    std::cout<<"This is from my header file"<<std::endl;
}

int myFunction(int a, int b){
    std::cout<<"Inside my function"<<std::endl;
    if(a < b)
        return a;
    else
        return b;
}

class dog{
    int a,c,b;
    void woof(void){
        std::cout<<"woof woof  \n";
    }


    public:
        void bho();

        void phurr(){
            std::cout<<"Cat phurrs \n";
        }
        int d;
        void meow(){
            std::cout<<"MEow \n";
        }
};

void dog :: bho(){
    woof();
    std::cout<<"bho complete... \n";
}
