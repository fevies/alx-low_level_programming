#include <stdlib.h>
#include <time.h>
/**
  *
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if	(n > 5)
	{
		printf("%d and is greater than 5",n);
	}
	else if	(n == 0)
	{
		printf("%d and is 0",n);

	}
	else	(n < 6 && n != 0)
	{
		printf("%d and is less than 6 and 0",n);
	}
	return (0);
}
