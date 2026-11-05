

#include <iostream>



class car{

    public:

    car(const car&ref)
    {
        std::cout<<"copy"<<std::endl;
    }

    car (car&& ref)
    {

    }

    car()=default;

    // car(const char*name)
    // {
    //     std::cout<<name<<std::endl;
    // }

    void fun(void)
    {
        std::cout <<"hello3";
    }

};


int main()
{
    //car obj{"hello"};

    car obj;

    car obj1=obj;

    obj1.fun();
}