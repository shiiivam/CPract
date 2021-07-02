#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int no, i;

    printf("Enter the size of the array: ");
    scanf("%d",&no);

    // Malloc
 /*   ptr = (int *) malloc(no*sizeof(int));

    for(i=0;i<no;i++){
        printf("Please enter the value %d : ",i);
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<no;i++){
        printf("The value of arr[%d] is = %d \n",i, ptr[i]);
    }
*/    

    ptr = (int *) calloc(no, sizeof(int));

    for(i=0;i<no;i++){
        printf("Please enter the value %d : ",i);
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<no;i++){
        printf("The value of arr[%d] is = %d \n",i, ptr[i]);
    }

    // free(ptr);

    printf("Enter the new size of the array: ");
    scanf("%d",&no);

    ptr = (int *) realloc(ptr, no * sizeof(int));

    for(i=0;i<no;i++){
        printf("Please enter the value %d : ",i);
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<no;i++){
        printf("The new value of arr[%d] is = %d \n",i, ptr[i]);
    }

}
