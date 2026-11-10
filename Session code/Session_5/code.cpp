

#include <iostream>
using namespace std;

class car {
public:
    car() {
        cout << "Constructor\n";
    }

    car(const car& obj) {
        cout << "Copy Constructor\n";
    }

    car(car&& obj) {
        cout << "Move Constructor\n";
    }
};

car fun() {
    car obj;
    return obj;
}

int main() {
    car c = fun();
}