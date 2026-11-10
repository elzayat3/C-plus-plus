---

---

---

## 1-Recape

![[Pasted image 20261108111859.png]]


## 2-Operator Overload intro

![[Pasted image 20261108112220.png]]

في الC++ هو شايف الoperators عبارة عن functions 

![[Pasted image 20261108112354.png]]

الحقيقه دي شكلها كده 

![[Pasted image 20261108112416.png]] 
هيا دي بالظبط 

![[Pasted image 20261108112448.png]] 
او كده عادي 

الoperator بقت عبارة عن API وانا بعمل ليها Overload 

![[Pasted image 20261108112616.png]]

في ال C++ ده الImplementaion بتاع الoperator بتاعي 

![[Pasted image 20261108112816.png]] 
دي كلها الصح 

![[Pasted image 20261108112844.png]] 
يشغل الاتنين عادي 

![[Pasted image 20261108112929.png]]

الfriend هنا بتخليه يعرف يعمل access للprivate عادي كانها function مكتوبه كده الclass 

![[Pasted image 20261108113046.png]]

![[Pasted image 20261108113225.png]]

السطر رقم 38 هيضرب 

![[Pasted image 20261108113333.png]]

ده كده حله 

![[Pasted image 20261108113529.png]]

![[Pasted image 20261108113545.png]]

![[Pasted image 20261108113623.png]]

هينادي على الpara ctor عادي 

![[Pasted image 20261108114003.png]]

![[Pasted image 20261108114207.png]]

لو عملت كده مش هيشتغل 

![[Pasted image 20261108114354.png]]

![[Pasted image 20261108114445.png]]

![[Pasted image 20261108114525.png]]


![[Pasted image 20261108114704.png]]

![[Pasted image 20261108115413.png]]

![[Pasted image 20261108115427.png]]

![[Pasted image 20261108115442.png]]


![[Pasted image 20261108115103.png]]


![[Pasted image 20261108115115.png]]

![[Pasted image 20261108115129.png]]

![[Pasted image 20261108115223.png]]


![[Pasted image 20261108115623.png]]

عايز اعمل دي هنحلها ازاي ؟ 

الcout ده عبارة عن object موجود اصلا من نوع std::ostream

![[Pasted image 20261109134324.png]]

خد بالك هو مانع الcopy مع الcout 

حطينا هنا const علشان تاخد الRV برضوا 

![[Pasted image 20261109142545.png]]

دول هيشتغلوا عادي 

![[Pasted image 20261109142713.png]]

حاجة شبه دي اعملها ازاي ؟


![[Pasted image 20261109143233.png]]

المفروض تكون بشكل ده 

![[Pasted image 20261109143345.png]]

![[Pasted image 20261109143433.png]]

كده هتشتغل عادي زي الفل 

تعالا نعمل بقى الطريقة الصح 

![[Pasted image 20261109143912.png]]

عايز اعمل لدي اعملها ازاي ؟ 

![[Pasted image 20261109144101.png]]

![[Pasted image 20261109144405.png]]

لو عملت الطريقتين هيروح يبص على الclass بتاعه الاول عاملها ولا لا لو عاملها خلاص هيعمل call للاقرب 

![[Pasted image 20261109144651.png]]

![[Pasted image 20261109170113.png]]

لو عايز اعمل overload operator للnew هتكون كده 

![[Pasted image 20261109170828.png]]

![[Pasted image 20261109170855.png]]

لو عمل overflow هو مش هيعرف لازم تهندل الدنيا انت بقى 

دور وشوف ازاي هتعمل الdelete 

![[Pasted image 20261110091901.png]]


![[Pasted image 20261110092135.png]]

![[Pasted image 20261110092226.png]]

![[Pasted image 20261110092244.png]]

![[Pasted image 20261110092808.png]]



## 3-Literal overload

![[Pasted image 20261110093202.png]]

![[Pasted image 20261110093354.png]]


## 4-Copy & Move assignment operator


![[Pasted image 20261110093516.png]]

![[Pasted image 20261110094001.png]]

دي function عادي مش هينفع يعمل init list 

![[Pasted image 20261110094229.png]]

ناتج الجمع بيكون RV


![[Pasted image 20261110094512.png]]

![[Pasted image 20261110094621.png]]

![[Pasted image 20261110094738.png]]

الthis هيا عبارة عن pointer للclass اللي انت فيه 

![[Pasted image 20261110095029.png]]

![[Pasted image 20261110095142.png]]

الstr هتطلع ايه في الاخر 

مش هتعرف عموما متعملش كده 








