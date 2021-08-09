/*

若 n 為正整數， 右側程式 三個迴圈執行
完畢後 a 值將為何

(A) n(n+1)/2
(B) n3/2
(C) n(n-1)/2
(D) n2(n+1)/2

*/

int a=0 , n;
for (int i=1; i<=n; i=i+1)
  for ( int j=i; j<=n; j =j+1)
    for ( int k=1; k<=n; k =k+1)
        a = a + 1;
