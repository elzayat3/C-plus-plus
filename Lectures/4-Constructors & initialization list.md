
---


## Lecture map 

1-[[#1-Revision]]
2-[[#2-Constructors]]
3-[[#3-initialization list]]
4-[[#4-Deconstructor]]
5-[[#5-Rules of C++]]
6-[[#6-Member Initialization]]
7-[[#7-Return multiple value]]
8-[[#8-Special Constructor Case]]

---


## 1-Revision

![[Pasted image 20261104140504.png]]

ال rule of thumb ليها علاقة بالembedded Linux او اي حاجة فيها OS لانه اصلا مفيش HEAP في الembedded العادي 

![[Pasted image 20261104141108.png]]

![[Pasted image 20261104141226.png]]

الطبيعي انه الreference  يكون في scope تاني مش نفس الscope لانه ملوش فايدة 


![[Pasted image 20261104141522.png]]

![[Pasted image 20261104141724.png]]

ال8 byte دي تدل على الreference لانه زي ما قلنا في الاول والاخر هو pointer وال4byte تدل على الtemp متغير عادي حجز 4byte

الهدف من كل ده انه نحسن الperformance 

## 2-Constructors

![[Pasted image 20261104142544.png]]

![[Pasted image 20261104142613.png]]

كده هيضرب error


![[Pasted image 20261104142720.png]]

دي كده مشكلة كبيرة الobject اتشال من الstack خلاص لكن لسه الm_name موجود في الheap 

![[Pasted image 20261104142858.png]]


![[Pasted image 20261104142936.png]]

![[Pasted image 20261104143229.png]]

لانه اتنين pointer بيشاوروا على نفس الحته في الheap 
![[Pasted image 20261104143411.png]]

دي طريقة عمل الcopy constructor 

![[Pasted image 20261104143505.png]]

كده حصلت مشكلة برضوا طيب ايه اللي حصل ؟

حصلت هنا مشكلة اسمها double delete 

![[Pasted image 20261104143600.png]]

طيب ليه ممنوعه حاجة شبه كده ؟

علشان ممكن يكون فيه data جديدة اتحطت ل pointer تاني مكان الحته اللي انا عملت ليها delete اول مره فلو رحت لعمل delete تاني لنفس الaddress انا كده بمسح حته حد تاني حجز فيها بعد ما انا عملت ليها delete التاني فاكر انه لسه الmemory دي بتاعته 

اللي مكتوب تحت ده data from another thread 

ازاي امنع الdouble delete ؟

هدور على address أعمله double delete اكتر من مرة براحتي والaddress ده هو الNULL

![[Pasted image 20261104144210.png]]

![[Pasted image 20261104144337.png]]

![[Pasted image 20261104144546.png]]

ده كدة عبارة عن R-Value والcopy بياخد L-Value

اللي انا عامله ده object on the fly 

الcopy الdefault للاسف بيعمل shallow احنا عايزين نعمل واحد بيعمل الdeep 

![[Pasted image 20261104145105.png]]

هو بيروح يشوف ايه الconstructor اللي عندك اللي بيقبل الinput ده ويعمله call 

![[Pasted image 20261104145500.png]]

ده الصح حط الnull 


![[Pasted image 20261104154621.png]]

في الحال دي حول من R-value الى L-value هو راح عمل object وحط فيه الR-Value وخد الobject ده اللي هو L-value دلوقت وحطه في الobject بتاعنا 

![[Pasted image 20261104154713.png]] 
بس كده error 

![[Pasted image 20261104155133.png]]

كده هتشتغل سواء انت L-Value او R

![[Pasted image 20261104155934.png]]

![[Pasted image 20261104160002.png]]

![[Pasted image 20261104160330.png]]

بس هنا اشتغل عادي 

![[Pasted image 20261104160543.png]]

![[Pasted image 20261104160651.png]]

![[Pasted image 20261104161039.png]]

![[Pasted image 20261104161051.png]]

حرفيا زي بعض 

## 3-initialization list


اي member في الclass اعمله  ب initializer list


![[Pasted image 20261104161614.png]]

![[Pasted image 20261104161806.png]]

كده مش هينادي اي constructor خد بالك وانا رايح الfunction 

![[Pasted image 20261104162026.png]]

اعملهم في الinit list  بالترتيب بتاعهم في الclass

![[Pasted image 20261104162440.png]]

اعملها كده 

## 4-Deconstructor 

![[Pasted image 20261104162949.png]]


![[Pasted image 20261104163034.png]]

![[Pasted image 20261104163233.png]]


الobject عمره ما هيكون ليه destructor لو هو global 

## 5-Rules of C++


![[Pasted image 20261104163723.png]]


![[Pasted image 20261104163823.png]]

![[Pasted image 20261104163924.png]]


## 6-Member Initialization

![[Pasted image 20261104164316.png]]

انا عايز اجبر اللي بكتب الكود انه ينادي بالطريقة دي 

![[Pasted image 20261104164419.png]]


![[Pasted image 20261104164503.png]]

![[Pasted image 20261104164604.png]]

![[Pasted image 20261104164659.png]]

![[Pasted image 20261104164744.png]]

الvalue هنا عبارة عن list مش قيمة وحدة بس 
![[Pasted image 20261104164827.png]]

كده هياخد size اكبر علشان تبقى عارف بس 

![[Pasted image 20261105085406.png]]

![[Pasted image 20261104164929.png]]

بس اخدت حماية اكتر 

لو عايز اخش على CPP reference C بعمل :

```
CTRL + SHIFT + A
```


## 7-Return multiple value


![[Pasted image 20261104171341.png]]

![[Pasted image 20261104171510.png]]

![[Pasted image 20261104171633.png]]


![[Pasted image 20261105085107.png]]

![[Pasted image 20261105085140.png]]

## 8-Special Constructor Case


![[Pasted image 20261105090033.png]]

ده عمل call ل parametrize constructor عادي ليه معملش call ل copy ؟

![[Pasted image 20261105090148.png]]

![[Pasted image 20261105090448.png]]


دول بيتعملوا default لما بعمل class بلاقيهم موجودين على طول 

في المثال بتاعنا هينادي على الmove 

بس علشان الcompiler بيعمل optimization مش هينادي على الmove 

![[Pasted image 20261105090956.png]]

![[Pasted image 20261105091012.png]]


![[Pasted image 20261105091044.png]]


![[Pasted image 20261105091638.png]]

![[Pasted image 20261105092253.png]]

انا هنا مش عايز انادي الdefault للname عايز انادي على الparametrize وخلاص 

![[Pasted image 20261105092606.png]]

![[Pasted image 20261105092642.png]]

![[Pasted image 20261105092944.png]]

