/* pi.c: monte carlo calculation of pi         */

/* author: James Holt                            */

/* modifications:                                */
/* 3/9/2023 EA initial version                   */

#include <stdio.h>
#include <stdlib.h>

        /* Main Function */

        

int main(void)
{
        srand(0);

        /* variable definitions */

        int s, number, counter, IN, out;
	double randomNumberx, randomNumbery, r, dl, dr, pi;

        /* Input */

        printf("Enter the radius of the circle: ");
        scanf("%lf", &r);
        printf("Enter the number of points: ");
	scanf("%d", &number);

	/* computation */

	s =  2*r;
        while (counter < number)
          {
	    counter += 1;
	    randomNumberx = ((double)rand())/((double)RAND_MAX ) * s;
	    randomNumbery = ((double)rand())/((double)RAND_MAX ) * s;

	    dl = (randomNumberx * randomNumberx) + ((randomNumbery - r) * (randomNumbery - r));
	    dr = ((randomNumberx - 2 * r) * (randomNumberx - 2 * r)) + ((randomNumbery - r) * (randomNumbery - r));
	    /* output */
  
	    if (  dl <= (r*r) ||  dr <= (r*r))
	      {
		printf("Point No.%d (x=%f,y=%f):      IN   \n", counter , randomNumberx, randomNumbery);
		IN += 1;
	      }
	    else
	      {
		printf("Point No.%d (x=%f,y=%f):      OUT   \n", counter , randomNumberx, randomNumbery);
	      }
	    
	  }

	pi = ( 4 * ((double)IN / number));
	out = number - IN;
	printf("/******In Summary******/\n");
	printf("points within circle areas: %d\n", IN);
	printf("points out of circle areas: %d\n", out);
        printf("pi = %f\n", pi);



	return 0;
}
