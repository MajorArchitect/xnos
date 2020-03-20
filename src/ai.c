#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*fills a random ref with 2/o*/
void randplay(short ref[9])
{
  srand(time(NULL)); /*seeds rand() with the time*/
  int i = rand() % 9; /*sets i to a rand from 0-8*/
  while (ref[i] != 0) /*while the ref of the random number is not a blank...*/
  {
    i = rand() % 9; /*...randomise again.*/
  }
  ref[i] = 2; /*set that ref to the rand*/
}

int checkwin(short ref[9], int xo)
{
  for (int i = 0; i < 9; i++)
  {
    if ((i == 0) || (i == 1) || (i == 2)) /*if the checked square is on the top row...*/
    {
      if (ref[i] == xo) /*...and if it contains the target value...*/
      {
        if ((ref[i + 3] == xo) && (ref[i + 6] == xo)) /*...and if both squares below it also contain the target...*/
        {
          printf("Vertical win\n");
          //Winner!
          return 1;
        }
      }
    }
    if ((i == 0) || (i == 3) || (i == 6)) /*if the checked square is on the left side...*/
    {
      if (ref[i] == xo) /*...and if it contains the target value...*/
      {
        if ((ref[i + 1] == xo) && (ref[i + 2] == xo)) /*...and if both squares to its left also contain the target...*/
        {
          printf("Horizontal win\n");
          //Winner!
          return 1;
        }
      }
    }
    if (i == 4) /*if checked square is the middle...*/
    {
      if (ref[i] == xo) /*...and if it contains the target value...*/
      {
        if (((ref[i + 4] == xo) && (ref[i - 4] == xo)) || ((ref[i + 2] == xo) && (ref[i - 2] == xo)))
        {
          printf("Diagonal win\n");
          //Winner!
          return 1;
        }
      }
    }
  }
  return 0;
}
