/*

給定一陣列a[10]={ 1, 3, 9, 2, 5,
8, 4, 9, 6, 7 }，i.e., a[0]=1,a[1]=3, …,
a[8]=6, a[9]=7，以f(a, 10)呼叫執行右側
函式後，回傳值為何？

(A) 1
(B) 2
(C) 7
(D) 9

*/

int f (int a[], int n) {
  int index = 0;
  for (int i=1; i<=n-1; i=i+1) {
    if (a[i] >= a[index]) {
        index = i;
      }
  }
  return index;
}
