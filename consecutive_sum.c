#include <stdio.h>
#include <string.h>

int main(){
  int range;
  printf("Enter the length of an array - ");
  scanf("%d", &range);
  printf("%d", range);

  int arr[range];

  for (int i = 0; i < range; i++) {
    int elem;
    printf("enter the element number - %d >", i+1);
    scanf("%d", &elem);
    arr[i] = elem;
  }

  int sum = 0;
  int set[range];
  for (int i = 0; i < range; i++) {
    printf("%d ", arr[i]);
    sum = sum + arr[i];
    set[i] = arr[i];
  }

  if (sum == 0) {
    printf("\nfind cosecutive length");
  }
  else{
    printf("\ndoesen't find cosecutive length");
  }

  return 0;
}
