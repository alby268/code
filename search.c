//Program using pointers to check whether argv[ ] has user input value
//This Program is not efficient as memory allocation is in Heap compared to variables in Stack.
//This is just to demonstrate dynamic memory allocation and how the pointers work.


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){

    
    
    printf("Hello \n");

    int *ptr ;

    ptr = (int *)malloc(sizeof(int));

    printf("memory location of number input to search : %p\n", ptr); 
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("argc : %d\n", argc);

    printf("Enter number to search:");
    scanf("%d",ptr);

    int *ptr1; //for loop variable
    ptr1 = (int *)malloc(sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int *ptr2; //for storing integer value from array, one by one
    ptr2 = (int *)malloc(sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }




    *ptr1 = argc-1;
   
    while(*ptr1 != 0){
        
        *ptr2 = atoi(argv[*ptr1]);
        if(*ptr2 == *ptr){
            printf("\n Found \n");
            free(ptr);
            free(ptr1);
            free(ptr2);
            return 0;
        }
        *ptr1 = *ptr1-1;

    }


    
    printf("\n Not Found \n");

    
    free(ptr);
    free(ptr1);
    free(ptr2);
    
    return 0;
}
