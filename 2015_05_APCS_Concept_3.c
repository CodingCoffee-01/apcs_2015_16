/*

給定一整數陣列a[0]、a[1]、…、a[99]且a[k]=3k+1，以value=100 呼叫以下兩函式，假設
函式f1 及f2 之while 迴圈主體分別執行n1 與n2 次 (i.e, 計算if 敘述執行次數，不
包含 else if 敘述)，請問n1 與n2 之值為何? 註： (low + high)/2 只取整數部分。

(A) n1=33, n2=4
(B) n1=33, n2=5
(C) n1=34, n2=4
(D) n1=34, n2=5

*/


int f1(int a[], int value) {
  int r_value = -1;
  int i = 0;
  while (i < 100) {
    if (a[i] == value) {
      r_value = i;
      break;
    }
    i = i + 1;
  }
  return r_value;
}

int f2(int a[], int value) {
  int r_value = -1;
  int low = 0, high = 99;
  int mid;
  while (low <= high) {
    mid = (low + high)/2;
    if (a[mid] == value) {
      r_value = mid;
      break;
    }else if (a[mid] < value) {
      low = mid + 1;
    }else {
      high = mid - 1;
    }
  }
  return r_value;
}
