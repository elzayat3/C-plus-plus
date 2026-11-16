
---

## 1-Recap


![[Pasted image 20261116173805.png]]


![[Pasted image 20261116173908.png]]

![[Pasted image 20261116174504.png]]

كده هيعمل call لبتاعت car في كل الحالات مع اني عامل object Toyota نحل المشكلة دي بالvirtual 
![[Pasted image 20261116174711.png]]

![[Pasted image 20261116174741.png]]


## 2-Inheritance Types

![[Pasted image 20261116174219.png]]


## 3-Leakage in inheritance


![[Pasted image 20261116180001.png]]


![[Pasted image 20261116180047.png]]

لازم انادي على الctor بتاع الvehicle 

![[Pasted image 20261116180541.png]]

اول حاجه هو عمل هنا call لبتاعت الvehicle وتاني مشكلة مفيش dtor

![[Pasted image 20261116180645.png]]

فين بتاع car ؟ 

اول حاجة المشكلة بتاعت الcall هتحلها ب virtual عادي زي ما عملنا قبل كده 

![[Pasted image 20261116180906.png]]

هنعمل virtual لل dtor 

كده هيحط الdtor في الvirtual table 

كده هينادي على الdtor بتاع car 

![[Pasted image 20261116181916.png]]

![[Pasted image 20261116181954.png]]

![[Pasted image 20261116182015.png]]

لازم تضيف const خد بالك 

الoverride بيتاكد انه الfunction اللي انا فيها واللي فوق نفس الsignature 


![[Pasted image 20261116182502.png]]

لو عايز انادي على function من فوق 

![[Pasted image 20261116183114.png]]

ممكن تعمل كده عادي 

## 4-multiple inheritance

![[Pasted image 20261116191022.png]]

هو هنا مش عارف هو بيعمل call لمين 

![[Pasted image 20261116191144.png]]

ده كده error هو مش هيعرف ينادي على مين بالظبط 

![[Pasted image 20261116191219.png]]

ده كده الحل 

![[Pasted image 20261116191316.png]]

![[Pasted image 20261116191352.png]]

مفيش مشكلة تعمل كده برضوا 

طيب لو عملت virtual في الvehicle & OEM الSIZE بتاع الcar هيكون كام ؟

هيكون 16 لانه الvehicle والOEM كل واحد عنده الvirtual pointer الخاص بيه بيشاور على الvirtual table الخاص بيه 

كده نفهم انه الobject ممكن يكون ليه اكتر من virtual pointer 

كده انت محتاج حاجه تقلك انت عايز انهي virtual table فيهم 

![[Pasted image 20261116195135.png]]

![[Pasted image 20261116195234.png]]

الtable ده اللي على اليمين هو بتاع car جمع الاتنين مع بعض 

![[Pasted image 20261116195400.png]]

الفكرة هنا ازاي هيعرف في الrun time انا عايز اوصل للvpt الاول ولا التاني ؟؟

عن طريق حاجة اسمها RTTI هنفهمها دلوقت 

![[Pasted image 20261116195622.png]]

كده عندي array of pointer 

![[Pasted image 20261116195827.png]]

هو بيعرف هو هيختار الoem ولا الvehicle عن طريق الtype بتاع الpointer بتاعك 

![[Pasted image 20261116200007.png]]

```c++

  

#include <iostream>

class vehicle {

    public:

    ~vehicle()

    {
        std::cout<<"hello from vehicle dtor"<<std::endl;
    }
    vehicle()

    {
        std::cout<<"hello from vehicle ctor"<<std::endl;
    }

};

class oem{

    public:

    ~oem()

    {
        std::cout<<"hello from oem dtor"<<std::endl;
    }
    oem()

    {
        std::cout<<"hello from oem ctor"<<std::endl;
    }

};

class car : public vehicle, public oem {

    public:

    ~car()

    {
         std::cout<<"hello from car dtor"<<std::endl;
    }
    car()

    {
         std::cout<<"hello from car ctor"<<std::endl;
    }

};

int main()

{
    car obj;
}
```

![[Pasted image 20261116201909.png]]

اللي مكتوب الاول في الinhiritance هو اللي هيتعمل له call للctor بتاعه الاول
![[Pasted image 20261116202134.png]]


![[Pasted image 20261116202210.png]]

![[Pasted image 20261116202239.png]]

![[Pasted image 20261116202317.png]]

لو غيرت دي بس في الكود 

لو الpointer to oem هيطلع نفس الoutput

![[Pasted image 20261116202459.png]]

![[Pasted image 20261116202620.png]]


لو غيرت كده 
![[Pasted image 20261116202659.png]]

## 5-Diamond shape


![[Pasted image 20261116202806.png]]

التكرار اللي على اليمين فوق ده مشكلة ازاي نحلها ؟

خد بالك كده فيه مشكلة الshape اتعملت مرتين مره مع الtriangle ومره مع الrectangle 

لو عندي function بنفس الاسم انا مش هعرف انادي على مين

![[Pasted image 20261116220422.png]]

كده انا عندي مشكلة خليت شخص واحد اللي هو ممكن يكون employee او student خليت لسه اسمين ودي مشكلة 

![[Pasted image 20261116220555.png]]

![[Pasted image 20261116220649.png]]

اكتب virtual وانت بتعمل inheritance 

كده هينادي على الctor بتاعه مره وحده بس يعني هيعمل object واحد فقط 

هتخلي الTA هو اللي ينادي على الctor بتاع الperson 

![[Pasted image 20261116221231.png]]


![[Pasted image 20261116221250.png]]

