/*

右側函式 若以 search (1, 10, 3) 呼叫
時， search 函式 總共 會被 執行 幾次？

(A) 2
(B) 3
(C) 4
(D) 5

*/

void search int x, int y, int z){
      if (x < y){
          t = ceiling ((x + y)/2);
          if (z >= t)
            search(t, y, z)
          else
            search(x, t-1, z)
      }
}
註： ceiling() 為無條件進位至整數位。例如
ceiling(3.1)=4, ceiling(3.9)=4 。
