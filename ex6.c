#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};
	
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);
			
	printf("name each: %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3]);
	
	printf("name: %s\n", name);
	
	//setup numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	//setup name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
	
	//print them out initialized
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);
			
	printf("name each: %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3]);
	
	//print name as string
	printf("name: %s\n", name);
	
	//different way to use name
	char *diff = "Zed";
	
	printf("Different name: %s\n", diff);
	
	printf("diff each: %c %c %c %c\n",
			diff[0], diff[1],
			diff[2], diff[3]);
	
	return 0;
}