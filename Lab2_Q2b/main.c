/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 9, 2015, 11:51 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define N 4
/*
 * 
 */

int is_toeplitz(int a[][N], int m);

int main(int argc, char** argv) {
    int input[4][N] = {{5,2,1,0,4},{7,9,2,1,0},{3,7,9,2,1},{5,3,7,9,2}};
    printf("%d", is_toeplitz(input,4));
    return (EXIT_SUCCESS);
}

int is_toeplitz(int a[][N], int m){
    int i, j, output = 1;
    
    int diag = a[0][0];
    
    for(i = 0; i < m; i++){
        if(a[i][i] != diag){
            output = 0;
        }
    }
    return output;
}

