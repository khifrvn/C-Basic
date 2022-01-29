#include <stdio.h>

main()
{
    int jumkar=0, jumlahspasi=0;
    char kar;

    printf("Masukkan kalimat : ");
   
    while((kar=getchar())!='\n')
    {
        jumkar++;
        if (kar==' ')

        jumlahspasi++;
    }

    printf("\njumlah karakter = %d\n", jumkar);
    printf("jumlah spasi    = %d\n\n", jumlahspasi);
}

