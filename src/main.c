#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "header.h"


int main()
{
  /*VARIABLE DECLARATIONS*/
  bool running = true;
  int choice;
  short ref[9] = {}; /*the reference of what squares have 0, 1, or 2*/
  char dis[9] = {}; /*the char array that prints the actual ' ', 'x', or 'o'*/

  /*BEGINNING OF INSTRUCTIONS*/
  system("clear");
  printf("XnOs Version 0\n");
  printf("Charlie Schild - Netlegends Software\n\n");
  printf("Press a key to start\n");
  getchar();

  update(ref, dis); /*updates dis and prints the board*/

  while (true)
  {
    printf("Choose a square [1 - 9]: "); /*prompts human to play*/
    scanf("%d", &choice);
    /*handles invalid cases*/
    while ((choice > 9 || choice < 1) || (ref[choice - 1] != 0))
    {
      printf("Invalid choice. Pick again.\n");
      printf("Choose a square [1 - 9]: ");
      scanf("%d", &choice);
    }

    ref[choice - 1] = 1; /*puts a 1/x in the square you chose*/
    update(ref, dis); /*updates the board*/
    if (checkwin(ref, 1) == 1) /*checks to see if x has won*/
    {
      printf("Player X wins!\n");
      return 0;
    }
    randplay(ref);
    update(ref, dis);
    if (checkwin(ref, 2) == 1) /*checks to see if o has won*/
    {
      printf("Player O wins!\n");
      return 0;
    }

  }

  return 0;
}
