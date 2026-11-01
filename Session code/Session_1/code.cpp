#include <iostream>
class car{
    public:

    int  add(int a,int b)
    {
        return a+b+x ; 
    }
    int x;
    int y;

    private:
};

struct cars{

    int x;
    int y;
};

cars obj={
    .x=10,
    .y=11
};

struct cars2{
    char c;
    char h;
    int x;
    int y;
};

cars2 obj2={
    .c=1,
    .h=2,
    .x=10,
    .y=11
};
int main(void)
{
    car*ptr=(car*)&obj;
    car*ptr2=(car*)&obj2;

    std::cout<<ptr->x<<std::endl<<ptr->y<<std::endl;

    std::cout<<ptr->add(1, 2)<<std::endl;

    std::cout<<ptr2->x<<std::endl<<std::endl<< ptr2->add(1,2);

}