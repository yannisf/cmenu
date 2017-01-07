#include <stdio.h>
#include "main.h"

#define MESSAGE "LIST STRUCTURE"

int main()
{
  printf(MESSAGE);
  printf("\n");

  int option = -1;
  do {
    option = menu();
    if (option == 1) {
      append();
    } else if (option == 2) {
      print();
    } 
  } while (option != 3);

  return 0;
}

