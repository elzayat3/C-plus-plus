class Shape {
public:
    void print() {
        cout << "Shape";
    }
};

class Circle : public Shape {
public:
    void print(){
        cout << "Circle";
    }
};

int main() {
    Shape s;
    Circle c;

    s.print(); // Shape
    c.print(); // Circle
}