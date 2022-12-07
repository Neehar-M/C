#include<stdio.h>
#include<stdlib.h>


struct node {

	unsigned int value;
	struct node *next;

}; 

struct node *head; 



void create_sll(int count) {

	struct node *temp = NULL;
	struct node *current = NULL; 

	unsigned int i = 0; 
	if (1 == count) {

		temp = (struct node *)malloc(sizeof(struct node));

		if (NULL != temp) {
			
			printf("Enter the Value for Node:\n");			
			scanf("%u", &temp->value);
			
			temp->next = NULL; 
			
			head = temp; 	
		}
		

		
	}

	if(count >= 2){
	
		temp = (struct node *)malloc(sizeof(struct node));

		if(NULL != temp) {
			
			printf("Enter the value for Node :\n");
			scanf("%u", &temp->value);
			temp->next = NULL; 

			head = temp; 

		}

		for(i = 2; i <=count; i++) {

			current = (struct node *)malloc(sizeof(struct node));		
			
			if(current != NULL) {

				printf("Enter the Value for Node:\n");
				scanf("%u", &current->value);

				current->next = NULL;
				
				temp->next = current; 
				
				temp = current; 
			}


		}
	}


}

void print_sll(void) {

	struct node *temp = NULL;

	temp = head; 

	unsigned int i = 1;

	printf("Printing the nodes in SLL\n");
	
	while(temp != NULL){
		
		printf("Node:%u Value:%u \n", i, temp->value);
		i++;
		temp =  temp->next;
	}


}

int main(void)
{

	int count = 0; 
	printf("Program for the SLL with Create & Print Options\n");

	printf("Enter the number of Nodes in SLL\n");
	scanf("%u", &count);

	create_sll(count);

	print_sll();
	
	return 0;
}
