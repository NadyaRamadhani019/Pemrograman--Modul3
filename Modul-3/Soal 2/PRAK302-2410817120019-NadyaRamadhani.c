#include <stdio.h>
int main(){
    int nilai;
    char huruf;
    printf("Masukkan Nilai:");
    scanf("%d", &nilai);

    if(nilai >= 80){
        huruf = 'A';
    }else if(nilai >= 70){
        huruf = 'B';
    }else if(nilai >= 60){
        huruf = 'C';
    }else if(nilai >= 50){
        huruf = 'D';
    }else{
        huruf = 'E';
    }
    printf("Nilai: %c", huruf);

    return 0;
}