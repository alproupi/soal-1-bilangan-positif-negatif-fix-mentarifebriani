#include <stdio.h>

int main(){
    int tahun;
    
    printf("masukkan tahun: ");
    scanf("%d", &tahun);
    
    if((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("tahun kabisat\n");
        
    } else {
        printf("bukan tahun kabisat\n");
    }
    

    return 0;
}
