/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 29, 2015, 1:41 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
 * 
 */

int *sort(const int a[], int n, int *ptr);

int main(int argc, char** argv) {
    int *intVar;
    int intArray[] = {5,5,5,2,1};
    int n = 5;
    
    int i;
    for(i = 0; i < intVar; i++){
        printf("%d\n", *(sort(intArray, n, &intVar)+i));
    }
    printf("%p\n", sort(intArray, n, &intVar));
    return (EXIT_SUCCESS);
}

int *sort(const int a[], int n, int *ptr){
    
    int *abc = NULL, i, j, temp, size = 0;
    abc = (int *)malloc(n*sizeof(int));
    
    for(i = 0; i < n; i++){
        *(abc + i) = a[i];
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (*(abc + i) > *(abc + j))
            {
                temp =  *(abc + i);
                *(abc + i) = *(abc + j);
                *(abc + j) = temp;
            }
        }
    }
    
    for (i = 0; i < n; i++){
        if(*(abc + i) != *(abc + i + 1)){
            size++;
        }
    }
    
    *ptr = size;

    int *output = NULL;
    output = (int *)malloc(size*sizeof(int));
    
    int index = 0;
    
    for (i = 0; i < n; i++){
        if(*(abc + i) != *(abc + i + 1)){
            *(output + index) = *(abc + i);
            index++;
        }
    }
    
    return output;
    
    free(output);
    free(abc);
}