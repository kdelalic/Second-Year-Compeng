/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 8, 2015, 10:58 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3
/*
 * 
 */

int is_diag_dom(int mat[][N]);
double fabs(double x);

int main(int argc, char** argv) {
    int input[3][3] = {{0,1,2},{1,5,3},{1,-1,2}};
    printf("%d", is_diag_dom(input));
    return (EXIT_SUCCESS);
}

int is_diag_dom(int mat[][N]){
    int i, j, output = 1;
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(fabs(mat[i][i]) < fabs(mat[i][j])){
                output = 0;
            }
        }
    }
    return output;
}

double fabs(double x){
    return sqrt(x*x);
}