#include <stdio.h>

unsigned long long int fibonacci(unsigned int n); //function prototype

int main(void)
{
		unsigned int number;
		
		printf("%s", "Enter an Integer: ");
		scanf("%u", &number);
		
		unsigned long long int result = fibonacci(number);
		
		printf("Fibonnacci(%u) = %llu\n", number, result);
		
}

unsigned long long int fibonacci(unsigned int n)
{
	//base case
	if (n == 0 || n == 1) {
		return n;
	} 
	else {
			return fibonacci(n - 1) + fibonacci (n - 2);
	}
}
