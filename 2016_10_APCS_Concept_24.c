/*

右側 G 為遞迴 函式 G(3, 7) 執行後回
傳值為何？
(A) 128
(B) 2187
(C) 6561
(D) 1024

*/

int G (int a, int x){
    if (x == 0)
      return 1;
    else
      return (a * G (a, x-1));
}
