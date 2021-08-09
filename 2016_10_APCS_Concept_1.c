/*

右側 F 函式 執行 後，輸出
為何？
(A) 1 2
(B) 1 3
(C) 3 2
(D) 3 3

*/

void F( ){
  char t, item[] = {'2', '8', '3', '1', '9'};
  int a, b, c, count = 5;
  for (a=0; a< count-1; a=a+1) {
  c = a;
  t = item[a];
  for (b=a+1; b < count; b=b+1) {
    if (item[b] < t) {
        c = b;
        t = item[b];
        if ((a==2) && (b==3))
          printf ("t = %c , c = %d \n ", t, c);
        }
      }
    }
}
