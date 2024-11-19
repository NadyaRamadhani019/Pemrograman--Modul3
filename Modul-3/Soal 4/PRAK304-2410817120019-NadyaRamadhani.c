#include <stdio.h>
int main(){
    int nilai;
    printf("");
    scanf("%d", &nilai);

   if(nilai == 0){
        printf("nol");
    }else if(nilai > 0 && nilai < 10){
        printf("satuan");
    }else if(nilai > 10 && nilai < 20){
        printf("belasan");
    }else if(nilai == 10 || nilai >= 20 && nilai < 100){
        printf("puluhan");
    }else{
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

    return 0;
}