/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 9, 2015, 1:18 PM
 */

#include <stdio.h>
#include <stdlib.h>

void efficient( const int source[], int val[], int pos[], int size);
void reconstruct( int source[], int m, const int val[], const int pos[], int n);

/*
 * 
 */
int main(int argc, char** argv) {
    int size = 8;
    int input[8] = {0, 0, 23, 0, -7, 0, 0, 48};
    int val[nonzero(input, size)];
    int pos[nonzero(input, size)];
    
    efficient(input, val, pos, size);
    reconstruct(input, size, val, pos, 3);
    return (EXIT_SUCCESS);
}

void efficient( const int source[], int val[], int pos[], int size){
    int i, k = 0;
    
    for(i = 0; i < size; i++){
        if(source[i] != 0){
            val[k] = source[i];
            pos[k] = i;
            printf("(%d, %d) ", val[k], pos[k]);
            k++;
        }
    }
    printf("\n");
}

void reconstruct( int source[], int m, const int val[], const int pos[], int n){
    int i, k = 0;
    
    for(i = 0; i < m; i++){
        if(i == pos[k]){
            source[i] = val[k];
            k++;
            printf("%d ", source[i]);
        }else{
            source[i] = 0;
            printf("%d ", source[i]);
        }
    }
}

int nonzero(int source[], int size){
    int i, k = 0;
    for(i = 0; i < size; i++){
        if(source[i] != 0){
            k++;
        }
    }
    return k;
}