#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b && a<c && b<c){
        printf("%d %d %d", a, b, c);
    }else if(a<c && c<b && a<b){
        printf("%d %d %d", a, c, b);
    }else if(b<a && b<c && c<a){
        printf("%d %d %d", b, c, a);
    }else if(b<a && a<c && b<c){
        printf("%d %d %d", b, a, c);
    }else if(c<a && c<b && a<b){
        printf("%d %d %d", c, a, b);
    }else{
        printf("%d %d %d", c, b, a);
    }
    
    return 0;
}