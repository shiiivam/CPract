#include<"stdio.h"> 

int main(){
    int choice,no1,no2,res;


    
    printf("\nEnter first number 1:");
    scanf("%d",&no2);
    printf("\nEnter second number 1:");
    scanf("%d",&no1);
    printf("\nSelect operation:");
    printf("\nEnter 1 to add");
    printf("\nEnter 2 to Subtract");
    printf("\nEnter 3 to Multiply");
    printf("\nEnter 4 to Division");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            res = no1 + no2
            printf("\nAddition is : %d"res);
            break;
        case 2:
            res = no1 - no2
            printf("\nSubtraction is : %d"res);
            break;
        case 1:
            res = no1 * no2
            printf("\nMultiplication is : %d"res);
            break;
        case 1:
            (float) res = (float) no1 / no2
            printf("\nAddition is : %d"res);
            break;       
        default: printf("Invalid Choice!")
            break;
    }
    return 0;
}