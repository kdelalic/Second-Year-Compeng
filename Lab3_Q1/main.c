/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 28, 2015, 9:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void process(float y[ ], int m, double *avPtr, double *difPtr);

int main(int argc, char** argv) {
    int x, i;
    float *p =NULL;
    double *mean = 0;
    double *diff = 0;
    
    printf("Input the size of the array: ");
    scanf("%d", &x);
    
    p = (float *)calloc(x, x*sizeof(float));
    for(i = 0; i<x; i++ ){
        scanf("%f", p+i);
    }
    
    process(p, x, &mean, &diff);
    free(p);
    
    printf("Mean: %f\nDifference: %f", mean, diff);
    return (EXIT_SUCCESS);
}

void process(float y[ ], int m, double *avPtr, double *difPtr){
    int i = 0;
    double large = y[0], small = y[0];
    
    for(i; i < m; i++){
        *avPtr += y[i];
    }
    *avPtr = *avPtr/m;
    
    for(i = 0; i < m; i++){
        if(y[i] < small){
            small = y[i];
        }
        if(y[i] > large){
            large = y[i];
        }
    }
    
    *difPtr = large-small;    
}