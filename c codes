struct node{
    int data;
    struct node* next;
};


#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<Windows.h>
#define GetSize (struct node*)malloc(sizeof(struct node))

void insert(struct node**, int);
void del(struct node**, int);
void display(struct node*);

struct node
{
	int data;
	struct node* next;
};

int main()
{
	char ans = 'y';
	int num, exit = 1, action;
	struct node *start = NULL;
	printf("\nHello all, this program is of linked list, so go ahead and make your limked list\n\n");
	while (ans == 'y')
	{
		printf("\nEnter the data : ");
		scanf("%d", &num);
		insert(&start, num);
		printf("\nWant to enter another number (y/n) : ");
		while (getchar() != '\n');
		scanf("%c", &ans);
	}
	system("cls");
	while (exit != 0)
	{
		system("cls");
		display(start);
		printf("\n\n\nYou are in menu section\n\n");
		printf("\n0 : Exit\n1 : Insert\n2 : Delete\n3 : Display");
		printf("\n\n\nEnter your choice : ");
		scanf("%d", &action);
		switch (action)
		{
		case 0:
			printf("\nYou are exiting. . . .");
			_getch();
			return 0;
		case 1:
			printf("\nEnter number : ");
			scanf("%d", &num);
			insert(&start, num);
			break;
		case 2:
			printf("\nEnter number to delete : ");
			scanf("%d", &num);
			del(&start, num);
			break;
		case 3:
			display(start);
			break;
		default:
			printf("\nYou have entered a wrong option\,Try againA!!\n");
			exit = 1;
		}
	}
	_getch();
	return 0;
}

void insert(struct node **start, int num)
{
	struct node *help = NULL, *curr = NULL;
	help = GetSize;
	help->data = num;/*This is our new node.*/
	help->next = NULL;
	
	if (*start == NULL)/*Inserting the first element*/
	{
		*start = help;
		return;
	}

	/*Finding the position for the number to insert*/
	for (curr = *start; curr->next != NULL; curr = curr->next);

	curr->next = help;
}

void del(struct node **start, int num)
{
	struct node *curr = *start, *pre = NULL;

	/*Finding the data to be deleted */
	while (curr->data != num)
	{
		pre = curr;
		curr = curr->next;

		/*List ends and the number nor found.*/
		if (curr == NULL)
			break;
	}

	/*Deleting the first node*/
	if (curr == *start)
		*start = curr->next;
	else if (curr == NULL)/*Number not found so just return*/
	{
		printf("\nNumber is not present in the list.");
		return;
	}
	else/*Deleting in between or last node*/
		pre->next = curr->next;

	free(curr);/*Deletion*/
}

void display(struct node *start)
{
	struct node *i = NULL;
	printf("\nYour list\n");
	for (i = start; i != NULL; i = i->next)
		printf("%d\t", i->data);
}

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<Windows.h>

#define GetSize (struct node*)malloc(sizeof(struct node))

void add(struct node**, struct node**, int);
int del(struct node**, struct node**);
void display(struct node*);

struct node
{
	int data;
	struct node* next;
};

int main()
{
	char ans = 'y';
	int num, exit = 1, action;
	struct node *start = NULL, *end = NULL;
	printf("\nHello all, this program is of queue using linked list, ");
	printf("so go ahead and make your linked list that wil saved in a queue.\n\n");
	while (ans == 'y')
	{
		printf("\nEnter the data : ");
		scanf("%d", &num);
		add(&start, &end, num);
		printf("\nWant to enter another number (y/n) : ");
		while (getchar() != '\n');
		scanf("%c", &ans);
	}
	display(start);
	system("cls");
	while (exit != 0)
	{
		display(start);
		printf("\n\n\nYou are in menu section\n\n");
		printf("\n0 : Exit\n1 : Add\n2 : Remove\n3 : Display");
		printf("\n\n\nEnter your choice : "); +
			scanf("%d", &action);
		switch (action)
		{
		case 0:
			printf("\nYou are exiting. . . .");
			_getch();
			return 0;
		case 1:
			printf("\nEnter number : ");
			scanf("%d", &num);
			add(&start, &end, num);
			display(start);
			system("cls");
			break;
		case 2:
			system("cls");
			if (num == NULL)
			{
				printf("\nQueue is empty!!");
				break;
			}
			num = del(&start, &end);
			printf("\n%d has been extracted.\n\n", num);
			break;
		case 3:
			display(start);
			break;
		default:
			printf("\nYou have entered a wrong option\,Try againA!!\n");
			exit = 1;
		}
	}
	_getch();
	return 0;
}

