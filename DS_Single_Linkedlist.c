// program for implementation of a single linked list and operations on it

#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *first, *neu, *temp;

void create_node()
{
	neu = (struct node *) malloc(sizeof(struct node));
	printf("enter data ");
	scanf("%d",&neu->data);
	neu->link=NULL;
}

void display_list()
{
	if (first==NULL)    // checking for underflow (empty list)
	{
		printf("List is underflow...no nodes to display");
	}
	else
	{
		printf("\n Linked List values are\n");
		temp=first;
		while(temp!=NULL)
		{
			printf("\t%u(%d,%u)",temp,temp->data,temp->link);
			temp=temp->link;    // to move to next node
		}
/*		printf("\n Linked List values are \n");
		for(temp=first;temp!=NULL;temp=temp->link)
			printf("\t%d",temp->data);   */
	}
}

void insert_beginning()
{
	create_node();
	if (first!=NULL)
	{
		neu->link=first;
	}
	first=neu;
}

void insert_end()
{
	
}
	
void insert_position()
{
	
}

void delete_beginning()
{
	
}
	
void delete_end()
{
	
}

void delete_position()
{
	
}

void main()
{
	char ch;
	int cho;
	neu=first=temp=NULL;
	do
	{
		create_node();
		if (first==NULL)     // checking if neu is first node or not
		{
			first=temp=neu;
		}
		else
		{
			temp->link=neu;
			temp=neu;
		}
		printf("Add more nodes Y/N: ");
		fflush(stdin);  // to clear std input buffer
		scanf("%c",&ch);
	}while(ch=='y');
	display_list();
	do
	{
		printf("\n\n*** Single Linked List Operations ***");
		printf("\n 1 Add node at beginning");
		printf("\n 2 Add node at end");
		printf("\n 3 Add node at given position");
		printf("\n 4 Remove node from beginning");
		printf("\n 5 Remove node from end");
		printf("\n 6 Remove node from given position");
		printf("\n 7 List the nodes");
		printf("\n 8 Exit");
		printf("\n Enter your choice (1-8) : ");
		scanf("%d",&cho);
		if (cho==1)
			insert_beginning();
		else if (cho==2)
			insert_end();
		else if (cho==3)
			insert_position();
		else if (cho==4)
			delete_beginning();
		else if (cho==5)
			delete_end();
		else if (cho==6)
			delete_position();
		else if (cho==7)
			display_list();
		else if (cho==8)
			printf("\n Thank you");
		else
			printf("Invalid choice...retry");
	}while(ch!=8);
	printf("\n* * * End of Program * * *");
}

