//IF statements in C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkNum(int a, int b, int c){
    if(a>b && a>c){
        return(a);
    }
    else if(b>a && b>c){
        return(b);
    }
    else{
        return(c);
    }
}

int main(){

    int trial = checkNum(11,12,13);
    printf("%d is greater", trial);



}

