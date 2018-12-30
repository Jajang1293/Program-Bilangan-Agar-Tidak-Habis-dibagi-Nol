#include<stdio.h>
int main()
{
    float a,b,hasil;
    printf("Program Validasi agar bilangan tidak dibagi dengan nol\n");
    printf("========================================================\n");
    printf("Masukan Bilangan Penyebut : ");scanf("%d",&a);
    printf("Masukan Bilangan Pembagi : ");scanf("%d",&b);
    hasil=a/b;
    if(b==0){printf("Bilangan tidak bisa dibagi dengan nol.\nSilakan masukan bilangan lain\n");}
    else{printf("Hasilnya adalah %.2f",hasil);}
}
