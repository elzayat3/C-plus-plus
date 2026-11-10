

#include <iostream>

class car{
    public:

    static int x;

    static void  function(void ){
       x = 10;
    }


};

int  car::x = 99;

int main(void){
    car obj1;
    car obj2;
    obj2.function();
    car::function();
    std::cout << obj1.x << std::endl;
    std::cout << obj2.x << std::endl;
}