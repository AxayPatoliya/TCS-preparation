#include <stdio.h>
#include <string.h> //helps us to find the length of the string using the function strlen();

// function to print the array of character(string)
void printString(char str[]) {
  for(int i=0; i<=strlen(str); i++){
    printf("%c", str[i]);
  }
}

int main() {
    char name[50] = "Axay Patoliya";
    for(int i = 0; i<=50; i++){
      printf("%c", name[i]);
    }

    puts(name);

    char role[50];
    gets(role);

    // printing string by calling function
    printString(role);


    puts(role); //second way to print the whole string
    return 0;
}
