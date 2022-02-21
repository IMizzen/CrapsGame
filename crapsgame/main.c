#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Rules:
    *Roll two dice.
    *Sum of the spots on two upward faces is calculated.
    *7 or 11 on first throw player wins.
    *2, 3 or 12 on first throw player loses.
    *4, 5, 6, 8, 9, 10 becomes players point.
    *Player must roll his point before rolling 7 to win.
*/

int main()
{
    int i, y, t=0, z=0;
    int winner, score, sScore;
    srand(time(NULL));

    i= 1 + (rand() % 6);
    y= 1 + (rand() % 6);

    printf("No more bets, Good luck.");

    printf("\nFirst dice is %d", i);
    printf("\nSecond dice is %d", y);

  if(i +y == 7 || i + y== 11){
        printf("\n\tYou win.");
  }
    else if(i +y == 2 || i +y == 3 || i +y == 12){
        printf("\n\tYou lose.");
  }
  /*This is endless loop for roll and find point and determine to players situation*/
      /**/  for(t; t<10;){
                if(i +y == 4 || i +y == 5 || i +y == 6 || i +y == 8 || i +y ==  9 || i +y ==  10){
                       score= i + y;
                /*This is endless loop for roll find point and determine to players situation*/
                    for(z; z <10;){
                     i= 1 + (rand() % 6);
                     y= 1 + (rand() % 6);
                     sScore= i + y;
                    if(score == sScore){
                        printf("\n\tYou win.");
                        break;
                      }
                       if(i + y == 7){
                        printf("\n\tYou lose.");
                        break;
                      }
                    }
                }
        }
        /**/

    getch();
    return 0;
}


