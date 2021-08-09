/*

下列程式 碼 是 自動計算找零程式的一部分， 程式碼中三個主要變數分別為 Total (購買
總額) , Paid (實際支付 金額 Change (找零 金額 )。但是此 程式片段有 冗餘 的程式
碼，請找出冗餘 程式碼的區塊。

(A) 冗餘 程式碼在 A區
(B) 冗餘 程式碼在 B區
(C) 冗餘 程式碼在 C區
(D) 冗餘 程式碼在 D區

*/

int Total, Paid, Change;
      …
Change = Paid - Total;
printf ("500 : %d pieces \n", (Change-Change%500)/500)
Change = Change % 500;

printf ("100 %d coins \n", (Change-Change%100)/100);
Change = Change % 100;
// A 區
printf("50 : %d coins \n", (Change-Change%50)/50);
Change = Change % 50;
// B 區
printf("10 : %d coins \n", (Change-Change%10)/10);
Change = Change % 10;
// C 區
printf("5 %d coins n", (Change-Change%5)/5);
Change = Change % 5
// D 區
printf("1 : %d coins n", (Change-Change%1)/1);
Change = Change % 1
