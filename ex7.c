#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	//Print each string in argv
	for(i = 1; i < argc; i++){
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	//custom array of strings
	char *cities[] = {
		"Nairobi", "Mombasa", "Nakuru", "Kisumu"
	};
	
	int num_cities = 4;
	
	for(i = 0; i < num_cities; i++) {
		printf("city %d: %s\n", i, cities[i]);
	}
	
	return 0;
}