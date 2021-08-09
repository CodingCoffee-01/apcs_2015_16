/*

右側為一個計算n 階層的函式，請問該如何
修改才會得到正確的結果？

(A) 第 2 行，改為 int fac = n;
(B) 第 3 行，改為if (n > 0) {
(C) 第 4 行，改為fac = n * fun(n+1);
(D) 第 4 行，改為fac = fac * fun(n-1);

*/

int fun (int n) {
 int fac = 1;
 if (n >= 0) {
    fac = n * fun(n - 1);
 }
 return fac;
}
