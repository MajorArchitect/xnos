#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*VARIABLE DECLARATIONS*/
  int ref[9] = {};
  char dis[9];
  int i;
  /*BEGINNING OF INSTRUCTIONS*/

  printf("XnOs Version 0\n");
  printf("Charlie Schild - Netlegends Software\n\n");
  for (int i = 0; i < 9; i++)
  {
    if (ref[i] == 0)
    {
      dis[i] = ' ';
    }

    else if (ref[i] == 1)
    {
      dis[i] = 'x';
    }

    else if (ref[i] == 2)
    {
      dis[i] = 'o';
    }

    else
    {
      dis[i] = '?';
    }

  }

  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", dis[0], dis[1], dis[2]);
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", dis[3], dis[4], dis[5]);
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", dis[6], dis[7], dis[8]);
  printf("     |     |     \n\n");

  printf("Choose a square [1 - 9]: ");
}
