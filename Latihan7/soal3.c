#include <stdio.h>

int main()
{
	int no1, no2, hasil, oper;
	
	printf("Massukan nomer pertama: ");
	scanf("%d", &no1);
	printf("Masukan nomer kedua: ");
	scanf("%d", &no2);
	printf("==== Pilih operator ====\n");
	printf(" 1. Penjumlahan \n 2. Pengurangan \n 3. Perkalian \n 4. Pembagian \n");
	printf("Masukan operator: ");
	scanf("%d", &oper);
	
	if(oper == 1)
	{
		hasil = no1 + no2;
		printf("Hasil dari %d + %d = %d", no1, no2, hasil);
	} else if(oper == 2)
	{
		hasil = no1 - no2;
		printf("Hasil dari %d - %d = %d", no1, no2, hasil);
	} else if(oper == 3)
	{
		hasil = no1 * no2;
		printf("Hasil dari %d * %d = %d", no1, no2, hasil);
	} else if(oper == 4)
	{
		hasil = no1 / no2;
		printf("Hasil dari %d / %d = %d", no1, no2, hasil);
	} else
	{
		printf("Operator salah!");
	}

}