#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 20; i++)
	{
		printf("%10d", 1 + (rand() %6));

		if (i % 5 == 0) 
		{
			puts ("");
		}
	}
}
