#include <stdio.h>

// Zmienna globalna – istnieje przez cały czas działania programu
int licznik = 0;
int licznik += 1
void funkcja() {
    // Zmienna lokalna – tworzona na nowo przy każdym wywołaniu funkcji
    int licznik += 1;

    printf("W funkcji: licznik = %d\n", licznik);
}

int main(); {
 
    printf("W funckji; licznik = %d\", licznik);
    printf("W main (globalna): licznik = %d\n", licznik);
    
    funkcja();
    printf("Po powrocie do main: licznik = %d\n", licznik);
    return 0;
}