void add(struct node **start, struct node **end, int num)
{
	struct node *help = NULL;
	help = GetSize;
	help->data = num;
	help->next = NULL;
	if (*start == NULL)
	{
		*start = help;
		*end = help;
		return;
	}
	(*end)->next = help;
	*end = help;
}

int del(struct node **start, struct node **end)
{
	struct node *temp;
	int num;
	temp = GetSize;
	if (*start == NULL)
		return NULL;
	temp = *start;
	num = temp->data;

	*start = (*start)->next;

	free(temp);
	return num;
}

void display(struct node *start)
{
	struct node *a = start;
	while (a != NULL)
	{
		printf("%d\t", a->data);
		a = a->next;
	}
}


#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<Windows.h>

#define GetSize (struct node*)malloc(sizeof(struct node))

void insert(struct node**, int);
void del(struct node**, int);
void display(struct node*);

struct node
{
	int data;
	struct node* next;
};

int main()
{
	char ans = 'y';
	int num, exit = 1, action;
	struct node *start = NULL;
	printf("\nHello all, this program is of linked list, so go ahead and make your limked list\n\n");
	while (ans == 'y')
	{
		printf("\nEnter the data : ");
		scanf("%d", &num);
		insert(&start, num);
		printf("\nWant to enter another number (y/n) : ");
		while (getchar() != '\n');
		scanf("%c", &ans);
	}
	system("cls");
	while (exit != 0)
	{
		display(start);
		printf("\n\n\nYou are in menu section\n\n");
		printf("\n0 : Exit\n1 : Insert\n2 : Delete\n3 : Display");
		printf("\n\n\nEnter your choice : ");
		scanf("%d", &action);
		switch (action)
		{
		case 0:
			printf("\nYou are exiting. . . .");
			_getch();
			return 0;
		case 1:
			system("cls");
			printf("\nEnter number : ");
			scanf("%d", &num);
			insert(&start, num);
			display(start);
			break;
		case 2:
			system("cls");
			printf("\nEnter number to delete : ");
			scanf("%d", &num);
			del(&start, num);
			display(start);
			break;
		case 3:
			display(start);
			break;
		default:
			printf("\nYou have entered a wrong option\,Try againA!!\n");
			exit = 1;
		}
	}
	_getch();
	return 0;
}

void insert(struct node **start, int num)
{
	struct node *help = NULL, *curr = NULL, *pre = NULL;
	help = GetSize;
	help->data = num;/*This is our new node.*/
	if (*start == NULL)/*Inserting the first element*/
	{
		help->next = NULL;
		*start = help;
		return;
	}

	for (curr = *start; curr->data <= num; pre = curr, curr = curr->next)
		if (curr->next == NULL)
			break;
	
	if (curr == *start && num < curr->data)
	{
		help->next = *start;
		*start = help;
	}
	else if (curr->next == NULL && num > curr->data)
	{
		curr->next = help;
		help->next = NULL;
	}
	else/*Insertion in between*/
	{
		pre->next = help;
		help->next = curr;
	}

}

void del(struct node **start, int num)
{
	struct node *curr = *start, *pre = NULL;
	while (curr->data != num)
	{
		pre = curr;
		curr = curr->next;
		if (curr == NULL)
			break;
	}
	if (curr == *start)
		*start = curr->next;
	else if (curr == NULL)
	{
		printf("\nNumbe is not present in the list.");
		return;
	}
	else  
		pre->next = curr->next;
	free(curr);        

void display(struct node *start)
{
	struct node *i = NULL;
	printf("\nYour list\n");
	for (i = start; i != NULL; i = i->next)
		printf("%d\t", i->data);
}
