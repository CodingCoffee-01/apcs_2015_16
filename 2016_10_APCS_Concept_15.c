/*

右 側程式片段執行 過程的輸出
為何？
(A) 44
(B) 52
(C) 54
(D) 63

*/

int i,sum, arr[10];
for(int i=0; i<10; i=i+1)
    arr[i] = i;

sum = 0;
for(int i=1; i<9; i=i+1)
    sum = sum arr[i 1] + arr[i] + arr[i+1];
printf("%d", sum);
