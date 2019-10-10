#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc){
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}
	
	char *cities[] = {
		"Nairobi", "Mombasa", "Nakuru", "Kisumu"
	};
	
	int num_cities = 4;
	i = 0;
	while(i < num_cities) {
		printf("city %d: %s\n", i, cities[i]);
		i++;
	}
	
	return 0;
}