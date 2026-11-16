
---


## 1-Intro in inheritance 

![[Pasted image 20261115104614.png]]


![[Pasted image 20261115105531.png]]

الchild بياخد من الbase والspace بتاعه عادي ويزود عليه 


![[Pasted image 20261115110155.png]]


![[Pasted image 20261115110219.png]]

![[Pasted image 20261115110249.png]]

![[Pasted image 20261115110349.png]]


## 2-Virtual function 


![[Pasted image 20261116142908.png]]

الabstraction class هو class مش هعرف اعمل منه object 

![[Pasted image 20261116152717.png]]

![[Pasted image 20261116152639.png]]

![[Pasted image 20261116152758.png]]


![[Pasted image 20261116152820.png]]


![[Pasted image 20261116152858.png]]

![[Pasted image 20261116152924.png]]

ايه الفرق بين الoverload & override في الحالة بتاعتنا 

![[Pasted image 20261116153152.png]]

![[Pasted image 20261116153224.png]]

![[Pasted image 20261116153245.png]]

![[Pasted image 20261116153258.png]]


![[Pasted image 20261116153314.png]]


![[Pasted image 20261116153351.png]]


![[Pasted image 20261116153416.png]]


![[Pasted image 20261116153440.png]]

![[Pasted image 20261116153601.png]]

خد بالك في الabstraction class أوعى انك تعمل delete لل ctor علشان وانا بعمل الchild لازم اعمل call لل ctor بتاع الbase 

![[Pasted image 20261116153902.png]]

![[Pasted image 20261116153954.png]]

![[Pasted image 20261116154013.png]]


## 3-Inherite specifier 

![[WhatsApp Image 2026-11-16 at 3.41.33 PM.jpeg]]


![[WhatsApp Image 2026-11-05 at 3.13.57 PM.jpeg]]

النوع هنا بيأثر على اللي هيجي بعدي 

![[WhatsApp Image 2026-11-05 at 3.13.21 PM.jpeg]]

![[WhatsApp Image 2026-11-05 at 3.29.23 PM.jpeg]]

![[WhatsApp Image 2026-11-05 at 3.42.18 PM.jpeg]]

![[Pasted image 20261116154605.png]]

![[WhatsApp Image 2026-11-05 at 12.25.47 PM.jpeg]]

في الctor بنعمل الbase الاول في الdtor بنعمل الchild الاول 

## 4-Virtual table 

![[Pasted image 20261116162507.png]]


الcar عندي هو abstraction طيب عايز اوصل للحاجات بتاعته اتعامل ازاي ؟ 

هستخدم الpointer انا مش عايز اوصل لfunction جوه Toyota 

انا عايز اديك car لكن مش عايز اوصل لaccess لل fun اللي اسمها OBD 

الpointer بتاع car مش هيعرف يبص غير على الحاجات بتاعت car فقط 

عملت memory الsize بتاعها Toyota وخليتك تعمل access على car فقط 

هقدر اخلي الصغير يبص على الكبير دي حاجه اسمها upcasting 

![[Pasted image 20261116163023.png]]


الvirtual بتخلي الcompiler ياخد القرار في الrun time مش في الcompilation time 

لما بعمل virtual لاي function بيعمل حاجه اسمها virtual pointer 

الvirtual pointer ده بيشاور على حاجه اسمها virtual table حاجه شبه الvector table 

كل class له الvirtual table الخاص بيه 

وكل object له الvirtual pointer الخاص بيه علشان كده لما بنادي الfun بتكون تبع الobject اللي اتعمل 

اول حاجه هيحطها في الstack هيا الvirtual function


![[Pasted image 20261116165039.png]]

