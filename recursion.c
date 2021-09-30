// Recursion in C

#include <stdio.h>

// factorial using recursion algorithm
int factorial(int n){
  if (n==0) {
    return 1;
  }else{
    return (n*factorial(n-1));
  }
}

// factorial using looping
int fact_loop(int num){
  int final_ans = 1;
  for (int i = 1; i<=num; i++){
    final_ans = final_ans*i;
  }
  printf("factorial(using loop) of %d is %d\n", num, final_ans);
}

int main() {
  printf("%s", "Enter the number-");
  int inp, fact_ans;
  scanf("%d", &inp);
  fact_ans = factorial(inp);
  printf("factorial(using recursion) of number %d is %d\n", inp, fact_ans);

  // factorial using loop
  fact_loop(inp);
  return 0;
}
