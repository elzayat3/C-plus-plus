
#include <iostream>


class car{

    private:

    int x;

    public:

    explicit car(int value): x{value}{}

    void print(void)
    {
        std::cout<< x;
    }


};


int main(){

    car c1=2;
    c1.print();

    return 0;
}