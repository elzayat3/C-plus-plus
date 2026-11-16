#include <iostream>

class Vehicle {
        char* ptr;
    public:
        Vehicle(){
            ptr = new char();
            std::cout << "vehicle ctor\n";
        }
        virtual void accelerate(void)
        {
            std::cout << "in vehicle \n";
        }
        virtual void hello(void){

        }
    virtual ~Vehicle()
    {
        std::cout << "Vehicle dtor\n";
        delete ptr;
    }
};

class Oem {
    private:
        char* ptr;
    public:
        Oem(){
            ptr = new char();
            std::cout << "Oem ctor\n";
        }
        virtual void accelerate(void)
        {
            std::cout << "in Oem \n";
        }
        virtual void breakCar(void)
        {
            std::cout << "in Oem BreakCar \n";
        }
    virtual ~Oem()
    {
        std::cout << "Oem dtor\n";
        delete ptr;
    }
};

class Car : public Oem, public Vehicle {
    private:
        char* ptr;
    public:
    Car(){
        std::cout << "Car ctor\n";
        ptr = new char();
    }
    void showFunction(){
        Vehicle::accelerate();
    }
    void accelerate(void){
        std::cout << "in Car \n" ;
    }
    
    void breakCar(void)
    {
        std::cout << "in Car BreakCar \n";
    }
    void hello(void){

    }
    ~Car()
    {
        std::cout << "Car dtor\n";
        delete ptr;
    }
};

int main(void)
{
    // Car obj;
    // obj.accelerate();

    Vehicle* ptr = new Car();
    ptr->accelerate();
    delete ptr;

    // Vehicle* ptr1 = (Vehicle*)ptr;
    // ptr1->accelerate();
    

    // std::cout << sizeof(Car) << std::endl;
}