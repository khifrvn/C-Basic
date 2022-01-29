#include <stdio.h>

int main()
{
	int pilihan;
	float phi = 3.14;
	float sisiKubus, jari, tinggiSil, hasil;
	
	printf("===Rumus===\n");
	printf(" 1. Menghitung Volume Kubus\n 2. Menghitung Luas Lingkaran\n 3. Menghitung Volume Silinder\n");
	printf("Pilih Rumus : ");
	scanf("%d", &pilihan);
	
	switch(pilihan)
	{
		case 1: printf("Panjang sisi: ");
				scanf("%f", &sisiKubus);
				hasil = sisiKubus * sisiKubus * sisiKubus;
				printf("Volume kubus = %4.2f", hasil);
		break;
		case 2: printf("Masukan jari-jari: ");
				scanf("%f", &jari);
				hasil = phi * jari * jari;
				printf("Luas lingkaran = %4.2f", hasil);
		break;
		case 3: printf("Masukan jari-jari: ");
				scanf("%f", &jari);
				printf("Masukan tinggi: ");
				scanf("%f", &tinggiSil);
				hasil = phi * jari * jari * tinggiSil;
				printf("Volume silinder = %4.2f", hasil);
		break;
		
		default:
			printf("Pilihan Salah!");
		break;
	}
}