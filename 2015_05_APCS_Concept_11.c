/*

定義 a[n] 為一陣列(array)，陣列元素的
指標為0 至 n-1。若要將陣列中 a[0]的元
素移到 a[n-1]，右側程式片段空白處該填
入何運算式？

(A) n+1
(B) n
(C) n-1
(D) n-2

*/

int i, hold, n;
…
for (i=0; i<= ; i=i+1) {
  hold = a[i];
  a[i] = a[i+1];
  a[i+1] = hold;
}
