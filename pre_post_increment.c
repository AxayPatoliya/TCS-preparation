#include <stdio.h>

int main() {
  int a = 1;
  printf("a = %d\n", ++a); //a+1 will happend and then a+1 assigned to a
  printf("a = %d\n", a++); //a will remains same and then a+1 assigned to a
  printf("a = %d\n", a); //because of upper operation a will be a+1 = 3
  return 0;
}
