#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayi, i, faktoriyel = 1;

    printf("Fokteriyelinin hesaplanmasi icin bir sayi giriniz: ");
    scanf("%d", &sayi);

    if(sayi > 0){
        for(i=1; i<=sayi; i++){
            faktoriyel *= i;
        }
        printf("\n%d'nin faktoriyeli = %d' dir.\n", sayi, faktoriyel);
    }
    else if(sayi == 0)
        printf("\n0'in faktoriyeli = 1'dir.\n");
    else
        printf("\n%d gibi negatif sayilerin faktorilleri yoktur.\n", sayi);

    return 0;
}
