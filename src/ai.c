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
