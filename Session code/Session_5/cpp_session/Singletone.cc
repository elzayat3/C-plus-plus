#include <iostream>

class Car {
    private:
        int m_private_value;
        int* m_ptr;
        Car(int value) : m_ptr{new int(value)}, m_private_value{value}{}
    public:

        void readValue(void) const
        {
            std::cout << m_private_value << std::endl;
        }

        static Car& createObj(int value)
        {
            static Car obj{value};
            return obj;
        }

        ~Car()
        {
            delete m_ptr;
        }
};

int main(void){
    Car bmw{5};
    Car& obj = Car::createObj(5);
}