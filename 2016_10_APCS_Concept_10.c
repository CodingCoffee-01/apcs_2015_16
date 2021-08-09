/*

右側主程式執行完三次 G() 的呼叫後， p
陣列中有幾個元素的值為 0
(A) 1
(B) 2
(C) 3
(D) 4

*/

int K(int p[], int v){
    if (p[v]!=v){
      p[v] = K(p, p[v]);
    }
    return p[v];
}
void G (int p[], int l, int r){
    int a=K(p, l), b=K (p,r);
    if (a!=b) {
        p[b] = a;
    }
}

int main(void){
int p[5]={ 0, 1, 2, 3, 4};
    G(p,0,1);
    G(p,2,4);
    G(p,0,4);
    return 0;
}
