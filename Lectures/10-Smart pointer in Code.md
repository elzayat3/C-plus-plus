
---



## 1-Recap

الsmart pointer بتدعم فكرة الrule of thumb عايزه تغنيك عن الفكرة دي مش عايزاك تكون انت المسؤول 

![[Pasted image 20261119132035.png]]

## 2-Unique pointer code 

الsmart pointer موجود ف library اسمها memory 

![[Pasted image 20261119132914.png]]

![[Pasted image 20261119133006.png]]

دي طريقة انك توصل للpointer

الclasspointer مش لازم تعمل delete هو عامل delete في الdtor لوحده اصلا لكن الptr لازم تعمل delete

بس طريقة الaccess رخمه كل شويه عمل dot وانا مش عايز كده ممكن نعمل ايه ؟ 

![[Pasted image 20261119133426.png]]

هو كده هيرجع RV 

طيب لو عايز ارجعه ك LV 
![[Pasted image 20261119133550.png]]

علشان عايز اعمل كده مثلا بدل ما ارجع int هرجع int&

![[Pasted image 20261119134136.png]]

زي بعض بالظبط 


![[Pasted image 20261119134239.png]]

خد بالك الclass ده معمول للpointer مش معمول انك تعمل allocate ل memory جديدة 

لو عايز احل المشكلة دي اللي بتسبب double delete برضوا هعمل delete لل copy 

![[Pasted image 20261119135627.png]]

ده كده pointer بيشاور على garbage 

خد بالك هو مش هياخد منك value هو لازم ياخد منك pointer 

![[Pasted image 20261119135923.png]]

![[Pasted image 20261119140129.png]]

دي غلط برضوا علشان هو عامل الctor explicit 

![[Pasted image 20261119140216.png]]

دي هتشتغل عادي 


![[Pasted image 20261118170808.png]]

ال reset 

![[Pasted image 20261119140751.png]]

انا هنا كاني عملت بالضبط delete ptr 

مش هيحصل double delete هنا متخفش لانه بيخليه nullptr اصلا 




![[Pasted image 20261118170818.png]]

![[Pasted image 20261119162117.png]]

![[Pasted image 20261119141227.png]]

![[Pasted image 20261119141707.png]]




![[Pasted image 20261119141859.png]] 
الif هنا بتاكد هو بيشاور على حاجة ولا لا عملها ازاي ؟ 

![[Pasted image 20261119142244.png]]

عمل دي الاول 

![[Pasted image 20261119142440.png]]

بعدين دي 



![[Pasted image 20261119142021.png]]


![[Pasted image 20261119142114.png]]

دي شغاله معاك 

![[Pasted image 20261119144552.png]]

خد بالك كده غلط متعملش كده 

![[Pasted image 20261119144835.png]]

![[Pasted image 20261119144856.png]]

خد بالك متعملش كده 

![[Pasted image 20261119145038.png]]

![[Pasted image 20261119145112.png]]

خد بالك هو حذف الcopy تماما 

![[Pasted image 20261119145203.png]]

خد بالك كده غلط لانه الptrlocal ده object اتعمل في الstack وهيتحذف لما نطلع من الfunction 

ممكن ترجعه ك release 

![[Pasted image 20261119145544.png]]

مفيش حاجه اسمها كده 

![[Pasted image 20261119150107.png]]

عادي تعمل كده مفيش اي مشكلة 

بس هنا المشكلة في الdtor بيحذف واحد بس مش array 

بس هنا تجي الcbf الdtor بيتاكد انت باعت cbf ولا لا 

![[Pasted image 20261119150506.png]]

كده مثلا 

![[Pasted image 20261119150555.png]]

اعمل دي فوق مثلا 

![[Pasted image 20261119150936.png]]

ده حلها 

هيا دي الcbf 


![[Pasted image 20261119154054.png]]

![[Pasted image 20261119154302.png]]

انت ممكن باستخدام الC++ تفتح File وتكتب فيه عادي جدا 

