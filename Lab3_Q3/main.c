/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 29, 2015, 11:13 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *my_strcat( const char * const str1, const char * const str2);
/*
 * 
 */
int main(int argc, char** argv) {

    printf ( "%s\n", my_strcat( "Hello", "world!" ));
    return (EXIT_SUCCESS);
}

char *my_strcat( const char * const str1, const char * const str2){
    int i, size1 = 0, size2 = 0;
    for(i = 0; str1[i] != '\0'; i++){
        size1++;
    }
    for(i = 0; str2[i] != '\0'; i++){
        size2++;
    }
    
    char *output = NULL;
    output = (char *)malloc((size1+size2)*sizeof(char));
    
    for(i = 0; i < size1; i++){
        *(output + i) = str1[i];
    }
    
    for(i = 0; i < size2; i++){
        *(output + i + size1) = str2[i];
    }
    *(output + size1 + size2) = '\0';
    
    return output;
    free(output);
}