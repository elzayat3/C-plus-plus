#include <iostream>

class Car {
    private:
        int m_private_value;
        int* m_ptr;
    public:
        static int value;
        Car(int value) : m_ptr{new int(value)}{}

        Car() : Car(5){}
        Car(Car& ref) : Car(*(ref.m_ptr)) {}
        Car(Car&& ref) = default;

        void readValue(void) const
        {
            std::cout << m_private_value << std::endl;
        }

        static void stFunction(void){
            value = 10;
        }
        ~Car()
        {
            delete m_ptr;
        }
};

/* must be initialized outside of the class */
int Car::value = 99;

void copyObject(Car obj)
{}


int main(void){
    Car obj1;
    Car obj2;
    obj2.stFunction();
    Car::stFunction();
    std::cout << obj1.value << std::endl;
    std::cout << obj2.value << std::endl;
}