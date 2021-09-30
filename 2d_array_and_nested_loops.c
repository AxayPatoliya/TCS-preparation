//2D ARRAYS AND NESTED LOOPS in C

#include <stdio.h>
#include <stdlib.h>

int main(){

    int parent[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", parent[i][j]);
        }
    }

    //this will print the physical memory address where "parent" variable stored
    printf("\n%p", &parent);

    return 0;
}
