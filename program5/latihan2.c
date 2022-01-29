#include <stdio.h>

int main()
{
	int kehadiran,spp;
	printf("Masukan Presentase Kehadiran: ");
	scanf("%d", &kehadiran);
	
	if (kehadiran >= 80)
	{
		printf("Sudah Bayar SPP(Y/T): ");
		scanf("%d", spp);
		if (spp == 'Y')
		{
		printf("Bisa Mengikuti Ujian");
		}
	} else
	{
		printf("Tidak Bisa Mengikuti Ujian");
		return 0;
	}
}
