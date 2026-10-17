#include <stdio.h>

int katta(int a, int b){

    if(a > b){
        return a;
    }else if(b > a){
       return b;
    }else{
        printf("Ikkalasi teng!");
        return a;
    }
}

int main(){
    
    int a, b;

    printf("A va B ni kiriting: ");
    scanf("%d %d", &a, &b);

    int natija = katta(a, b);
    printf("Katta: %d\n", natija);
}