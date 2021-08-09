/*

給定右側 G ()(), K() 兩函式，執行 G (
後 所 回傳的值 為何

(A) 5
(B) 12
(C) 14
(D) 15

*/


int K(int a[], int n){
    if (n >= 0){
      return (K(a, n-1) + a[n]);
    else
      return 0;
    }
}

int G(int n){
      int a[]= {5,4,3,2,1};
      return K(a, n);
}
