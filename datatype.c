#include <stdio.h>
#include <stdbool.h>
/*tipe data di c ada berbagai macam contohnya seperti 
int, float, double, char*/

int main(){

    //penggunaannya
    int umur = 20;
    printf("Umur kamu sekarang adalah : %d\n", umur);

    float nilai = 85.54;
    char abjadnilai = 'A';
    printf("Nilai Ujian kamu : %.2f atau %c\n", nilai, abjadnilai);

    double pi = 3.141592653589793;
    printf("nilai dari pi : %lf\n", pi);

    //untuk menggunakan string perlu ditambahkan array, contoh

    printf("\n");
    char nama[] = "Dimas Alhamdy";
    printf("Namamu adalah %s\n", nama);

    printf("\n");
    //boolean juga tipe data, akan tetapi membutuhkan header "<stdbool.h>"
    bool isGanteng = true;
    //printf("%d", isGanteng); akan tetapi boolean jarang digunakan dalam print dan lebih banyak digunakan dalam if statement

    if(isGanteng){
        printf("Bener banget<3");
    }else{
        printf("Dih apaansih");
    }


    return 0;
}