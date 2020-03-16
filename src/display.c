#include <stdio.h>
#include <stdlib.h>


/*updates the display array and prints out the board*/
void update(short ref[9], char dis[9])
{
  system("clear");
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
}
