
---


## Lecture Map

1-[[#1-OOP (Object oriented programming)]]
2-[[#2-Object]]

---


## 1-OOP (Object oriented programming)

![[Pasted image 20261028143057.png]]


الAbstraction انا مش مهتم الحاجة دي بتتعمل ازاي انا عايز استخدمها وخلاص هيا موجودة من ايام الc لما كنت بعمل function 

ال Encapsulation زي الheader files مثلا الfunction مع الattribute في نفس الfile 

احنا عندنا حاجتين مهمة الmethod و الproporties الmethod هيا الشخص اللي هيعمل الحاجة الproporties هيا الtools اللي معاه 

الUART_SEND(int data) هيا الmethod والdata هيا الproperty 

افرض الUART ده فيه منه نوعين كده الكود هيتكرر الLOGIC بيتكرر 

المشكله دي بتتحل بال polymorphism هنعرف بتتعمل ازاي بعدين بدل ما يكون عندي اتنين function هيكون عندي function وحده 

الpolymorphism بتتقسم ل :

1-static polymorphism 

2-Dynamic polymorphism (Inheritance)

![[Pasted image 20261028150203.png]]

![[Pasted image 20261028151226.png]]

![[Pasted image 20261028151319.png]]

![[Pasted image 20261028152050.png]]

![[Pasted image 20261028152357.png]]

ال Composition يعني إن Class بيحتوي على Object من Class تاني، والعلاقة بينهم غالبًا بتكون Has-A.

الجزء اليمين ده الInheritance 

![[Pasted image 20261028161915.png]]


الC++ Modern بعرف انه فيه bug خلاص ال compiler time 

## 2-Object

![[Pasted image 20261028163633.png]]

![[Pasted image 20261028164305.png]]




مينفعش اكتب function جوه struct في ال c

الfunction دي مش هتنزل غير لو انا عمل create على الاقل one object من الclass 

هنا الcompiler هو اللي هيشيلها لو انت معملتش object 

انا مش بعرف اوصل للaddress بتاع الfunction اللي جوه الclass

النقطه رقم 2 هيا more compilation process

![[Pasted image 20261029133450.png]]

```c
extern "C" {
    int add(int a, int b) {
        return a + b;
    }
}
```

دي طريقة ترجمة حته معينه في الcode على انها c

![[Pasted image 20261029134530.png]]


لو عايز function جوه class تنزل في الsymbol table then flash لازم اعملها call انه تعمل object مش هيكون كفايه وده بيعتمد برضوا على اعدادات الcompiler 

انا ممكن اعمل pointer من الtype بتاع الclass الsize بتاعه هو size الclass 

الطريقة انه اخلي pointer to class ينادي الfunction ده كده غلط 

لو عملت ptr->x=10 انت كده بتعمل Access ل wild pointer 


![[Pasted image 20261101125122.png]]

الoutput بتاع السطور 42 و 43 هيكون 13 عادي جدا 

الclass زي الstruct في الmemory بالظبط 

![[Pasted image 20261101125342.png]]

افتكر الKeyword دي 