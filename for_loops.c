//FOR LOOP in C

#include <stdio.h>
#include <stdlib.h>

int main(){
    char names[4]/*how much elements array may contains*/[10]/*length of the each elemnts*/ = {"Python", "JavaScript", "PHP", "C"};
    for (int i = 0; i<=3; i++){
        printf("%s\n", names[i]);
    }

    int favNums[] = {1,2,3,4,5,6,7,8,9,10};
    for(int j = 0; j < 10; j++){
        printf("%d", favNums[j]);
    }

    return 0;
}
