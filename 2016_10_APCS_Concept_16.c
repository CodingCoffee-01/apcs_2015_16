/*

右列程式片段中， 假設 a, a_ptr
和 a_ptrptr 這 三個 變數 都有
被正確宣告，且呼叫 G() 函 式 時
的參數為 a_ptr 及 a_ptrptr 。
G() 函 式 的 兩個 參數型態 該如何宣告?

(A) (a) *int int, (b) *int
(B) (a) *int int, (b) **int
(C) (a) int**, (b) int* (D) (a) int**, (b) int**

*/

void G ((a) a_ptr, (b) a_ptrptr) {
  ...
}

void main () {
    int a = 1;
    // 加入 a_ptr, a_ptrptr 變數的宣告
    a_ptr = &a;
    a_ptrptr = &a ptr;
    G (a_ptr, a_ptrptr);
}
