/*

За програмски јазик C.

Да се напише програма во која од стандарден влез се вчитува N (бројот на производи), 
а потоа се вчитуваат податоците за N производи (име, цена, количина). Програмата 
треба на стандарден излез да ја отпечати листата на купени производи и вкупната 
сума која треба да се плати во следниот облик (пример):

1. Flips    10.00 x 3 = 30.00
2. CocaCola 75.00 x 2 = 150.00
3. ChokoBanana  5.00 x 10 = 50.00
Total: 230.00

*/

#include <stdio.h>
#define SIZE 100

typedef struct proizvod{
    char ime[SIZE];
    float cena;
    float kolicina;
}proizvod;

int main(){

    int n;
    scanf("%d",&n);

    proizvod proizvodi[SIZE];

    int i;
    for(i=0; i<n; i++){

        scanf("%s %f %f",&proizvodi[i].ime, &proizvodi[i].cena,&proizvodi[i].kolicina);

    }

    float total=0;

    for(i=0; i<n; i++){
        printf("%d. ",i+1);

        printf("%s\t%.2f x %.1f = %.2f", proizvodi[i].ime, proizvodi[i].cena, proizvodi[i].kolicina, proizvodi[i].cena*proizvodi[i].kolicina);
        
        printf("\n");

        total+=proizvodi[i].cena*proizvodi[i].kolicina;
    }

    printf("Total: %.2f", total);

    return 0;
}
