#include <stdio.h>
int main(){
    int nilai;
    printf("");
    scanf("%d", &nilai);
   
    if(nilai == 0){
        printf("nol");
    }else if(nilai > 0){
        printf("positif");
    }else{
        printf("negatif");
    }

    return 0;
}