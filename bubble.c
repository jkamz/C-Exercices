#include <stdio.h>
#define SIZE 10

int main()
{
	int arr[SIZE] = {10,1,5,7,6,2,3,8,4,9};
	
	// Print before sorting
	puts("Unsorted array is: ");
	for(int i = 0; i < SIZE; i++)
	{
		printf("%d", arr[i]);
	}
	
	printf("\n");
	
	// Pass through array comparing successive pairs
	// Control for passes which are equal to size - 1
	for(int pass = 1; pass < SIZE; pass++)
	{
		// Control for swaps
		for(size_t i = 0; i < SIZE - 1; i++)
		{
			if(arr[i] > arr[i + 1])
			{
				int hold = arr[i];
				arr[i] = arr[i +1];
				arr[i+1] = hold;
			}
		}
	}
	
	// Print after sorting
	puts("Sorted array is: ");
	for(int i = 0; i < SIZE; i++)
	{
		printf("%d", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}
