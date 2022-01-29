#include<stdio.h>  

int main()  
{  
    int num, hitung = 1, i;  
    printf("Masukan baris pyramid: ");  
    scanf("%d", &num);
    while(hitung <= num)  
    {  
        i = 0;  
        while( i <= (num - hitung) )  
        {  
            printf(" ");  
            i++;  
        }  
        i = 0;  
        while(i < (2*hitung-1))  
        {  
            printf("*");  
            i++;  
        }  
        printf("\n");  
        hitung++;  
    }  
    return 0;  
}  