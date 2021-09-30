#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 50
#define STRING_SIZE 100

// basic datatypes supported in C language
// 1. Basic datatypes
// 2. derived datatypes
// 3. enumerate datatypes
// 4. void datatypes

int main(){
  char string[ARRAY_SIZE][STRING_SIZE];
  int length;
  printf("How many names you want to add? - ");
  scanf("%d", &length);

  for (int i = 0; i < length; i++) {
    printf("Enter the name %d - ", i);
    // scanf("%[^\n]s", string[i]);
    scanf("%s", &string[i]);
    // char take[STRING_SIZE];
    // gets(take);
    // string[i][STRING_SIZE] = take;
    printf("\n");
  }

  printf("Strings are...\n");
  for (int i = 0; i < length; i++) {
    printf("String - %d | %s\n", i, string[i]);
  }

  return 0;
}
