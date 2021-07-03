#include <stdio.h>

// External Storage Class: Global Scope
int no1;

void localVar(){
    int no3 = 30;
    printf("%d",no3);
}


int main(){
    
    no1 = 10;
    // Auto storage class : Local Scope (Only inside the function in which it is declared)
    int no2 = 20;
    // no3 will not be accessible here: Local Scope
    localVar();
    static int no4 = 40;
    printf("\n%d",no4);

    // register storage class : Frequenlty use var;
    register int i;

    for(i=0;i < 5;i++){
        printf("\n%d",i);
    }
    return 0;
}