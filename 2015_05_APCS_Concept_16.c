/*

右側程式執行過後所輸出數值為何？
(A) 11
(B) 13
(C) 15
(D) 16

*/

void main () {
int count = 10;
    if (count > 0) {
        count = 11;
    }
    if (count > 10) {
        count = 12;
        if (count % 3 == 4) {
            count = 1;
        } else {
          count = 0;
        }
    } else if (count > 11) {
        count = 13;
    } else {
       count = 14;
    }
    if (count) {
      count = 15;
    } else {
      count = 16;
    }
    printf ("%d\n", count);
}
