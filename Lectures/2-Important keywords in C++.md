
---

## Lecture map 

1-[[#1-revision]]
2-[[#2-namespace]]
3-[[#3-Using keyword]]
4-[[#4-constexpr keyword]]
5-[[#5-Variable Initialization]]
6-[[#6-C++ & C]]
7-[[#7-Class Implementation]]

---
## 1-revision

![[Pasted image 20261101133432.png]]

![[Pasted image 20261101133543.png]]

![[Pasted image 20261101133554.png]]

![[Pasted image 20261101133752.png]]

الiostream دي مكتبه بتتعامل مع stream of characters 

ايه الlibrary اللي بستخدمها علشان ابعت frames GUI اسمها gstream

![[Pasted image 20261101134022.png]]

هنعرف عن الfile descriptors دي قدام لسه الكلمه اللي بعد concept دي call 

## 2-namespace


### 1-Ordinary namespace

في C++، الـ `namespace` لازم تتعرّف في الـ Global Scope أو جوه Namespace تانية، لكن مينفعش تعرّفها جوه Function أو Class.


![[Pasted image 20261101134345.png]]

احنا عايزين كل واحد يشتغل في الscope بتاعه 


![[Pasted image 20261101134628.png]]

![[Pasted image 20261101134744.png]]

![[Pasted image 20261101135310.png]]

اعمل دي 

![[Pasted image 20261102105403.png]]


![[Pasted image 20261102110533.png]]

عندي هنا 3 alias كل واحد في scope مختلف

![[Pasted image 20261102110854.png]]



الـ variables اللي جوه الـ `namespace` بتتخزن في الـ Data Segment بتاع البرنامج، مش في الـ Stack، لأن ليها Static Storage Duration، يعني بتفضل موجودة طول فترة تشغيل البرنامج.

![[Pasted image 20261102110927.png]]

![[Pasted image 20261102111008.png]]

![[Pasted image 20261102111107.png]]


### 2-Unnamed namespace

![[Pasted image 20261102111221.png]]

![[Pasted image 20261102111437.png]]

بستخدمها جوه الfile بتاعي بس 

![[Pasted image 20261102122528.png]]

اللي في سطر رقم 7 متعرفه في file تاني هيطلع error مش هيعرف يكلم جي ولا دي 

![[Pasted image 20261102123040.png]]

![[Pasted image 20261102123106.png]]

![[Pasted image 20261102123128.png]]

![[Pasted image 20261102123255.png]]

![[Pasted image 20261102123355.png]]

لما تستخدم `inline` مع الـ Variable في C++17 أو أحدث، كل ملفات الـ `.cpp` هتتعامل مع نفس المتغير في الـ Memory.

![[Pasted image 20261102123556.png]]

### 3-Nested namespace


![[Pasted image 20261102134246.png]]

![[Pasted image 20261102134305.png]]

![[Pasted image 20261102134348.png]]

![[Pasted image 20261102134409.png]]

![[Pasted image 20261102134539.png]]

![[Pasted image 20261102134600.png]]

![[Pasted image 20261102134633.png]]


## 3-Using keyword


![[Pasted image 20261102124117.png]]

بلاش تستخدم using


![[Pasted image 20261102133419.png]]

![[Pasted image 20261102133432.png]]

![[Pasted image 20261102133446.png]]

![[Pasted image 20261102133529.png]]

![[Pasted image 20261102133610.png]]

![[Pasted image 20261102133645.png]]

![[Pasted image 20261102134822.png]]

طالما typedef بتعمل حاجة شبه دي ليه هنحتاج using ؟ 

![[Pasted image 20261102145552.png]]

الtemplete هي طريقة للprogramming موجوده في الc++ بس هنفهمها قدام 

![[Pasted image 20261102145729.png]]

الtemplete دي keyword 

الاضافة بتاعت الusing هتوضح اكتر مع الtemplete 


## 4-constexpr keyword

![[Pasted image 20261102150236.png]]

![[Pasted image 20261102150448.png]]

عندك هنا الsize بتاع ال10 هيكون signed int او unsigned لو حطيت الU

![[Pasted image 20261102150710.png]]

ال10 هنا هتاخد ال4byte كلهم الcompiler هو اللي هيعمل ليها cast ل char ال10 دي هتتحط جوه CPU register هتاخد 4byte

ال10 هتاخد memory في السطر ده بس ممكن يحطها جوه CPU Register او memory لو الCPU Register مش هتكفي انا مش هعرف الcompiler هو اللي هيحدد 

![[Pasted image 20261102151423.png]]

اول كلمة في الكلام الاحمر control 

![[Pasted image 20261102151807.png]]

هيقلك warning 

![[Pasted image 20261102152037.png]]


الinline فيها مشكلة انها compiler dependent 

الconstexpr انا هنا بجبر الcompiler يعملها text replacement 

في الc++ فكك من ال#define واستخدم الconstexpr

في الc++11 كان بيقلك لازم الfunction اللي constexpr لازم تكون سطر واحد دلوقت عادي تكتب كذا سطر عادي 

وبيجبرك تخلي الvariable جوه الconstexpr تكون constant value 

ال `constexpr` مش بتجبر كل الـ variables اللي جوه الـ function إنها تكون constant.

هي بتخلي الـ function ممكن تتنفذ وقت الـ Compile Time لو الشروط متحققة.

```c
int x;
cin >> x;

constexpr int y = x; // Error
```

إن لما تستخدم `constexpr` مع متغير، إنت بتجبر الـ variable إن قيمته تكون معروفة وثابتة وقت الـ Compile Time، يعني قبل ما البرنامج يبدأ يشتغل.

- `const`: بتمنعك تغيّر قيمة المتغير بعد ما يتحدد، حتى لو اتحددت وقت الـ Runtime.
    
- `constexpr`: بتمنع تغيير القيمة، وكمان بتشترط إن القيمة تكون قابلة للحساب وقت الـ Compile Time.


```c
constexpr int square(int x) {
    int result = x * x;
    return result;
}

int main() {
    constexpr int a = square(5);
}
```
![[Pasted image 20261102153247.png]]

```c
constexpr int square(int x) {
    return x * x;
}

int main() {
    int n;
    cin >> n;

    int a = square(n);           // ✅ صح
    constexpr int b = square(n); // ❌ Error
}
```


![[Pasted image 20261102153513.png]]

![[Pasted image 20261102153529.png]]

```c
constexpr int sum(int x, int y) {
    return x + y;
}

int main() {
    int a = 5;
    constexpr int b = sum(a, 10); // ❌ Error
}
```

![[Pasted image 20261102153658.png]]

![[Pasted image 20261102153717.png]]

![[Pasted image 20261102153749.png]]

```c++
constexpr int multiply(int x) {
    return x * 2;
}

int main() {
    const int a = 5;
    constexpr int b = multiply(a); // ✅ صح
}
```


![[Pasted image 20261102153856.png]]


![[Pasted image 20261102153932.png]]

```c++

constexpr int add(int x) {
    return x + 10;
}

int main() {
    int a = 5;
    const int b = add(a); // ✅ صح
}
```

![[Pasted image 20261102154054.png]]

```c++
constexpr int square(int x) {
    return x * x;
}

int main() {
    int a = 10;
    constexpr int b = 5;

    int x = square(a);           // ✅
    const int y = square(a);     // ✅
    constexpr int z = square(b); // ✅
}
```

![[Pasted image 20261102154255.png]]

![[Pasted image 20261102154309.png]]

الـ Function هتفضل `constexpr function`، لكن مش شرط تتنفذ وقت الـ Compile Time.

```c++
constexpr int square(int x) {
    return x * x;
}

int main() {
    int a = 5;

    int x = square(a);           // ✅ Runtime ممكن
    int y = square(5);           // ✅ Compile Time ممكن
    constexpr int z = square(5); // ✅ Compile Time لازم
}
```

![[Pasted image 20261102154511.png]]


![[Pasted image 20261102154650.png]]

![[Pasted image 20261102154745.png]]


## 5-Variable Initialization
![[Pasted image 20261102154948.png]]

![[Pasted image 20261102155258.png]]

==The GCC flag that turns all warnings into errors is== **`-Werror`**. 

بس دي مشكلة الlinux بالذات مليان warning انا عايز اضرب warning على سطر معين 

![[Pasted image 20261102155445.png]]

هنا مفيش warning 


![[Pasted image 20261102155612.png]]

![[Pasted image 20261102160943.png]]

![[Pasted image 20261102161034.png]]

هنا هيشتغل عادي 

في الassembly كلهم شبه بعض الفكرة بس في اظهار الerror وال warning 


## 6-C++ & C


![[Pasted image 20261102161503.png]]

![[Pasted image 20261102163721.png]]

compile c 

![[Pasted image 20261102163905.png]]

## 7-Class Implementation

![[Pasted image 20261102164310.png]]


![[Pasted image 20261102165354.png]]

جوه الclass عادي تعمل كده 

![[Pasted image 20261102165519.png]]

انا عايز اخلي الconst دي مش ثابته مع كل object عايز اشوف حل تكون ثابته مع الobject الواحد لكن مش ثابته مع كل الobjects 

![[Pasted image 20261102170038.png]]

في الصورة مكتوب the behavior will act wrong 

![[Pasted image 20261102170147.png]]

قصده هنا ب with limitation الشخص اللي كتب الctor هو اداك صلاحيات تكتب على ايه بالظبط 

![[Pasted image 20261102170314.png]]

اول ما تعمل الparametrize هيحذف الdefault 

![[Pasted image 20261102183027.png]]

نحل المشكلة دي ازاي ؟

عايزين الconstructor هو بس اللي يعرف يغير الconst 

هنحتاج initialization list 

![[Pasted image 20261102183436.png]]

هتتكتب ك instruction عادي بس الcompiler هيعدي الcase دي بس 

انا بعمل call لل constructor مره وحده بس في الcreation بتاع الobject


![[Pasted image 20261102184447.png]]   

تعمل كده عادي 

![[Pasted image 20261102184639.png]]     

بس كده احسن 

![[Pasted image 20261102184727.png]]

ال5 اللي فوق كده ملهاش اي لازمة 

الطريقه دي اسمها member initialization انت بتعمل initialize ل member جوه الclass 

![[Pasted image 20261102184925.png]]   
تعمل كده عادي برضوا بس لازم يكون طبعا member موجود فوق 

![[Pasted image 20261102185031.png]]

![[Pasted image 20261102185222.png]]

![[Pasted image 20261102185317.png]]

بس انا هنا بكتب في الspeedLimit مره وحده بس 
