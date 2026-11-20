
#include <iostream>

class car
{
    public:

    car()
    {
        std::cout<<"hello from car";
    }

};



class toyota : car
{
    using car::car;

};