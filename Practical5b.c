// Sequential Search and Binary Search   (PRIVATE DOC /R&W)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int count=0;   

void sequential_search(int array[], int size, int y)
{
    int i;  
    for (i = 0; i < size; i++)
    { 
        count++;
        if (array[i] == y)
        {
            count++;
            // printf("%d found at location %d.\n", n, i+1);
            printf("Yes The Element is Present");
            break;
        }
       
    }
     if (i == size){
        // printf("Not found! %d is not present in the list.\n", n);
        count++;
        printf("Oops! Not Present");
     }
}



// Binary Search Function 
void binary_search(int array[], int size, int y)
{
    int i, first, last, middle;
    first = 0;
    last = size - 1;
    middle = (first+last) / 2;
 
    while (first <= last) {
        count++;
        if (array[middle] < y)
            first = middle + 1;
        else if (array[middle] == y) {
            // printf("%d found at location %d.\n", y, middle+1);
            
            printf("\npresent in Binary Search");
           break;
        }
        else
            last = middle - 1;
 
        middle = (first + last) / 2;
    }
    if ( first > last )
        // printf("Not found! %d is not present in the list.\n", y);
        printf("\nOops! Not Present in Binary Search");
}

int main()
{
    clock_t start,end;
    double time_taken;
    time_t t;
    int i;
    int y;
    int size;
    

    srand((unsigned) time(&t));

    printf("\nEnter the size of the list:");
    scanf("%d", &size);
        int *r;
        r=(int *)malloc(y*sizeof(int));  //Dynaamic meamory allocation 
        count++;

    printf("\nRandom  Generated Data: ");
    for(i = 0; i<size; i++)
    {
        r[i] = rand() % 100;
        printf("%d ", r[i]);
        count++;
    }
    printf("\nEnter value to find  :");
    scanf("%d", &y);

    start = clock();
    sequential_search(r, size, y);
    end = clock();

    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Searching in Random Data: %f", time_taken);
    printf("\nthe number of steps is  %d ",count );
    // printf("\n---------------------------------------");
    // printf(" \nFOR BINARAY SEARCH ")

    // For binary Search

    start = clock();
    binary_search(r, size, y);
    end = clock();
    
    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken for Searching in Random Data: %f", time_taken);
    printf("\nthe number of steps is  %d ",count);

    return 0;

}   