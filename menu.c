#include <stdio.h>

#define APPEND "1. Append"
#define PRINT "2. Print"
#define QUIT "3. Quit"
#define QUESTION "Option? "

int menu() {
  int option;

  printf(APPEND);
  printf("\n");
  printf(PRINT);
  printf("\n");
  printf(QUIT);
  printf("\n");
  printf(QUESTION);
  scanf("%d", &option);

  return option;
}
