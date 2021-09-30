#include <stdio.h>
#include <stdlib.h>


double add(double x, double y){
    return(x+y);
}

int main(int argc, char const *argv[]){
    for (int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    double ans, x, y;
    x = atof(argv[1]);
    y = atof(argv[2]);
    ans = add(x,y);
    printf("Addition of %lf and %lf is %lf", x, y, ans);

    return 0;
}
