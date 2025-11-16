#include <stdio.h>
#include <stdlib.h>



//create function for calculate potentiation of first line
void potentiation_firstLine(long int *t){
    long int k = 4; // exponent potentiation
    long int base; // base potentiation
    long int i = 0; // counter to potentiation
    long int result = 1; // result of potentiation
        while(i < k){
            base = 10;
            result = result * base;
            *t = result;
            i++;
        }
}

// create function for calculate N numbers

void calculatePotentiationOfN(long int *n){
    long int a = 18; // exponent potentiation
    long int baseN; // base potentiation
    long int j = 0; // counter to potentiation
    long int resultN = 11; // result of potentiation
        while(j < a){
            baseN = 10;
            resultN = resultN * baseN;
            *n = resultN;
            j++;
        }
}

int main(){
    
    
}