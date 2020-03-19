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

  while (running == true)
  {
    printf("Choose a square [1 - 9]: "); /*prompts human to play*/
    scanf("%d", &choice);
    /*handles invalid cases*/
    if (choice > 9 || choice < 1)
    {
      printf("Invalid choice. Pick again.\n");
    }

    ref[choice - 1] = 1;
    update(ref, dis);
    randplay(ref);
    update(ref, dis);

    running = false;
  }
}
