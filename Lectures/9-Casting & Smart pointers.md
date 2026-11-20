
---

## 1-Recap

![[Pasted image 20261118135048.png]]

![[Pasted image 20261118135337.png]]

![[Pasted image 20261118135550.png]]

![[Pasted image 20261118135948.png]]

اللي على الشمال تفسيره انه انا بخلي اخر class لما يعمل object هو اللي بيعمل الperson مش بخلي الstudent & employee هما الاتنين يعملوا person 

![[Pasted image 20261118140901.png]]

اللي في اليمين هو فارض انه Toyota مفيش فيها اي att تاني انا كده مش هحتاج اي ctor لToyota 

انا مش عايز اعمل delegating ctor 

الusing ده لل ctor بخليه ينادي الctor بتاع car وخلاص 

مش هعرف اعملها لل copy & move لانها خاصه بالclass فقط 

![[Pasted image 20261118141941.png]]

عادي تعمل كده 

![[Pasted image 20261118142100.png]]

![[Pasted image 20261118142129.png]]

![[Pasted image 20261118142144.png]]


## 2-typed of Casting 

![[Pasted image 20261118142254.png]]


الraw ده بتاع الc عادي 

الstatic بقول الtype ده مينفعش يروح للType ده

ملوش علاقه بالoverflow هو بيحدد ده هينفع يخش في ده ولا لا 

اللي تحت يمين هيعدي عادي لانه fit عليه عادي 

اللي على اليمين تحت اسمه upcasting يعني بطلع لفوق برجع لل base بتاعي 

اللي على الشمال فوق ده upcasting برضوا 

اللي على الشمال فوق ده down casting 

![[Pasted image 20261118145437.png]]

 اللي فوق هيعمل compile لكن ممكن بنسبة كبيرة هتضرب segmentation fault او garbage
 
الdynamic هيرجع nullptr لو غلط

وده بيكون بس مع الpointers لو هعمل downcast 

بس دي بتستهلك performance كبيره جدا 

![[Pasted image 20261118150112.png]]

الreinterprent معموله بس علشان readability 

الconst لازم اتاكد انه الvar الاساسي مش  const الref او الpointer هو اللي بيكون بيشاور على الconst 

مش مستخدمه اوي 

بس لو حصلت bug في الfun اللي تحت ممكن تغير الref بالطريقة دي لو عايز علشان debugging 



![[Pasted image 20261118150752.png]]


الcasting ده هيا عبارة عن function template جوه الcompiler 

static --> for normal type conversion 

dynamic --> for downcast in inheritance 

reinterpret --> naming conversion 

![[Pasted image 20261118151700.png]]

دي حاجه زي الsizeof 

![[Pasted image 20261118151938.png]]

![[Pasted image 20261118152029.png]]

![[Pasted image 20261118152135.png]]

![[Pasted image 20261118152206.png]]

![[Pasted image 20261118152313.png]]

![[Pasted image 20261118152356.png]]

```c++

#include <iostream>
using namespace std;

class car
{
public:
    virtual ~car() = default;
};

class toyota : public car
{
public:
    void toyotaFeature()
    {
        cout << "Toyota feature\n";
    }
};

class bmw : public car
{
public:
    void bmwFeature()
    {
        cout << "BMW feature\n";
    }
};

int main()
{
    car* c = new bmw();

    toyota* t = dynamic_cast<toyota*>(c);

    if (t != nullptr)
    {
        t->toyotaFeature();
    }
    else
    {
        cout << "Casting failed!";
    }

    delete c;
}
```


![[Pasted image 20261118152510.png]]

![[Pasted image 20261118152539.png]]

![[Pasted image 20261118152618.png]]
![[Pasted image 20261118152722.png]]


```c++

toyota t;

car* ptr = &t;
```

![[Pasted image 20261118153153.png]]


![[Pasted image 20261118153309.png]]

![[Pasted image 20261118153328.png]]

![[Pasted image 20261118153513.png]]

![[Pasted image 20261118153621.png]]


![[Pasted image 20261118153702.png]]

