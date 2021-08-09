/*

右側程式執行後輸出 為何？
(A) 0
(B) 10
(C) 25
(D) 50

*/

int G (int B) {
    B = B * B;
    return B;
}

int main () {
    int A=0, m=5;
    A = G(m);
    if (m < 10)
      A = G(m) + A;
    else
      A = G(m);

    printf("%d \n", A);
    return 0;
}
