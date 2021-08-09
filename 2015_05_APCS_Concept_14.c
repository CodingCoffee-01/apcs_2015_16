/*

右側程式輸出為何？
(A) bar: 6
    bar: 1
    bar: 8
(B) bar: 6
    foo: 1
    bar: 3
(C) bar: 1
    foo: 1
    bar: 8
(D) bar: 6
    foo: 1
    foo: 3

*/

void foo (int i) {
    if (i <= 5) {
      printf ("foo: %d\n", i);
    } else {
      bar(i - 10);
    }
}

void bar (int i) {
    if (i <= 10) {
        printf ("bar: %d\n", i);
    } else {
        foo(i - 5);
    }
}

void main() {
    foo(15106);
    bar(3091);
    foo(6693);
}
