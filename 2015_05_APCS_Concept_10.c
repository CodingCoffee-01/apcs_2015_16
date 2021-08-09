/*

給定右側g() 函式，g(13) 回傳值為何？
(A) 16
(B) 18
(C) 19
(D) 22

*/

int g(int a) {
  if (a > 1) {
    return g(a - 2) + 3;
  }
  return a;
}
