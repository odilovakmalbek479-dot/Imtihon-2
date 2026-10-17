#include <stdio.h>

int yigindi(int son){
    if(son == 1){
        return 1;
    }
    return son + yigindi(son - 1);
}

int main(){
    int son;

    scanf("%d", &son);
    
    printf("Yig'indisi: %d\n", yigindi(son));
}