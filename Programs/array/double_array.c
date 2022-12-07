#include<stdio.h>
#include<stdlib.h>

#define ROW 5 
#define COL 3

void print(int **p) {

	unsigned int i = 0; 
	unsigned int j = 0;

	for(i = 0; i < ROW; i++){
		for(j = 0; j < COL; j++) {
			printf("p[%u][%u] Value:%u \n", i, j, p[i][j]);

		}

	}

}

int main(void)
{

	int **ptr = NULL; 

	ptr = malloc(sizeof(int) * COL);
	
	unsigned int i = 0; 

	for(i = 0; i < COL; i++)
	*(ptr + i) = malloc(sizeof(int) * ROW);

	*(*(ptr + 0) + 0) = 1; 
	*(*(ptr + 0) + 1) = 2; 
	*(*(ptr + 0) + 2) = 3; 


	*(*(ptr + 1) + 0) = 4; 
	*(*(ptr + 1) + 1) = 5;
	*(*(ptr + 1) + 2) = 6; 

	*(*(ptr + 2) + 0) = 7;
	*(*(ptr + 2) + 1) = 8; 
	*(*(ptr + 2) + 2) = 9; 

	print(ptr);
	return 0;
}
