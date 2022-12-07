#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int *ptr = NULL; 
	
	printf("Enter the number of Elements in a Array\n");
	unsigned int arr_count = 0;
	scanf("%u", &arr_count);

	ptr = (int *) malloc(sizeof(int) * arr_count);

	printf("Array base Address : %p\n", ptr);
	ptr+1; 

	printf("Index 1 base Address :%p\n", ptr+1);

	return 0;
}
