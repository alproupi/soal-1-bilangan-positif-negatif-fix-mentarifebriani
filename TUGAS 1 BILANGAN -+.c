   #include <stdio.h>

int main() {
    int bilangan;

    
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    
    if (bilangan > 0) {
        printf("Bilangan positif\n");
    } else if (bilangan < 0) {
        printf("Bilangan negatif\n");
    } else {
        printf("Bilangan nol\n");
    }

    return 0 ;
}