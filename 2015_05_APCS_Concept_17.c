/*

右側程式片段主要功能為：輸入
六個整數，檢測並印出最後一個
數字是否為六個數字中最小的
值。然而，這個程式是錯誤的。
請問以下哪一組測試資料可以測
試出程式有誤？

(A) 11 12 13 14 15 3
(B) 11 12 13 14 25 20
(C) 23 15 18 20 11 12
(D) 18 17 19 24 15 16

*/

#define TRUE 1
#define FALSE 0
int d[6], val, allBig;
…
    for (int i=1; i<=5; i=i+1) {
        scanf ("%d", &d[i]);
    }
    scanf ("%d", &val);
    allBig = TRUE;
    for (int i=1; i<=5; i=i+1) {
        if (d[i] > val) {
            allBig = TRUE;
        } else {
            allBig = FALSE;
        }
    }

    if (allBig == TRUE) {
        printf ("%d is the smallest.\n", val);
    } else {
        printf ("%d is not the smallest.\n", val);
    }
