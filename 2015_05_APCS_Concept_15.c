/*

若以f(22)呼叫右側f()函式，總共會印出多少數
字？
(A) 16
(B) 22
(C) 11
(D) 15

*/

void f(int n) {
printf ("%d\n", n);
while (n != 1) {
    if ((n%2)==1) {
      n = 3*n + 1;
    } else {
      n = n / 2;
    }
    printf ("%d\n", n);
  }
}
