/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 9, 2015, 12:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define N 4

/*
 * 
 */

void print_diag(int a[][N]);

int main(int argc, char** argv) {
    int input[4][N] = {{1,12,13,49},{5,16,17,81},{9,10,11,20},{2,45,19,14}};
    print_diag(input);
    return (EXIT_SUCCESS);
}

void print_diag(int a[][N]){
    int i, j, min = 0, temp;
    
    for(i = 0; i < N; i++){
        for(j = i; j >= 0; j--){
            printf("%d ", a[j][i-j]);
        }
        if(i == N-1){
            do{
                min++;
                for(j = N-1, temp = min; j >= min; j--,temp++){
                    printf("%d ", a[j][temp]);
                } 
            }while(min != N-1);
        }
    }
}