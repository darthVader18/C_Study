#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;

  printf("Number of command line arguments passed: %d\n", argc);

  for (c = 0; c < argc; c++)
    printf("%d argument is %s\n", c + 1, argv[c]);

  return 0;
}
