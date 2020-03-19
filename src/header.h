/*updates the display array and prints out the board - display.c*/
void update(short ref[9], char dis[9]);

/*fills a random ref with 2/o*/
void randplay(short ref[9]);

/*checks to see if player xo(1/x, 2/o) has won*/
int checkwin(short ref[9], int xo);
