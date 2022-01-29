#include <stdio.h>

int main()
{
	int kecepatanAwal = 2;
	int jarakTempuh = 0;
	int waktuTempuh;
	
	for (waktuTempuh=1; waktuTempuh <= 100; waktuTempuh=waktuTempuh+1)
	{
		jarakTempuh = jarakTempuh + kecepatanAwal;
	}
	
	printf("Kecepatan awal = %d m/detik\n", kecepatanAwal);
	printf("Jarak tempuh setelah bersepeda selama 100 detik = %d meter", jarakTempuh);
	return 0;
}