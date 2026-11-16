#include <iostream>
#include <string>

class Shape {
    protected:
        std::string m_shapeName;
    public:
        Shape(std::string name) : m_shapeName{name}{}
        virtual void shapeName(void) const = 0;
        virtual void operator()() = 0;
};

class Rectangle : virtual public Shape {
    private:
        int m_h;
        int m_w;
    public:
        Rectangle(int h, int w) : m_h{h}, m_w{w}, Shape{"Rectangle"}{}
        void shapeName(void) const override {
            std::cout << m_shapeName << std::endl;
        }
        void operator()() {
            std::cout << "Rectangel" << (m_h * m_h) << "\n";
        }
};

class Triangle : virtual public Shape {
    private:
        int m_h;
        int m_b;
    public:
        Triangle(int h, int w) : m_h{h}, m_b{w}, Shape{"Triangle"}{}
        void shapeName(void) const override{
            std::cout << m_shapeName << std::endl;
        }
        void operator()() {
            std::cout << "Triangle " << std::endl;
        }

};

class Area : public Triangle, public Rectangle {
    public:
        Area(int h, int w) : Shape{"Rectangle"}, Triangle(h, w), Rectangle(h, w){}
        void shapeName(void) const override {
            Triangle::shapeName();
        }
        
        void operator()() override {
            std::cout << "Triangle " << std::endl;
        }
};

int main(void){
    // Triangle t{1,2};
    // Rectangle r{2,3};
    // t.shapeName();
    // r.shapeName();
    // Area obj{1,2};
    // obj.Rectangle::shapeName();
    // obj.Triangle::shapeName();
    // Triangle&& obj = Area(1,2);
    // obj();
    std::cout << sizeof(Area);
}