![[Pasted image 20261118153718.png]]


![[Pasted image 20261118153901.png]]

![[Pasted image 20261118153949.png]]

![[Pasted image 20261118154009.png]]

![[Pasted image 20261118154024.png]]

![[Pasted image 20261118152750.png]]


![[Pasted image 20261118152841.png]]

## 3-Intro in Smart pointer 

![[Pasted image 20261118154850.png]]


![[Pasted image 20261118155109.png]]


![[Pasted image 20261118155132.png]]

## 4-Unique pointer 

![[Pasted image 20261118155217.png]]

هنا هيشيل كل الCOPY ويسيب الmove 

```c++
int* ptr = new int(10);

unique_ptr<int> p(ptr);

int* x = p; // error

```

![[Pasted image 20261118161212.png]]

![[Pasted image 20261118161246.png]]

![[Pasted image 20261118161500.png]]

![[Pasted image 20261118161742.png]]

![[Pasted image 20261118161805.png]]


![[Pasted image 20261118162154.png]]

![[Pasted image 20261118162259.png]]


السطر بتاع الunique pointer في الmain ده هيطلع error علشان هو عامل explicit لل ctor فانت محتاج تستخدم static cast 

![[Pasted image 20261118164320.png]]

![[Pasted image 20261118164358.png]]


![[Pasted image 20261118164559.png]]


![[Pasted image 20261118164631.png]]

![[Pasted image 20261118164659.png]]

![[Pasted image 20261118164745.png]]

![[Pasted image 20261118164856.png]]

![[Pasted image 20261118164951.png]]

![[Pasted image 20261118165037.png]]


![[Pasted image 20261118165229.png]]

![[Pasted image 20261118165253.png]]

```c++


#include <iostream>
#include <memory>
#include <string>
#include <utility>
using namespace std;

class BMW
{
public:
    BMW()
    {
        cout << "BMW Created\n";
    }

    ~BMW()
    {
        cout << "BMW Destroyed\n";
    }

    void drive() const
    {
        cout << "BMW is driving\n";
    }
};

class Employee
{
private:
    string name;

public:
    Employee(string n) : name(std::move(n)) {}

    void useCar(const BMW& car) const
    {
        cout << name << " is using the car\n";

        car.drive();
    }
};

class Company
{
private:
    unique_ptr<BMW> car;

public:
    Company(unique_ptr<BMW> c): car(std::move(c))
    {
    }

    void giveCar(Employee& e)
    {
        e.useCar(*car);
    }
};

int main()
{
    // Create unique pointer
    unique_ptr<BMW> car = make_unique<BMW>();

    // Transfer ownership to Company
    Company company(std::move(car));

    Employee e1("Ahmed");
    Employee e2("Mohamed");
    Employee e3("Ali");

    company.giveCar(e1);

    cout << "----------\n";

    company.giveCar(e2);

    cout << "----------\n";

    company.giveCar(e3);

    cout << "End of main\n";
}

```


![[Pasted image 20261118165607.png]]

![[Pasted image 20261118165655.png]]


![[Pasted image 20261118165748.png]]

![[Pasted image 20261118165813.png]]


![[Pasted image 20261118165838.png]]



## 5-Shared pointer 

![[Pasted image 20261118165934.png]]

لازم اعمل check اتاكد انه العربية لسه موجودة 

انا ممكن اعمل share للownership 

انا مش هعمل delete للpointer غير لما اتاكد انه محدش بيشاور على الحته دي في الheap تاني 

ازاي اخلي الcounter يعد كل شويه ؟ هخليه static 

اي ctor هعمل فيه count ++

كله هيكون shallow 

كده هيشتغلوا على العربية في نفس الوقت كده مشكلة حلها هو الweak pointer 

## 6-Weak Pointer 

![[Pasted image 20261118171114.png]]


اعمل check الاول الحاجة موجودة في الmemory ولا لا 

الlock ده بقول انا اللي بستخدمه 

الweak ده قصده انا في scope معين هستخدم الweak ده 

![[Pasted image 20261118171628.png]]