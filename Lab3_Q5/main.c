/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 30, 2015, 10:56 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

char **read_words(const char *input_filename, int *nPtr);

int main(int argc, char** argv) {
FILE *input = fopen("input.txt","r");
    int x;
     fscanf(input,"%d", &x);
     printf("%d", x);
    fclose(input);
    return (EXIT_SUCCESS);
}

char **read_words(const char *input_filename, int *nPtr){
    FILE *input = fopen("input.txt","r");
    int x;
     fscanf(input,"%d", &x);
     printf("%d", x);
    fclose(input);
}