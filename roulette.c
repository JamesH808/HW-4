/* roulette.c: roulette simulation         */

/* author: James Holt                        */

/* modifications:                            */
/* 3/4/2023 EA initial version              */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

        /* Main Function */

int main(void)
{
        srand(time(0));

        /* variable definitions */

        int number = 0, choice = 0, winningNumber = 0;
	double bet = 0, total = 0;

        /* Input */

        printf("Entering the casino, how much money do you have? ");
	scanf("%lf", &total);
	printf("We are playing Roulette, odd or even bets only.\n");
	while (total > 0)
	  {
	    printf("Place your bet!\n");
	    printf("Enter 1 for odd, 2 for even, 0 to quit: ");
	    scanf("%d", &choice);
	    if (choice == 0)
              {
                printf("You exit the casino with $%.2f\n", total);
                break;
              }
	    printf("How much money do you want to bet? ");
	    scanf("%lf", &bet);
        /* computation */

	    number = rand() % 37;
	    winningNumber = number % 2;

	/* output */
	    if (choice == 1)
	      {
		printf("You bet $%.2f on odd numbers\n", bet);
	      }
	    if (choice == 2)
	      {
		printf("You bet $%.2f on even numbers\n", bet);\
	      }
	    printf("The winning number is %d\n", number);
	    if ((winningNumber == 1 && choice == 1) || (winningNumber == 0 && choice == 2))
	      {
		printf("You win!\n");
		total += bet;
		printf("Your balance is $%.2f\n", total);
	      }
	    else
	      {
		printf("You lose!\n");
		total -= bet;
		printf("Your balance is $%.2f\n", total);
	      }
	  }
	
	if (total == 0)
	{
	  printf("You exit the casino with $%.2f\n", total);
	}
	
	return 0;
}

	
