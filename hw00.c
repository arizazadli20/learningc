#include <stdio.h>

//progtest hw00

int main () {

    int a=0;

    printf("ml' nob:\n");
    if (scanf("%d", &a) != 1) {
        printf("Neh mi'\n");
        return 0;
    }

    if (a<0 || a>8) {
        printf("Qih mi' %d\n", a);
    }


    else {
        printf("Qapla'\n");
        if(a==0) { printf("noH QapmeH wo' Qaw'lu'chugh yay chavbe'lu' 'ej wo' choqmeH may' DoHlu'chugh lujbe'lu'.\n");}
        else if (a==1) {printf("bortaS bIr jablu'DI' reH QaQqu' nay'.\n");}
        else if (a==2) {printf("Qu' buSHa'chugh SuvwI', batlhHa' vangchugh, qoj matlhHa'chugh, pagh ghaH SuvwI''e'.\n");}
        else if (a==3) {printf("bISeH'eghlaH'be'chugh latlh Dara'laH'be'.\n");}
        else if (a==4) {printf("qaStaHvIS wa' ram loS SaD Hugh SIjlaH qetbogh loD.\n");}
        else if (a==5) {printf("Suvlu'taHvIS yapbe' HoS neH.\n");}
        else if (a==6) {printf("Ha'DIbaH DaSop 'e' DaHechbe'chugh yIHoHQo'.\n");}
        else if (a==7) {printf("Heghlu'meH QaQ jajvam.\n");}
        else if (a==8) {printf("leghlaHchu'be'chugh mIn lo'laHbe' taj jej.\n");}

    }

}
