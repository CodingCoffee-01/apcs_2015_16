/*右側 switch 敘述程式碼 可以如何 以 if else
改寫？
(A) if (x==10) y='a';
if (x==20 || x==30) y = 'b';
    y ='c';
(B) if (x==10) y ='a';
else if (x==20 || x==30) y ='b';
else y = 'c';
(C) if (x==10) y ='a';
if (x >=20 && x <=30) y ='b';
y ='c';
(D) if (x==10) y ='a';
else if(x >= 20 && x <=30) y ='b';
else y = 'c';

*/

switch (x){
case 10: y ='a'; break;
case 20:
case 30: y = 'b'; break;
default: y = 'c'; break;
}
