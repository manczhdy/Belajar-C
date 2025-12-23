/*format specifier = format specifier di c digunakan untuk mengambil input dan
                    mencetak output dari suatu tipe data. Simbol yang biasa digunakan
                    dalam penspesifikan adalah % format specifier memberitahu compiler
                    mengenai jenis data yang dimasukkan dan dikeluarkan*/



#include <stdio.h>

int main(){

int age = 20;
float price = 67.67;
double pi = 3.1415926535;
char matauang = '$';
char name[] = "Dimas Alhamdy";

printf("%c \n", matauang);
printf("%d\n", age);
printf("%.2f \n", price);
printf("%lf \n", pi);
printf("%s \n", name); 

//width = penentu jarak output dari dinding terminal contoh
int num1 = 1;
int num2 = 10;
int num3 = 100;

printf("============WIDTH=============== \n");

printf("%-3d \n", num1);
printf("%-3d \n", num2);
printf("%-3d \n", num3);

return 0;
}