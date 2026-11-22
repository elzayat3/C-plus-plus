
---


## 1-Function object 

![[Pasted image 20261121221337.png]]

![[Pasted image 20261121221424.png]]

الfunctor هيا function بعمل ليها call من object 

الx في الصوره فوق شمال مجهوله يا اما هتكون global او هتكون RV 

في اليمين هعمل الX بال ctor 

مش هينفع اعمله static لانه لازم يكون عندي object بيقولوا الC++ الجديد بيعدي الحاجة اللي شبه كده 

عايز الfunction تكون شايله حاجات كلها جواها 

![[Pasted image 20261121222411.png]]

الاحسن تعمل الfunctor علشان بتسهل عليك الامور 


![[Pasted image 20261121222747.png]]


الfor each هنا بديها condition تنفذه على كل عنصر 

![[Pasted image 20261121224128.png]]

![[Pasted image 20261121224153.png]]

![[Pasted image 20261121224245.png]]

![[Pasted image 20261121224324.png]]

![[Pasted image 20261121224408.png]]

طيب مع الfunctor

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Print {
public:
    void operator()(int x) const {
        cout << x << " ";
    }
};

int main() {
    vector<int> nums = {10, 20, 30};

    Print p;

    p(100);  // Object بيتنادى كأنه Function

    cout << "\n";

    for_each(nums.begin(), nums.end(), p);
}
```

![[Pasted image 20261121224510.png]]


![[Pasted image 20261121224631.png]]

![[Pasted image 20261121224712.png]]

![[Pasted image 20261121224726.png]]


![[Pasted image 20261121225057.png]]


![[Pasted image 20261121224933.png]]

![[Pasted image 20261121225247.png]]

![[Pasted image 20261121225529.png]]

![[Pasted image 20261121225551.png]]

لاحظ إن `10` و`12` متفحصوش أصلًا؛ لأن أول `true` كانت عند `8`.

![[Pasted image 20261121225634.png]]

![[Pasted image 20261121225728.png]]

![[Pasted image 20261121225805.png]]

![[Pasted image 20261121225858.png]]

![[Pasted image 20261121225909.png]]

![[Pasted image 20261121225921.png]]

![[Pasted image 20261121225937.png]]

## 2-Lambda

![[Pasted image 20261121230326.png]]


lambda is a function object on the fly 

لما بتستخدم lambda انا كاني بعمل class اسمه lambda 

بيعرف الreturn type لوحده لو انت مكتبتش 

![[Pasted image 20261121230743.png]]

اللي تحت شمال ده عبارة عن blue print مش بعمل الobject غير لما اعمل call 

![[Pasted image 20261121231051.png]]

![[Pasted image 20261121231103.png]]

![[Pasted image 20261121231116.png]]

![[Pasted image 20261121231135.png]]

![[Pasted image 20261121231247.png]]


![[Pasted image 20261122101828.png]]

ال= دي اللي بتتحط بين ال "[]" دي بيكون pass by value وهتروح ك const لو انا مش كاتب mutable

لو عملت & دي هتكون pass by reference وهعرف اعدل فيه عادي جدا 

ال "[]" اللي بتكون جوه دي اسمها capture 

we can capture multiple variable


```c++
auto myLambda = [a, &b]()
```

