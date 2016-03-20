/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 29, 2015, 11:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

int largest_prefix(const char *str, const char **list, int n);


/*
 * 
 */
int main(int argc, char** argv) {

    char str[] = "university";
    char *list[] = {"abc", "!$rt", "UN", "city", "Univ", "a", "Univer"};
    
    int sizeOfList = 0; 
    while(*(list+sizeOfList) != '\0'){
        sizeOfList++;
    }
    
    printf("%d", largest_prefix(str, list, sizeOfList));
    
    return (EXIT_SUCCESS);
}

int largest_prefix(const char *str, const char **list, int n){
    int i, j, max = 0, output = -1, temp = 0;
    
    for(i = 0; i < n; i++){ //loops through each word in the list
        temp = 0;
        for(j = 0; *(*(list + i)+j) != '\0'; j++){ //loops through each character in the word
            
            if(*(*(list + i)+j) != str[j]){ //breaks the for loops when there is a character that doesn't match
                break;
            }else{ 
                temp++; //increases the amount of equal characters in the prefix
            }
        }
        if(temp > max){ //checks if the temporary counter is greater than the previous max
            max = temp; //sets a new max size of the prefix
            output = i; //changes the output to the index of the biggest prefix
        }
    }
    return output; //returns the index
}

