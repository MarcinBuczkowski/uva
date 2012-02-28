#include <stdio.h>
#include <string.h>

char keymap[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, '\t',
                 '\n',0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, ' ', 0, 0, 0, 0, 0, 0, ';',
                 0, 0, 0, 0, 'M', '0', ',', '.', '9',
                 '`', '1', '2', '3', '4', '5', '6', '7', '8', 0,
                 'L', 0, '-', 0, 0, 0, 0, 'V', 'X', 'S',
                 'W', 'D', 'F', 'G', 'U', 'H', 'J', 'K', 'N', 'B',
                 'I', 'O', 0, 'E', 'A', 'R', 'Y', 'C', 'Q', 'Z',
                 'T', 0, 'P', ']', '[', 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main(void)
{
  char c;
  while ((c = getchar()) != EOF) {
    putchar(keymap[c]);
  }
  return 0;
}