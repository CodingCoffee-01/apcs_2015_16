/*

給定右側 G() 函式，執行 G(1) 後 所輸出 的值 為何
(A) 1 2 3
(B) 1 2 3 2 1
(C) 1 2 3 3 2 1
(D) 以上皆非

*/

void G (int a){
  printf ("%d ",a);
  if (a >= 3)
    return;
  else
    G(a+1);
  printf ("%d ",a);
}
