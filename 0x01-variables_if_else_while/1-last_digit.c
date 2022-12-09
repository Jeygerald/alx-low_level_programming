#include <studio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand (time (0));
	n = rand () - RAND_MAX /2;
	a = n % 10;
	if (n > 5)
	}
printf("last digit of %d is %d and is a greater tgan 5\n', n, a");
        }
        else if (a == 0)
{
	printf("last digit of %d is %d and is 0\n', n, a");
        }
        else
{
	printf("last digit of %d is%d and is 10\n', n, a");
	return
