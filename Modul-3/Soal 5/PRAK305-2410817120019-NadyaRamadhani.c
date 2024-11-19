#include <stdio.h>
int main(){
int hari;
int jam;
int menit;
int detik;
int total;
int sisa;
printf("");
scanf("%d", &total);

hari = total / 86400;
sisa = total % 86400;
jam = total / 3600;
sisa %= 3600;
menit = sisa / 60;
detik = sisa % 60;

if(jam>24){
    jam %= 24;
    printf("%d hari %0.2d:%0.2d:%0.2d", hari, jam, menit, detik);
}else{
    printf("%0.2d:%0.2d:%0.2d", jam, menit, detik);
}

return 0;
}