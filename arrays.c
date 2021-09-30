//Arrays in C

#include <stdio.h>
#include <stdlib.h>

int main(){

    int sampleArray[11] = {1,2,3,4,5,6,7,8,9,10};
    //printing the specific value from an array using the index
    // printf("%d", sampleArray[3]);

    for(int i=0; i<=sizeof(sampleArray)/sizeof(int); i++){
      printf(" %d", sampleArray[i]);
    }

    //changing specific value of an array
    sampleArray[0] = 100;
    printf("\n%d", sampleArray[0]);

    //specifying the number element of elements in an array
    int limitedArray[3]; //this basically means is that this array has capacity to handle 3 elements
}
