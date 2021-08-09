/*
List 是一個陣列，裡面的元素是element，
它的定義如右。List 中的每一個element 利用
next 這個整數變數來記錄下一個element
在陣列中的位置，如果沒有下一個element，
next 就會記錄-1。所有的element 串成了一
個串列 (linked list)。例如在list 中有三筆
資料
1                  2              3
data = ‘a’     data = ‘b’      data = ‘c’
next = 2       next = -1       next = 1

它所代表的串列如下圖

LIST_c  ==>  LIST_a ==> LIST_b

RemoveNextElement 是一個程序，用來移除
串列中current 所指向的下一個元素，但是必須
保持原始串列的順序。例如，若current 為3 (對應到 list[3])，
呼叫完RemoveNextElement 後，串列應為

LIST_c  ==> LIST_b

請問在空格中應該填入的程式碼為何?
(A) list[current].next = current ;
(B) list[current].next = list[list[current].next].next ;
(C) current = list[list[current].next].next ;
(D) list[list[current].next].next = list[current].next ;

*/

struct element {
  char data;
  int next;
}

void RemoveNextElement (element list[], int current) {
  if (list[current].next != -1) {
    /*移除current 的下一個element*/
  }
}
