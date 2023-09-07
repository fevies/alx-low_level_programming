#include <stdio.h>
#include <stdlib.h>
/**
 *main- programs entry point
 *@argc: count
 *@argv: argument vector
 *Return: exits with 0 or 1
 */
int main(int argc, char *argv[])
{
	int cents, num_coins, i;
	int total_coins = 0;
	int coin_counts[5];
	int coin_values[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = sizeof(coin_values) / sizeof(coin_values[0]);

	for (i = 0; i < num_coins; i++)
	{
		coin_counts[i] = 0;
	}
	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			coin_counts[i]++;
		}
	}
	for (i = 0; i < num_coins; i++)
	{
		total_coins += coin_counts[i];
	}
	printf("%d\n", total_coins);
	return (0);
}
