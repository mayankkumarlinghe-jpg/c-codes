
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data{
    int rollno;
	char name[20];
};

void add_info(int, char*);
void display(char*);
void update_list(char*);

int main(){
	add_info(1, "Azad Ansari");
	add_info(2, "Deepak Mathpal");
	add_info(3, "Rahul Khowal");
	add_info(4, "Siraj");
	add_info(5, "Priya Saxena");
	add_info(6, "Rajkumari");
	add_info(7, "Varun Taneja");
	add_info(8, "Manish Kumar");
	add_info(9, "Shabnam");
	update_list("Transaction.txt");
	display("New List.dat");
	return 0;
}

void add_info(int rollno, char *name){
	struct data e;
	FILE *fp;
	fp = fopen("Students.dat", "rb+");
	if (fp == NULL)
		fp = fopen("Students.dat", "wb");
	e.rollno = rollno;
	strcpy(e.name, name);
	fseek(fp, 0, SEEK_END);
	fwrite(&e, sizeof(e), 1, fp);
	fclose(fp);
}

void display(char *fname){
	FILE *fp;
	struct data e;
	fp = fopen(fname, "rb");
	if (fp == NULL){
		puts("Can't open the file.\nExiting...\n");
		exit(3);
	}
	while (fread(&e, sizeof(e), 1, fp) == 1)
		printf("%2d\t%-10s\n", e.rollno, e.name);
}

void update_list(char *tfile){
	FILE *tf, *mf, *uf;
	char code, name[20];
	int rollno, i;
	struct data dat_of_mf;
	tf = fopen(tfile, "r");
	if (tf == NULL){
		printf("Transaction file is not found");
		printf("\nexiting...\n");
		exit(1);
	}
	mf = fopen("Students.dat", "rb");
	if (mf == NULL){
		printf("\nMaster file is not found\nexiting...\n");
		exit(2);
	}
	uf = fopen("New List.dat", "wb+");
	while (1){
		code = fgetc(tf);
		if (code == 'D') {
			fseek(tf, 1, SEEK_CUR);
			rollno = fgetc(tf) - 48;
			while (1){
				fread(&dat_of_mf, sizeof(dat_of_mf), 1, mf);
				if (dat_of_mf.rollno < rollno)
					fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
				else
					break;
			}
			while (fgetc(tf) == '\n');
			fseek(tf, -1, SEEK_CUR);
		}
		else if (code == 'A'){
			fseek(tf, 1, SEEK_CUR);
			rollno = fgetc(tf) - 48;

			fseek(tf, 1, SEEK_CUR);
			for (i = 0; 1; i++){
				name[i] = fgetc(tf);
				if (name[i] == '\n' || name[i] == EOF){
					name[i] = '\0';
					break;
				}
			}
			dat_of_mf.rollno = rollno;
			strcpy(dat_of_mf.name, name);
			fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
		}
		else
		{
			while (fread(&dat_of_mf, sizeof(dat_of_mf), 1, mf) == 1)
				fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
			break;
		}
	}
	fclose(uf);
	fclose(mf);
	fclose(tf);
}
#include<stdio.h>
#include<string.h>

void display(char*);
void add_info(int, char*, float);
void transaction(int, char, float);

struct customer{
	int accno;
	char name[30];
	float balance;
};

int main(){
	add_info(1, "Siraj", 1000);
	puts("\n\t\tBefore Transaction");
	display("customer.dat");
	transaction(1, 'd', 1000);
	puts("\n\t\tAfter Transaction");
	display("customer.dat");
	return 0;
}

void display(char *file){
	FILE *fp;
	struct customer holder;
	fp = fopen(file, "rb");
	while (fread(&holder, sizeof(holder), 1, fp) == 1){
		printf("\n%d", holder.accno);
		printf(":\t%s", holder.name);
		printf("\t%f\n", holder.balance);
	}
	fclose(fp);
}

