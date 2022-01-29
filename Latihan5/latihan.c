#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int kebinerin(int);

int main(int argc, char *argv[]) {
	int bil_desimal, hasil;
	printf("Masukkan Bilangan Desimal: ");
	scanf("%d", &bil_desimal);
	hasil = kebinerin(bil_desimal);
	
	printf("Bilangan biner dari %d adalah %d", bil_desimal, hasil);
	
}

int kebinerin(int x)
{
  int sisa_hasil_bagi,i=1,biner=0;
  
  while(x>0){
  	sisa_hasil_bagi = x % 2;
  	biner = biner + sisa_hasil_bagi * i;
	x = x/2;
	i = i*10; 
  }
  
  return biner;
}
