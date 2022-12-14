#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int *ptr = NULL; 
	ptr = (int *)malloc(sizeof(int));

	printf("%u\n", *ptr);


	return 0;
}
