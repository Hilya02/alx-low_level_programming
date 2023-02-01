/*
 * File: 0-positive_or_negative.c
 * Auth: Hilya T Ntinda
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
<<<<<<< HEAD
 *
=======
>>>>>>> 84d1d0779413a2d2e965759ac33d1f26262706f2
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

<<<<<<< HEAD
		srand(time(0));
			n = rand() - RAND_MAX / 2;

				if (n > 0)
							printf("%d is positive\n", n);
					else if (n < 0)
								printf("%d is negative\n", n);
						else
									printf("%d is zero\n", n);

							return (0);
=======
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
>>>>>>> 84d1d0779413a2d2e965759ac33d1f26262706f2
}
