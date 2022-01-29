#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
 {
   int n=10,i,deret;
   printf("============ Deret Angka 1 - 1024 ============\n");
   for(i=0; i<=n; i++)
  {
    deret=pow(2, i);
    printf(" %d",deret);
  }
    getch();
 }