هنا عايز اخلي الunique pointer هو المسؤول انه يعمل open وفي نفس الوقت يعمل close لل file علشان نطبق فكرة الRAII 

هتستخدم Library اسمها cstdio  

![[Pasted image 20261119154815.png]]

مش هينفع اعمل للpointer ده delete علشان هو هيروح يعمل delete لل file 

![[Pasted image 20261119154945.png]]

![[Pasted image 20261119155006.png]]

![[Pasted image 20261119155311.png]]

كده هتروح تكتب في الfile عادي جدا 

![[Pasted image 20261119155336.png]]


## 3-Shared pointer in code 


![[Pasted image 20261119155604.png]]



![[Pasted image 20261119155923.png]]



![[Pasted image 20261119160000.png]]

لازم تعمل كده متنساش 


![[Pasted image 20261119160115.png]]

![[Pasted image 20261119160431.png]]


حصل هنا memory leakage ودي مشكلة كبيرة جدا 

الحاجه الوحيده اللي هتتمسح هيا podcast لانه هو ده الموجود في الptr بتاع الclass دلوقت 

ازاي نحل المشكلة دي ؟

![[Pasted image 20261119160914.png]]

لما انادي على parametrize ctor  هروح اعمل counter ref في الheap 

![[Pasted image 20261119161041.png]]

هخلي الcopy ctor ينقل الcounter زي ما نقل الpointer 

![[Pasted image 20261119161139.png]]


![[Pasted image 20261119161213.png]]

![[Pasted image 20261119161329.png]]

خلي الcouner بين اقواس كده 


![[Pasted image 20261119161422.png]]

مش بيعمل shallow متنساش 

![[Pasted image 20261119161711.png]]


عايز اعمل السطر رقم 50


![[Pasted image 20261119161757.png]]


![[Pasted image 20261119162212.png]]

![[Pasted image 20261119162226.png]]

![[Pasted image 20261119162245.png]]

ده بيعرف يتعامل مع الarray عادي جدا مفيش deleter  



![[Pasted image 20261119172437.png]]

الexplicit معمول هنا برضوا خد بالك 

![[Pasted image 20261119172608.png]]


![[Pasted image 20261119172848.png]]


![[Pasted image 20261119172906.png]]


![[Pasted image 20261119172716.png]]


## 4-Example in code


![[Pasted image 20261119174647.png]]

هنا مش هعمل object جوه الemployee علشان هو مش عنده القدرة انه يشتري عربية 

![[Pasted image 20261119175056.png]]

![[Pasted image 20261119175126.png]]


![[Pasted image 20261119175245.png]]

السطر 19 بشوف انا معايا العربية ولا لا 

![[Pasted image 20261119175951.png]]

ده الصح بقى 

![[Pasted image 20261119175854.png]]

![[Pasted image 20261119180013.png]]

![[Pasted image 20261119180128.png]]


![[Pasted image 20261119180152.png]]


![[Pasted image 20261119180318.png]]


![[Pasted image 20261119180336.png]]


![[Pasted image 20261119180503.png]]

![[Pasted image 20261119180525.png]]


![[Pasted image 20261119180617.png]]



طيب لو خليته shared pointer  بدل unique 

![[Pasted image 20261119182514.png]]


![[Pasted image 20261119214318.png]]


![[Pasted image 20261119182551.png]]


![[Pasted image 20261119182841.png]]

المقصود بال ref في السطر 47 هيا الref counter 

![[Pasted image 20261119183004.png]]

![[Pasted image 20261119183017.png]]


![[Pasted image 20261119183044.png]]

كده غلط انا عايز ابيع العربية والe1 ميكنش معاها حاجه الowner هو talabat

ده كده design سئ المفروض اعمل ايه ؟


## 5-Weak pointer 

![[Pasted image 20261119214549.png]]


![[Pasted image 20261119214659.png]]


![[Pasted image 20261119214859.png]]

لام قبل الweak اشوف موضوع الexpired ده 


وهنضيف كمان حاجه مهمه 


![[Pasted image 20261119215129.png]]



