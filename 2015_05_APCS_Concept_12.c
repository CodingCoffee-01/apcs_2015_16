/*

給定右側函式 f1() 及 f2()。f1(1)運算過程
中，以下敘述何者為錯？
(A) 印出的數字最大的是4
(B) f1 一共被呼叫二次
(C) f2 一共被呼叫三次
(D) 數字2 被印出兩次

*/

void f1 (int m) {
  if (m > 3) {
    printf ("%d\n", m);
    return;
  }else {
    printf ("%d\n", m);
    f2(m+2);
    printf ("%d\n", m);
  }
}

void f2 (int n) {
  if (n > 3) {
    printf ("%d\n", n);
    return;
  } else {
    printf ("%d\n", n);
    f1(n-1);
    printf ("%d\n", n);
  }
}
