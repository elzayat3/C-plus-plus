
---

## 1-Revision 

```c++

car *obj;---> no constructor here 

car *obj2=new car(); --> call ctor here 

```

![[Pasted image 20261105095939.png]]

![[Pasted image 20261105100047.png]]

![[Pasted image 20261105100310.png]]

```c++

car obj=car(5);--> two ctor here one for RV one for LV 
```

المنطق هنا انه يعمل CALL للmove constructor علشان ده RV

## 2-Move constructor 

الـ Move Constructor بيشتغل لما بنكون بننشئ Object جديد من Object تاني، والـ Object التاني يكون Rvalue أو يقدر الـ Compiler يعامله كـ Rvalue في حالات معينة.

![[Pasted image 20261107154038.png]]


![[Pasted image 20261107154155.png]]


انا بقدر اعمل free للnullptr زي ما انا عايز  مش هنحط const للcar&&  علشان انا بغير اصلا في الobj 

![[Pasted image 20261107154407.png]]

![[Pasted image 20261107154612.png]]

انا بدي object لscope تاني يتعامل معاه وانا مليش علاقه بيه تاني خلاص 


![[Pasted image 20261107155208.png]]


المشكلة هنا إنك بتعمل Return by Reference لـ Local Object، وده بيؤدي لمشكلة اسمها Dangling Reference.

![[Pasted image 20261107155306.png]]

![[Pasted image 20261107155407.png]]


![[Pasted image 20261107155547.png]]

الfun هنا بترجع الcar مش car&

لو عندك Move Constructor تقدر ترجع الـ Local Object من الـ function بأمان، بس لازم ترجع By Value مش By Reference.

![[Pasted image 20261107160343.png]]

![[Pasted image 20261107160416.png]]

![[Pasted image 20261107161117.png]]


![[Pasted image 20261107161106.png]]


NRVO (Named Return Value Optimization)

![[Pasted image 20261107161152.png]]



### الحالات اللي بعمل فيها call move constructor

![[Pasted image 20261107161335.png]]

![[Pasted image 20261107161350.png]]

![[Pasted image 20261107161415.png]]

![[Pasted image 20261107161435.png]]

في C++17 وما بعده، مش بيحصل Move إضافي بين نتيجة `fun()` و`c`.

![[Pasted image 20261107161539.png]]


![[Pasted image 20261107161610.png]]

![[Pasted image 20261107161632.png]]

![[Pasted image 20261107161710.png]]


![[Pasted image 20261107162136.png]]

![[Pasted image 20261107162228.png]]

![[Pasted image 20261107162302.png]]

![[Pasted image 20261107162539.png]]

![[Pasted image 20261107170951.png]]
![[Pasted image 20261107171006.png]]


![[Pasted image 20261107171026.png]]


![[Pasted image 20261108000702.png]]
## 3-Specifiers

![[Pasted image 20261107163112.png]]

![[Pasted image 20261107165630.png]]


![[Pasted image 20261108001045.png]]

![[Pasted image 20261108001217.png]]

![[Pasted image 20261108001849.png]]

![[Pasted image 20261108002706.png]]

![[Pasted image 20261108002718.png]]

مش بعدل في ال members بتاعت الclass جوه الfunction دي 

![[Pasted image 20261108005219.png]]

![[Pasted image 20261108005257.png]]

اللي في الclass بتكون declaration  ومش لازم اعمل object علشان ينزل ومش هينفع اديله قيمة init في الclass لانه علشان ياخد القيمة دي لازم الclass يتعمل طيب افرض اللي بيكتب معملش object مين هيديه قيمة init ؟ علشان كده لازم يتعمل بره الclass اللي في الclass ده dec بس 

فكر فيها انه الstatic ده بيتعمل قبل الfunctions بتاعت الclass اصلا

![[Pasted image 20261108101604.png]]

مش هعرف اوصل في الstatic function للlocal variable بتاعت الclass لانه الfun كده ولا كده هتنزل في الmemory طيب افرض انا معملتش class ازاي هغير في الlocal 


![[Pasted image 20261108101805.png]]

![[Pasted image 20261108102222.png]]


لازم تعمل السطر رقم 17 ولا هيطلع error 

![[Pasted image 20261108102535.png]]

الctor احطه في الprivate واخلي function static تناديه عادي

![[Pasted image 20261108103214.png]]

ده كده حاجه امسها singleton لو شلت static من الfunction بتاعت create في الreturn هحتاج اعمل copy ctor ده كده class بعمل منه object واحد  


خد بالك انت لو نديت الstatic دي وحطيتها في Local ورحت بره الscope هتكون مشكلة لازم اتاكد انه الobject اللي بعمله access لسه موجود في الmemory 