#include <stdio.h>

int main(){
    // Void pointer: Just contain address of the memory location
    void *p;
    int a = 10;
    *(int *) p = a;
    printf("%d",p);
    
    // // NULL pointer: Can not be dereferenced before casting
    // int *nptr = NULL;
    // int b = 20;
    // *(int *)nptr = b;
    // printf("%d",nptr);
    // return 0;


}