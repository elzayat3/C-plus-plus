#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Car {
public:
    Car() {
        cout << "Default Constructor\n";
    }

    Car(const Car& obj) {
        cout << "Copy Constructor\n";
    }

    Car(Car&& obj) noexcept {
        cout << "Move Constructor\n";
    }
};


int main() {
    Car c1;

    Car c2 = Car();
}