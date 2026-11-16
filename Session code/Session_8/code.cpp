
#include <iostream>

class vehicle {
    public:
     virtual ~vehicle()
    {
        std::cout<<"hello from vehicle dtor"<<std::endl;
    }

    vehicle()
    {
        std::cout<<"hello from vehicle ctor"<<std::endl;
    }
};
class oem{
    public:
    virtual ~oem()
    {
        std::cout<<"hello from oem dtor"<<std::endl;
    }

    oem()
    {
        std::cout<<"hello from oem ctor"<<std::endl;
    }
};
class car : public oem, public vehicle {
    public:
    ~car()
    {
         std::cout<<"hello from car dtor"<<std::endl;

    }

    car()
    {
         std::cout<<"hello from car ctor"<<std::endl;

    }
};

int main()
{
    oem*obj=new car();

    delete obj;
}

