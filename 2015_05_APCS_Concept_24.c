/*

右側g(4)函式呼叫執行後，回傳值為何？
(A) 6
(B) 11
(C) 13
(D) 14

*/

int f (int n) {
    if (n > 3) {
      return 1;
    } else if (n == 2) {
      return (3 + f(n+1));
    } else {
      return (1 + f(n+1));
    }
}

int g(int n) {
    int j = 0;
    for (int i=1; i<=n-1; i=i+1) {
        j = j + f(i);
    }
    return j;
}
