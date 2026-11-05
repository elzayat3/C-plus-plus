
---

## 1-Revision


![[Pasted image 20261102200551.png]]

ابعد عن الطريقة رقم 2 علشان هيا شبه الfunction  فبلاش تعملها 

![[Pasted image 20261102201122.png]]

![[Pasted image 20261102201243.png]]

![[Pasted image 20261102201300.png]]

## 2-Deep & Shallow Copy 


![[Pasted image 20261102202552.png]]

الmalloc بتستهلك CPU load لانها function بتتنفذ عادي 

![[Pasted image 20261102202835.png]]


في الshallow copy عندي اكتر من واحد بيشاور على نفس المكان في الmemory لو واحد منهم عمل free هتكون كارثة الباقي كله هيكون dangled pointer المشكلة في الshallow دي اسمها Data access لازم اروح احط كل الpointers دي ب NULL

![[Pasted image 20261102203524.png]]


الspace في الshallow برضوا  'O(1)' 


![[Pasted image 20261102204427.png]]


اللي على الشمال دي reentrant function انا مش محتاج احمي الscope بتاعها لانها بتعتمد على نفسها مفيش اي shared resources بين functions تانيه بمعنى مش بتعتمد على data بره الscope بتاعها 

اللي على اليمين non reentrant function دي بتعتمد على data بره الscope بتاعها 

خد بالك مش معنى انها بتعمل read على طول انها reentrant لانه ممكن اروح اعمل read في وقت معين وحد يقطعني ويغير القيمة اللي كنت هعمل لها read 


pass by value --> deep copy 

pass by reference --> shallow copy 

![[Pasted image 20261102205359.png]]

الnew والdelete دي عبارة عن keyword هتكون اسرع بكتير وممكن اناديها في الglobal عادي الdelete طبعا مش هينفع استخدمها في الglobal لانه ملهاش لازمه اعمله وامسحه في الglobal ايه الفايدة  

## 3-Reference 

![[Pasted image 20261103100910.png]]

الref بقى كانه alias للvar 

```c++
int &ref; --> error 
```

الref ده هو pointer عادي بياخد size في الmemory  بس لازم يكون initialized 

ده كده مش محتاج اعمل check انه هو NULL بس لازم اللي بيشاور عليه الref يكون exited وبيشاور على حاجة موجودة فعلا في الmemory 

اساس الref أنها تعمل الshallow copy وتتاكد انه الmemory موجودة 

الcompiler هو اللي هيعمل check ال ref دي موجودة في الmemory ولا لا

![[Pasted image 20261103102928.png]]

![[Pasted image 20261103102955.png]]

![[Pasted image 20261103103052.png]]

انت هنا مش هتعرف الref ده موجود فين في الmemory 


### Reference Rules

1-reference shall bind on address exist 

2-reference is similar to pointer is takes space 

3-function passed by reference doesn't require NULL checking

4- reference shall bind on the same type of the value 

5-you can not access the ref address (alias)


## 4-L & R value

![[Pasted image 20261103105924.png]]


الR value مش بتقدر تشيل value 

## 5-Double Reference 

![[Pasted image 20261103110446.png]]


دي بتدي قيمة للR-Value ال5 هتتعمل في الstack واخلي الint &&ref يشاور عليها الref كده هتبقى L Value 

```c++

fun(const int & ref) --> L & R value 
{
}
```

![[Pasted image 20261103111313.png]]

x-value --> exclusive value 

p-value --> pure value 


## 6-Polymorphism

![[Pasted image 20261104101051.png]]

![[Pasted image 20261104101608.png]]

لو عملت واحده بالdefault لازم كل اللي بعدها يكون default برضوا 

![[Pasted image 20261104101754.png]]


### 1-Rule of 0

![[Pasted image 20261104104548.png]]

عند رقم 1 ده copy وعند رقم 2 ده move 

الrule of  0 بتقلك طالما انت الmembers اللي عندك هتتعمل جوه الStack ومفيش pointers انت هتعمل rule of 0 دي ,وقتها انت مسموح ليك تعمل نوعين من الconstructor الdefault وال parameterize

![[Pasted image 20261104104944.png]]

لو عملت اللي عند رقم 3 هيروح يعمل اللي عند رقم 4

### 2- Rule of 3

![[Pasted image 20261104105029.png]]


اتنين pointer بيشاروا على نفس المكان في الheap 

![[Pasted image 20261104111248.png]]


دي كمان مشكلة لو عمل object من الclass local لما يرجع من الfunction هيمسح اللي في الstack لكن اللي في الheap ليه موجود متعملش ليها free 


#### Rules of 3

1-Destructor --> delete pointer 
بص عند رقم 1 

![[Pasted image 20261104111759.png]]

2-Copy constructor --> create new space in Heap 

```c++

car(car&ref) --> copy constructot for class car 
{
}
```

هو فيه copy معمول اصلا بس بيعمل shallow copy مش بيحجز مساحة جديدة في الheap 

3- copy assignment operator 

