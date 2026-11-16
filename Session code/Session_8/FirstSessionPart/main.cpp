#include <iostream>
#include <string.h>

class Vehicle {
    private:
        char* m_vehicleName;
    protected:
        /*VehicleBreakCar*/
        virtual void breakCar(void)
        {
            std::cout << "Vehicle Break \n";
        }
    public:
        Vehicle(char* name) {
            const int sizeOfString = strlen(name);
            m_vehicleName = new char[sizeOfString+1];
            strcpy(m_vehicleName, name);

            std::cout << "Vehicle Constructor \n";
        }
        
        Vehicle() = delete;
        Vehicle(const Vehicle&) = default;
        Vehicle(Vehicle&&) = default;
        
        virtual  ~Vehicle()
        {
            delete[] m_vehicleName;
            std::cout << "Vehicle DesConstructor \n";
        }
        
        virtual void accelerate(int) const{

        };

    };
    
    class Car : public Vehicle {
        public:
        int  m_maxFuelLevel;
        char* ptr;
        Car(char* name, int fuelLevel) : Vehicle{name}{
            std::cout << "Car Constructor \n";
            ptr = new char[]{"hello\n"};
        }
        ~Car(){
            delete[] ptr;
            std::cout << "Car DesConstructor \n";
        }

        /*CarBreakCar*/
        void breakCar(void)
        {
            std::cout << "Car Break \n";
        }

        void accelerate(int z) const override final{
            std::cout << "Car accelerate \n";
        }
};

class Toyota : public Car{
        // void accelerate(void) override {
        //     std::cout << "Toyota accelerate \n";
        // }
};

int main(void)
{
    Car obj{"Toyota", 50};
    // (Vehicle)obj.breakCar();
    /*CarBreakCar*/
    // obj.breakCar();
    // obj.Vehicle::breakCar();
    Vehicle&& ref = Car{"Toyota", 50};
    // ref.breakCar();
    // ref->Vehicle::breakCar();
    // delete ref;
    // Vehicle obj2{"Toyota"};
    // Car obj{"Toyota", 50};
    // Vehicle& ref = obj;
    // ref.accelerate();
}