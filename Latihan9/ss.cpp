#include <stdio.h>

int main() {
    // Write C code here
    int bil=0, jumlah=0, x=0;
	printf("Rata-rata = %d", jumlah/x);
	scanf("%d", &bil);
	while (bil != 999){
		jumlah = jumlah + bil;
		x++;
	}
	printf("%d", jumlah);
	return 0;
	
}