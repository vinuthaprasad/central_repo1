#include <stdio.h>

void fact()
{
  int c, n, fact = 1;
  echo "fact.c"

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
    fact = fact * c;

  printf("Factorial of %d = %d\n", n, fact);


}
