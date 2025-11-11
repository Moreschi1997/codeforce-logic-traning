#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//create function for calculate potentiation of first line
void potentiation_firstLine(long int *t){
    *t = 1;
    long int a = 10; // base potentiation
    long int k = 4;  // exponent potentiation
    long int i = 0; // counter to potentiation
        while(i <= k){
            *t = a * k;
            *t = *t * k;
            i++; 
        }

}

// create function for calculate N numbers

void calculatePotentiationOfN(long int *n){
    *n = 11;
    long int b = 10; // base potentiation
    long int c = 18; // exponent potentiation
    long int j = 0; // counter to potentiation
        while(j <= c){
            *n = b * c;
            *n = *n * c;
            j++;
        }
}

int main(){
    
}