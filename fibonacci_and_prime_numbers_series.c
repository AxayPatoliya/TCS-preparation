#include <stdio.h>
int main() {

  // prime numbers
  for (int i = 2; i <= 30; i++) {
    int checkers = 0;
    int limit = 0;
    for (int j = 1; j <= i; j++) {
      if (i%j == 0) {
        checkers++;
        }
      }
    if (checkers <= 2) {
      printf("%d ", i);
    }
  }

  printf("\n");

  // fibonacci series
  int second_last = 0;
  int last = 1;
  int third;
  printf("%d %d ", second_last, last);
  for (int i = 0; i <= 7; i++) {
    third = second_last + last;
    second_last = last;
    last = third;
    printf("%d ", third);
  }
  return 0;
}