void add_info(int accno, char *name, float bal){
	FILE *fp;
	struct customer holder;
	fp = fopen("customer.dat", "rb+");
	if (fp == NULL)
		fp = fopen("customer.dat", "wb");
	fseek(fp, 0, SEEK_END);
	holder.accno = accno;
	strcpy(holder.name, name);
	holder.balance = bal;
	fwrite(&holder, sizeof(holder), 1, fp);
	fclose(fp);
}

void transaction(int accno, char ttype, float amount){
	FILE *fp, *temp;
	struct customer holder;
	fp = fopen("customer.dat", "rb");
	temp = fopen("temp.dat", "wb");
	while (fread(&holder, sizeof(holder), 1, fp) == 1){
		if (holder.accno == accno){
			switch (ttype){
			case 'd':
			case 'D':
				holder.balance += amount;
				break;
			case 'w':
			case 'W':
				if ((holder.balance - amount) < 100){
					printf("\nYour account balance is low.\n");
					printf("Transaction failed!!");
				}
				else
					holder.balance -= amount;
				break;
			default:
				puts("Wrong transaction type!!");
				puts("\nTry Again!!");
				fclose(fp);
				fclose(temp);
				remove("temp.dat");
				return;
			}
		}
		fwrite(&holder, sizeof(holder), 1, temp);
	}
	fclose(fp);
	fclose(temp);
	remove("customer.dat");
	rename("temp.dat", "customer.dat");
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Eow word[i] == ' ' || word[i] == ',' \
|| word[i] == '\n' || word[i] == '.'
int main(int ac, char *av[]){
	FILE *fp, *temp;
	int i, j;
	char word[10], ch;
	if (ac != 4){
		puts("Wrong number of arguements\n.");
		printf("Write like this : ");
		printf("\"change\" \"old_word\"");
		printf("\"new_word\" \"file_name\"\n");
		exit(1);
	}
	fp = fopen(av[3], "r");
	temp = fopen("temp.txt", "w");
	if (fp == NULL){
		perror("Error : ");
		exit(1);
	}
	for (i = 0; (word[i] = fgetc(fp)) != EOF; i++){
		if (Eow){
			ch = word[i];
			word[i] = '\0';
			if (!strcmp(av[1], word))
				fputs(av[2], temp);
			else
				fputs(word, temp);
			fputc(ch, temp);
			i = -1;
		}
	}
	fclose(fp);
	fclose(temp);
	remove(av[3]);
	rename("temp.txt", av[3]);
	return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int ac, char *av[]){
    int i, a, b;
	a = b = 0;
	if (ac != 4){
		puts("Wrong number of arguements");
		printf("\n.Write like this : ");
		printf("\"calc\" \"switch\"");
		printf("\"number 1\" \"number 2\"\n");
		exit(1);
        }
        for (i = 0; av[2][i] != '\0'; i++){
		a *= 10;
		a += av[2][i] - 48;
        }
        for (i = 0; av[3][i] != '\0'; i++){
		b *= 10;
        b += av[3][i] - 48;
        }
    switch (av[1][0]){
        case '+':
		printf("%d %c %d = %d", a, av[1][0], b, a + b);
		break;
        case '-':
		printf("%d %c %d = %d", a, av[1][0], b, a - b);
		break;
        case '/':
		printf("%d %c %d = %.2f", a, av[1][0], b, float(a) / float(b));
		break;
        case '*':
		printf("%d %c %d = %d", a, av[1][0], b, a * b);
		break;
        case '%':
		printf("%d %c %d = %d", a, av[1][0], b, a % b);
		break;
        case '<':
		if (a < b)
			printf("%d %c %d is True.", a, av[1][0], b);
		else
			printf("%d %c %d is False.", a, av[1][0], b);
		break;
        case '>':
		if (a > b)
			printf("%d %c %d is True.", a, av[1][0], b);
		else
			printf("%d %c %d is False.", a, av[1][0], b);
		break;
        case '=':
		if (a == b)
			printf("%d %c %d is True.", a, av[1][0], b);
		else
			printf("%d %c %d is False.", a, av[1][0], b);
		break;
	default:
		printf("Operator '%c' is not found.\n", av[1][0]);
	}
	return 0;
}*/

   #include<stdio.h>
   #include<string.h>

   /*Count total number of books in the library*/
   int count();

   void display(int);

   /*If the author name is same so the function strcmp returns a zero*/
   void giv_author(char*);
   void adbuk();

   /*Appears the title of the specified book*/
   void which1(int);

   /*Displays all the books serially accession number*/
   void albuk();

   struct library{
   	int an;/*Accession number*/
   	char title[50];
   	char author[30];
   	int price;
   	int flag;/*flag = 0 : Issued and,flag =  1: not issued*/
   }
   geclib[50] = {
   	1, "Let Us C", "Yashavant Kanethkar", 258, 1,
   	2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,
   	3, "Let Us C++", "Yashavant Kanethkar", 220, 1,
   	4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
   	5, "The Two Towers", "J. R. R. Tolkien", 560, 0,
   	6, "The Hobbit", "J. R. R. Tolkien", 550, 1,
   	7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0
   };

   int main(){
   	int ans = 1, an;
   	char auth[30];
   	while (ans != 7){
   		printf("\nYou are in menu section\n");
   		printf("\n1. Add Book Information");
   		printf("\n2. Display Book Information");
   		printf("\n3. List all books of given author");
   		printf("\n4. List the title of specified book");
   		printf("\n5. List the counts of the books in library");
   		printf("\n6. List the books in order of accession number");
   		printf("\n7. Exit");
   		printf("\n\n\t\tEnter you choice : ");
   		scanf("%d", &ans);
   		switch (ans){
   		case 1:
   			adbuk();
   			break;
   		case 2:
   			printf("\nEnter the accession number of the book : ");
   			scanf("%d", &an);
   			display(an);
			
   			break;
   		case 3:
   			while (getchar() != '\n');
   			printf("Enter the name of the author (case sensitive) : ");
   			gets_s(auth);
   			giv_author(auth);
			
   			break;
   		case 4:
   			printf("\nEnter the accession number of book : ");
   			scanf("%d", &an);
   			which1(an);
			
   			break;
   		case 5:
   			printf("\nTotal Number of books : %d", count());
			
   			break;
   		case 6:
   			albuk();
			
   			break;
   		case 7:
   			return 0;
   		default:
   			printf("\nWrong choice, Try Again!!");
			

   		}
   	}
   	return 0;
   }

   int count(){
   	int i = 0;
   	while (geclib[i].an)
   		i++;
   	return i;
   }

   void display(int i){
   	i--;/*To use i as index*/
   	printf("\n\n\n");
   	printf("\nAccession Number : %d", geclib[i].an);
   	printf("\nTitle : %s", geclib[i].title);
   	printf("\nAuthor : %s", geclib[i].author);
   	printf("\nPrice : %d", geclib[i].price);
   	if (geclib[i].flag)/*Flag : 0*/
   		printf("\nStatus : Issued");
   	else
   		printf("\nStatus : Available");/*Flag : 1*/
   }

   void giv_author(char *author){
   	int i = 0;
   	printf("\nBooks of \"%s\" are following : \n\n", author);
   	while (geclib[i].an){
   		if (!(strcmp(author, geclib[i].author)))
   			display(geclib[i].an);
   		i++;
   	}
   }

   void adbuk(){
   	int next = count();
   	geclib[next].an = next + 1;

   	/*fflush(stdin) or while(getch() != '\n'); to clear the buffer*/
   	while (getchar() != '\n');
   	printf("\nEnter the title of the book : ");
   	gets(geclib[next].title);
   	printf("\nEnter the author name of the book : ");
   	gets(geclib[next].author);
   	printf("\nEnter the price of the book : ");
   	scanf("%d", &geclib[next].price);
   	geclib[next].flag = 1;
   }

   void which1(int an){
   	int i = 0;
   	while (geclib[i].an){
   		if (geclib[i].an == an)
   		{
   			printf("\n\nTitle of the book : %s\n", geclib[i].title);
   			return;
 		}
 	}
 	printf("No any book found found\n");
 }

void albuk(){
 	int i = 0;
 	while (geclib[i].an){
 		display(i + 1);
 		i++;
 	}
 }


