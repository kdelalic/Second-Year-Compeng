/* 
 * File:   main.c
 * Author: Mudkip
 *
 * Created on October 1, 2015, 3:46 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */

void print_vector(double array[], int size);
void add_vectors( double vector1[], double vector2[], double vector3[], int n);
double scalar_prod(double vector1[], double vector2[], int size);
double norm2(double vector[], int size);

int main(int argc, char** argv) {
    double vector1[3] = { 2.0, 2.0, 3.0};
    double vector2[3] = { 3.0, 4.0, 5.0};
    double vector3[3];
    
    add_vectors(vector1, vector2, vector3, 3);
    print_vector(vector3, 3);
    printf("%f\n", scalar_prod(vector1, vector2, 3));
    printf("%f", norm2(vector1, 3));
    
    return (EXIT_SUCCESS);
}

void print_vector(double array[], int size){
    int i;
    for(i = 0; i < size; i++){
        if(i == size-1){
            printf("%f\n", array[i]);
        }else{
            printf("%f, ", array[i]);
        }
    }
}

void add_vectors( double vector1[], double vector2[], double vector3[], int n){
   int i;
   for(i = 0; i < n; i++){
       vector3[i] = vector1[i] + vector2[i];
   }
}

double scalar_prod(double vector1[], double vector2[], int size){
    int i;
    double output;
    for(i = 0; i < size; i++){
        output += vector1[i] * vector2[i];
    }
    return output;
}

double norm2(double vector[], int size){
    return sqrt(scalar_prod(vector, vector, size));
}