/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 9, 2015, 1:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void string_copy(const char source[], char destination[], int n);

int main(int argc, char** argv) {
    int size = 8;
    char a[] = "Copy this";
    char b[size];
    string_copy(a, b, size);
    
    int i;
    for(i = 0; i < size-1; i++){
        printf("%c", b[i]);
    }
    return (EXIT_SUCCESS);
}

void string_copy(const char source[], char destination[], int n){
    int i;
    for(i = 0; i < n-1; i++){
        destination[i] = source[i];
    }
    destination[n] = '\0';
}