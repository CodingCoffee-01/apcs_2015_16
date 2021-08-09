/*

右側程式片段中 執行後若要印出下
列圖案，
，(a) 的條件判斷式該如何
設定？
******
 ****
  **

(A) k > 2
(B) k > 1
(C) k > 0
(D) k > 1

*/

for(int i=0; i <=3; i=i+1){
    for(int j=0; j<i; j=j+1)
        printf(" ");
        for (int k=6-2*i;__(a)__ ; k=k-1)
            printf("*");
        printf(" \n");
}
