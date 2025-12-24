#include <stdio.h>


int main(){
    // operasi aritmatika = + - * / ++ --
    
    int x = 3;
    int y = 7;
    float z;

    //z = x + y;
    //z = x - y;
    //z = x * y;
    //z = x / y;
    //z = y % x;
    //printf("%.1f \n", z);

    //x++;
    //printf("%d\n", x); -> hasilnya 4

    //y--;
    //printf("%d \n", y); -> hasilnya 7

    //augmented assignment operation merupakan cara singkat untuk menggunakan operasi aritmatika di dalam sebuah program
    x += 2;
    printf("%d \n", x); // -> hasilnya jadi 5 

    return 0;
}
