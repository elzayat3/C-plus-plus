

class car {

    public:

    int xcar;

    protected: 

    int ycar;

    private:

    int zcar;

};


class toyota : public car
{
    public:

    int xtoyota;

    protected:

    int ytoyota;

    private:

    int ztoyota;

};


class corolla : toyota
{


};


int main()
{

    car obj;

    toyota obj1;

    corolla obj3;

    obj3;
}
