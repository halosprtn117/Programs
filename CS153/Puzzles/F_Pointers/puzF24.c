#include <stdio.h>

int main(int agrc, char *argv[]){
    int value;
    int *pv;
    int **ppv;
    int **ppw;
    
    value = 32;
    pv=&value;
    ppv=&pv;
    ppw=&pv;
    
    printf("value = %d\n", value);
    printf("**ppv = %d\n", **ppv);
    printf("**ppw = %d\n", **ppw);
    
    return 0;
}