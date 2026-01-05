#include <stdio.h>

int main(){
    /*int angka;
    printf("Masukkan sebuah angka: \n");
    scanf("%d", &angka);

    if(angka % 2 == 0){;
    printf("angka yang kamu masukkan adalah angka genap \n");
    }else if(angka % 2 == 1){;
        printf("angka yang kamu masukkan adalah angka ganjil \n");
    }else{
        printf("Angka yang kamu masukkan bukan bilangan positif\n");
    }*/

    int a, b, c;

    a = 0;
    b = 0;
    c = 0;
    
    printf("Masukkan 3 angka: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
    {printf("Angka terbesar adalah : %d\n", a);
    }else if(b >= a && b >= c)
    {printf("angka terbesar adalah : %d\n", b);
    }else{
        printf("angka terbesar adalah : %d\n", c);
    }


    return 0;
}