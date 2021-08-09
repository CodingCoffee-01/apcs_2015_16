/*

請問以a(13,15)呼叫右側a()函式，函式執
行完後其回傳值為何？

(A) 90
(B) 103
(C) 93
(D) 60

*/

int a(int n, int m) {
  if (n < 10) {
    if (m < 10) {
      return n + m ;
    }else {
      return a(n, m-2) + m ;
    }
  }else {
    return a(n-1, m) + n ;
  }
}
