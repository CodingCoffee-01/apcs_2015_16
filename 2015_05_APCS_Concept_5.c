/*
函數f 定義如下，如果呼叫f(1000)，指令
sum=sum+i 被執行的次數最接近下列何者？
(A) 1000
(B) 3000
(C) 5000
(D) 10000
*/

int f (int n) {
  int sum=0;
  if (n<2) {
    return 0;
  }
  for (int i=1; i<=n; i=i+1) {
    sum = sum + i;
  }
  sum = sum + f(2*n/3);
  return sum;
}
