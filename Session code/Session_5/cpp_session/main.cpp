#include <iostream>

class Car {
    public:
        int* ptr;

        Car(){
            std::cout << "Default Constructor \n";
            ptr = new int(5);
        }

        Car(const Car& ref){
            std::cout << "Copy Constructor \n";
            ptr = new int(*(ref.ptr));
        }
        
        Car(Car&& ref){
            ptr = ref.ptr;
            ref.ptr = nullptr;
            std::cout << "Move Constructor \n";
        }
        
        ~Car(){
            delete ptr;
            ptr = nullptr;
        }

        void setter(int value)
        {
            *ptr = value;
        }
};

Car function(void)
{
    Car tempObj;
    tempObj.setter(99);
    return tempObj;
}

/*Car&& copyFunction(Car obj)
{
    obj.setter(19);
    return (Car&&)obj;
}*/


int main(void)
{
    Car trueObj = function();
    //Car ref = copyFunction((Car&&)trueObj); /* Must be copy */
    // trueObj.setter(20);

   //getchar();
}

