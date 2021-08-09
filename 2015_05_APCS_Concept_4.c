/*

經過運算後，右側程式的輸出為何？
(A) 1275
(B) 20
(C) 1000
(D) 810

*/

for (i=1; i<=100; i=i+1) {
  b[i] = i;
}
a[0] = 0;
for (i=1; i<=100; i=i+1) {
  a[i] = b[i] + a[i-1];
}
printf ("%d\n", a[50]-a[30]);


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
