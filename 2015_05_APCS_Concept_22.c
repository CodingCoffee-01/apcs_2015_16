/*

右側f()函式執行後所回傳的值為何？
(A) 1023
(B) 1024
(C) 2047
(D) 2048

*/

int f() {
    int p = 2;
    while (p < 2000) {
        p = 2 * p;
    }
    return p;
}
void main() {
    for (int i=0; i<=10; i=i+1) {
        printf ("%d ", i);
        i = i + 1;
    }
    printf ("\n");
}
