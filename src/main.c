#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "header.h"


int main()
{
  /*VARIABLE DECLARATIONS*/
  bool running = true;
  short ref[9] = {};
  char dis[9] = {};
  int i;
  /*BEGINNING OF INSTRUCTIONS*/

  printf("XnOs Version 0\n");
  printf("Charlie Schild - Netlegends Software\n\n");

  update(ref, dis); /*updates dis and prints the board*/

  while (running == true)
  {
    printf("Choose a square [1 - 9]: ");
    int choice;
    scanf("%d", &choice);
    /*handles invalid cases*/
    if (choice > 9 || choice < 1)
    {
      printf("Invalid choice. Pick again.\n");
    }

    ref[choice - 1] = 1;
    update(ref, dis);
    running = false;
  }
}
