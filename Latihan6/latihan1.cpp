#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Fungsi Login
//Parameter input : -
int Login(){
    //Deskripsi fungsi:
    char username[10];
	char password[10];
    
    fflush(stdin);
    //Fungsi meminta 2 input dari keyboard, username dan password, kemudian memeriksanya dengan ketentuan:
    printf("\n==========Login==========\n");
	printf("Username : ");
	gets(username);
	printf("Password : ");
	gets(password);
	printf("=========================\n");
    //Jika username=”admin” dan password=”adm2020”, memberikan return value 1
    if(strcmp(username,"admin")==0&&strcmp(password,"adm2020")==0)
    //Selain kondisi a, memberikan return value 0
       return 1;
    else
       return 0;
       
	//Return value : integer	
}

char inputan[100];

void HitungHuruf(){
	int jumlah_karakter;
	int i = 0, hurufVokal=0, hurufKonsonan = 0 , spasi = 0;
	printf("Tuliskan suatu kalimat: "); getchar();
	gets(inputan);
	jumlah_karakter = strlen(inputan);
	
	for(i=0; i<jumlah_karakter; i++)
	{
		if(inputan[i]=='a'||inputan[i]=='i'||inputan[i]=='u'||inputan[i]=='e'||inputan[i]=='o')
	hurufVokal++;
	    else if(inputan[i]==' '){
	    	spasi++;
		}
		else{		
	hurufKonsonan++;
       }   
	}
	printf("==========Hasil==========\n");
	printf("Jumlah Karakter (dengan spasi) = %d\n", jumlah_karakter);
	printf("Jumlah Spasi = %d\n", spasi);
	printf("Jumlah Huruf Vokal = %d\n", hurufVokal);
	printf("Jumlah Huruf Konsonan = %d\n", hurufKonsonan);
}

void mengganti(char *data, char cari, char ganti){
	
	int i=0;
	while(*data != '\0'){
		//fungsi merubah karakter
		*data=((*data == cari)?ganti:*data);
		data++;
		i++;
	}
}

void UbahHuruf(){
	//Fungsi meminta masukan berupa kalimat yang diakhiri dengan enter, kemudian fungsi 
	//mengubah semua huruf “a” menjadi huruf “i” dan menampilkannya ke layar.
    char cari;
    char huruf = 'a';
    char huruf_ganti = 'i';
    
	printf("Masukkan Kalimat : "); getchar();
	gets(inputan);
	cari = huruf;
    mengganti(inputan,cari,huruf_ganti);
	
	printf("==========Hasil==========\n");
	printf("Hasil ubah huruf a ke i : %s\n\n", inputan);
}

void BalikKalimat(){
	//Parameter input: -
    //Return value: -
    //Deskripsi fungsi:
    //Fungsi meminta masukan berupa kalimat yang diakhiri dengan enter, kemudian fungsi membalik semua huruf dan menampilkannya.
    //Contoh:
	//Input: Politeknik TEDC Bandung
    //Output: gnudnaB CDET kinketiloP
    int panjang_kalimat, balik_kalimat;
    
	printf("Masukkan Kalimat : "); getchar();
	gets(inputan);
	//menghitung banyak karakter dalam kalimat
	panjang_kalimat = strlen(inputan);
	
	printf("==========Hasil==========\n");
	printf("Hasil setelkah dibalik: ");
	
	//tampilkan karakter dalam kalimat ditampilkan dari karakter belakang ke depan
	for(balik_kalimat = panjang_kalimat; balik_kalimat >= 0; balik_kalimat--)
	{
		printf("%c", inputan[balik_kalimat]);
	}
	
	printf("\n");
	
}

void MyMenu(){
	//Parameter input: -
    //Return value: -
     
    //Deskripsi fungsi:
    //Fungsi menampilkan menu:
    int pil;
    //Hitung Huruf
    //Ubah Huruf
    //Balik Kalimat
    //Selesai
    //Fungsi meminta user untuk memilih salah satu menu kemudian memanggil fungsi terkait.
    menu :
    printf("\nMy Menu today");
    printf("\n1. Hitung Huruf");
    printf("\n2. Ubah Huruf");
    printf("\n3. Balik Kalimat");
    printf("\n4. Selesai");
    printf("\nMasukkan pilihan Anda (dalam angka) : ");
    scanf("%d",&pil);
    switch(pil) {
    	case 1: HitungHuruf(); break;
    	case 2: UbahHuruf(); break;
    	case 3: BalikKalimat(); break;
		case 4: printf("\nSelesai....\n\n======Terima Kasih======"); exit(0); break;
		default: 
		         printf("\nPilihan belum tepat...\n"); 
		         goto menu; 
	}
}


int main() {
	//Parameter input: -
    //Return value: 0
    //Deskripsi fungsi:
    //Fungsi memanggil fungsi Login, jika return value 1 panggil fungsi MyMenu, jika return value 0 tampilkan pesan kesalahan.
    //Fungsi bertanya ke user apakah ingin mengulangi atau tidak, jika jawabannya ‘y’ program kembali dari awal, jika ‘t’ program selesai.
    int x;
    char ulangi_lagi;
   
     x = Login();
     
     do{
        if(x==1){
           printf("\nSelamat datang...\n");
           MyMenu();
           printf("\nMau ulangi lagi (y/t) : ");
           ulangi_lagi = getchar(); 
        }else{
           printf("\nUsername atau password Anda salah !\n");
           printf("\nMau ulangi lagi (y/t) : ");
           ulangi_lagi = getchar();  
           x = Login();
        }
      }while(ulangi_lagi=='y');
      return 0;
}