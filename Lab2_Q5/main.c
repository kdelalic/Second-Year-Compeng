/* 
 * File:   main.c
 * Author: delalik
 *
 * Created on October 9, 2015, 2:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

int addEff( int val1[], int val2[], int val3[],int pos1[], int pos2[],int pos3[], int k1, int k2);


/*
 * 
 */
int main(int argc, char** argv) {
    int val1[4] = {5, 6, 8, 1};
    int val2[4] = {7, 8, 2, 9};
    int val3[7];
    int pos1[4] = {2, 4, 5, 7};
    int pos2[4] = {0, 3, 5, 6};
    int pos3[7];
    addEff(val1, val2, val3, pos1, pos2, pos3, 4,4);
    return (EXIT_SUCCESS);
}

int addEff( int val1[], int val2[], int val3[],int pos1[], int pos2[],int pos3[], int k1, int k2){
    int i, j, k = k1 + k2, pos1count = 0, pos2count = 0;
    
    for(i = 0; i < k1; i++){
        for(j = 0; j < k2; j++){
            if(pos1[i] == pos2[j]){
                k--;
            }
        }
    }

    for(i = 0; i < k; i++){
        if(pos1[pos1count] == pos2[pos2count]){
            pos3[i] = pos1[pos1count];
            val3[i] = val1[pos1count] + val2[pos2count];
            pos1count++;
            pos2count++;
        }else if(pos1count == k1){
            pos3[i] = pos2[pos2count];
            val3[i] = val2[pos2count];
        }else if(pos2count == k2){
            pos3[i] = pos1[pos1count];
            val3[i] = val1[pos1count];
        }else if(pos1[pos1count] < pos2[pos2count]){
            pos3[i] = pos1[pos1count];
            val3[i] = val1[pos1count];
            pos1count++;
        }else if(pos1[pos1count] > pos2[pos2count]){
            pos3[i] = pos2[pos2count];
            val3[i] = val2[pos2count];
            pos2count++;
        }
        printf("(%d, %d) ", val3[i], pos3[i]);
    }
}

