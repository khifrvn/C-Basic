#include<stdio.h>

int main()
{
		int feet,inches;
		
		printf("Masukan nilai feet: ");
		scanf("%d",&feet);
		
		//konversi
		inches=feet*12;
		
		printf("Total inches adalah: %d\n",inches);
		return 0;
}