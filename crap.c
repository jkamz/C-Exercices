#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randDice(void);
const char* checkSum (int sum);

int main()
{
	srand(time(NULL));

	int sum;
	sum = randDice();



	const char* result = checkSum(sum);
	puts(result);
}

int randDice(void)
{
	int face1 = 1 + (rand() % 6);
	int face2 = 1 + (rand() % 6);
	printf("Player chose %d + %d\n", face1, face2);
	int sum = face2 + face1;
	return sum;
}

const char* checkSum (int sum){
	if (sum == 7 || sum == 11)
	{
		return "player won";
	}

	else if (sum == 2 || sum == 3 || sum == 12)
	{
		return "player lost";
	}

	int point = sum;
	int sum2 = randDice();

	while (sum2 != point)
	{
		if (sum2 == 7)
		{
			return "player lost";
		}

		sum2 = randDice();

	}

	return "player won";
}