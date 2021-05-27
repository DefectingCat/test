#include <stdio.h>
#include <ctype.h>
#define SPACE ' '

int main(void)
{
  char ch;

  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
    {
      putchar(ch + 1);
    }
    else
    {
      putchar(ch);
    }
  }
  putchar(ch);

  return 0;
}