![[Pasted image 20261119215255.png]]

![[Pasted image 20261119215402.png]]

![[Pasted image 20261119215441.png]]


كده انا مش محتاج اعمل get و give والكلام ده 

![[Pasted image 20261119215632.png]]


الweak مش هيزود ال count 

![[Pasted image 20261119215832.png]]

![[Pasted image 20261119220133.png]]


![[Pasted image 20261119221132.png]]


![[Pasted image 20261119221205.png]]


![[Pasted image 20261119221306.png]]

![[Pasted image 20261119221434.png]]

ازاي السطر ده حصل 

![[Pasted image 20261119221643.png]]

هو بيعمل حاجه شبه كده 

![[Pasted image 20261119221810.png]]

![[Pasted image 20261119222037.png]]

![[Pasted image 20261119222113.png]]

![[Pasted image 20261119222134.png]]

![[Pasted image 20261119222253.png]]

![[Pasted image 20261119222303.png]]

الحل الصح انه الlock ترجع shared pointer 



![[Pasted image 20261119222414.png]]

المربع تحت شمال مكتوب فيه stack 

اليمين ده الshared pointer الشمال ده الweak 

## 5-Make

![[Pasted image 20261119223801.png]]

علشان نبعد انه حد يشوف السطر ده وهو مش فاهم فيروح يعمل delete عملنا الMake 

![[Pasted image 20261119224032.png]]

![[Pasted image 20261119224153.png]]

كانها عامله كده 

![[Pasted image 20261119224324.png]]

دي الفكرة 

![[Pasted image 20261119224708.png]]

المهم انه بيستخدم بشكل اساسي علشان الreadability 


## 6-Circular Refrence


![[Pasted image 20261120101719.png]]

بيعتدموا على بعض 

بتكون من types مختلفه 

![[Pasted image 20261120102216.png]]


![[Pasted image 20261120102237.png]]


![[Pasted image 20261120102342.png]]

الhead والsecond معمولين في الstack بيشاروا على مكان في الheap 

![[Pasted image 20261120203659.png]]



![[Pasted image 20261120203751.png]]


![[Pasted image 20261120203912.png]]

ايه الحل ؟


![[Pasted image 20261120204104.png]]


![[Pasted image 20261120204236.png]]


![[Pasted image 20261120204343.png]]


![[Pasted image 20261120210106.png]]

![[Pasted image 20261120210128.png]]

نشوف المشكلة بالكود 


```C++
#include <iostream>
#include <memory>
using namespace std;

struct B;

struct A {
    shared_ptr<B> b;

    ~A() {
        cout << "A destroyed\n";
    }
};

struct B {
    shared_ptr<A> a;

    ~B() {
        cout << "B destroyed\n";
    }
};

int main() {
    auto a = make_shared<A>();
    auto b = make_shared<B>();

    a->b = b;
    b->a = a;

    cout << a.use_count() << '\n'; // 2
    cout << b.use_count() << '\n'; // 2
}
```

![[Pasted image 20261120210431.png]]

![[Pasted image 20261120210518.png]]

![[Pasted image 20261120210544.png]]

![[Pasted image 20261120210605.png]]

![[Pasted image 20261120210648.png]]

![[Pasted image 20261120210711.png]]

![[Pasted image 20261120210727.png]]

الكود بعد التعديل 


```c++
#include <iostream>
#include <memory>
using namespace std;

struct B;

struct A {
    shared_ptr<B> b;

    ~A() {
        cout << "A destroyed\n";
    }
};

struct B {
    weak_ptr<A> a;  // الحل هنا

    ~B() {
        cout << "B destroyed\n";
    }
};

int main() {
    auto a = make_shared<A>();
    auto b = make_shared<B>();

    a->b = b;
    b->a = a;

    cout << a.use_count() << '\n';
    cout << b.use_count() << '\n';
}
```

![[Pasted image 20261120210828.png]]

![[Pasted image 20261120210907.png]]

![[Pasted image 20261120210933.png]]






