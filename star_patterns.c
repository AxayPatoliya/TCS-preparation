#include <stdio.h>
#include <string.h>
int main()
{
  int n;
  printf("Enter the number - ");
  scanf("%d", &n);
  printf("entered number is %d \n", n);

  // simple pyramid star pattern (increasing triangle)
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("----------------------------------------\n");

  // reverse pyramid star pattern (decreasing triangle)
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("----------------------------------------\n");

  // right side triangle (consists of 1 decreasing blank triangle & 1 increasing star triangle)
  for (int i = 0; i < n; i++)
  {
    // blank triangle(decreasing)
    for (int j = i; j <= n; j++)
    {
      printf("  ");
    }
    // star triangle(increasing)
    for (int k = 0; k <= i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }
  printf("---------------------------------------\n");

  // right side triangle (consists of 1 increasing blank triangle & 1 decreasing star triangle)
  for (int i = 0; i < n; i++)
  {
    // blank triangle(increasing)
    for (int j = 0; j <= i; j++)
    {
      printf("  ");
    }
    // star triangle(decreasing)
    for (int k = i; k < n; k++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("----------------------------------------\n");

  //Reverse Hill pattern(consists of 1 increasing blank + 1 decreasing star + 1 decreasing star)
  for (int i = 0; i <= n; i++)
  {
    // blank triangle(increasing)
    for (int j = 0; j <= i; j++)
    {
      printf("  ");
    }
    // star triangle(decreasing)
    for (int k = i; k < n; k++)
    {
      printf("* ");
    }
    // star triangle(decreasing)
    for (int k = i; k <= n; k++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("----------------------------------------\n");

  // Hill pattern(consists of 1 decreasing blank + 1 increasing star + 1 increasing star)
  for (int i = 0; i <= n; i++)
  {
    // blank triangle(increasing)
    for (int j = i; j <= n; j++)
    {
      printf("  ");
    }
    // star triangle(decreasing)
    for (int k = 0; k < i; k++)
    {
      printf("* ");
    }
    // star triangle(decreasing)
    for (int k = 0; k <= i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("----------------------------------------\n");

  // diamond pattern
  for (int i = 0; i < n; i++)
  {
    // blank triangle(increasing)
    for (int j = i; j <= n; j++)
    {
      printf("  ");
    }
    // star triangle(decreasing)
    for (int k = 0; k < i; k++)
    {
      printf("* ");
    }
    // star triangle(decreasing)
    for (int k = 0; k <= i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }

  for (int i = 0; i <= n; i++)
  {
    // blank triangle(increasing)
    for (int j = 0; j <= i; j++)
    {
      printf("  ");
    }
    // star triangle(decreasing)
    for (int k = i; k < n; k++)
    {
      printf("* ");
    }
    // star triangle(decreasing)
    for (int k = i; k <= n; k++)
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
