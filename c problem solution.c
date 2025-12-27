
#include<stdio.h>
#include<stdlib.h>

struct blood{
	char name[20];
	char address[40];
	int age;
	int blood_type;
};
void add_info(struct blood);
void display(char*);
void lessthen25(char*);

int main(){
	lessthen25("Blood Donors Record.txt");
	return 0;
}
void display(char *file){
	FILE *fp;
	fp = fopen(file, "r");
	char str[20];
	while (fgets(str, 19, fp) != NULL)
		printf("%s", str);
	fclose(fp);
}

void lessthen25(char *file){
	FILE *fp;
	struct blood data;
	int age;
    int blood_type;
	char str[68];
	fp = fopen(file, "r");
	while (fgets(str, 67, fp) != NULL)
	{
		age = (str[62] - 48) * 10 + (str[63] - 48);
        bloodtype =str[65];
		if (age < 25 && blood_type ==2)
			printf("%s", str);
	}
	fclose(fp);
}

#include<stdio.h>
#include<string.h>

struct date{
	int d, m, y;
};

struct employee{
	char empcode[6];
	char empname[20];
	struct date join_date;
	float salary;
};

void display(char*);

void add_info(char*, char*, struct date, float);

void sortbydoj(char*);
void swap(struct employee*, struct employee*);

int main(){
	struct date d = {13, 1, 1995};
	add_info("EMP01","Siraj", d,  50000.00);
	d.d = 17; d.m = 5; d.y = 1994;
	add_info("EMP04","Karan", d,45000.00);
	d.d = 7; d.m = 7; d.y = 1995;
	add_info("EMP03","Deepak", d,45000.00);
	d.d = 2; d.m = 11; d.y = 1995;
	add_info("EMP02","Azad",d,45000.00);
	d.d = 15; d.m = 1; d.y = 2001;
	add_info("EMP04", "Vijay", d, 21000.00);
	d.d = 24; d.m = 5; d.y = 1993;
	add_info("EMP06", "Shanu", d, 55000.00);
	sortbydoj("Record.dat");
	return 0;
}


void display(char *file){
	FILE *fp;
	struct employee e;
	fp = fopen(file, "rb");
	while (fread(&e, sizeof(e), 1, fp) == 1){
		printf("\n%s", e.empcode);
		printf("\t%s", e.empname);
		printf("\t%d", e.join_date.d);
		printf("\t%d", e.join_date.m);
		printf("\t%d", e.join_date.y);
		printf("\t%f\n", e.salary);
	}
	fclose(fp);
}

void add_info(char *code, char *name, struct date doj, float salary){
	FILE *fp;
	fp = fopen("Record.dat", "rb+");
	if (fp == NULL)
		fp = fopen("Record.dat", "wb");
	struct employee e;
	strcpy(e.empcode, code);
	strcpy(e.empname, name);
	e.join_date = doj;
	e.salary = salary;
	fseek(fp, 0, SEEK_END);
	fwrite(&e, sizeof(e), 1, fp);
	fclose(fp);
}

void swap(struct employee *a, struct employee *b){
	struct employee temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sortbydoj(char *file){
	int i = 0, j, count;
	FILE *fp1;
	struct employee e[100], temp;
	fp1 = fopen(file, "rb");
	if (fp1 == NULL){
		puts("\nUnable to open file or the file do not exist.");
		exit(1);
	}
	while (1){
		if (fread(&e[i], sizeof(e[i]), 1, fp1) != 1)
			break;
		i++;
	}
	count = i;

	for (i = 0; i < count; i++){
		for (j = i + 1; j < count; j++)
{
			if (e[i].join_date.y >= e[j].join_date.y)
				if (e[i].join_date.y > e[j].join_date.y)
					swap(&e[i], &e[j]);
				else
					if (e[i].join_date.m >= e[j].join_date.m)
						if (e[i].join_date.m > e[j].join_date.m)
							swap(&e[i], &e[j]);
						else if (e[i].join_date.d >= e[j].join_date.d)
							swap(&e[i], &e[j]);
		}
	}
	printf("Employee Id\tName\tdd  mm  yyyy\tSalary\n");
	for (i = 0; i < count; i++){
		printf("\n%-12s", e[i].empcode);
		printf("\t%s", e[i].empname);
		printf("\t % 2d", e[i].join_date.d);
		printf("% 2d", e[i].join_date.m);
		printf("% 2d", e[i].join_date.y);
		printf("\t%2.2f\n", e[i].salary);

	}
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void add_info(char*, char*);
void display(char*);
void disbys(int, char*);

int main(){
	disbys(1, "Students.txt");
	return 0;
}

void add_info(char *name, char *file){
	FILE *fp;
	fp = fopen(file, "r+");
	if (fp == NULL)
		fp = fopen(file, "w");
	fseek(fp, 0, SEEK_END);
	fputs(name, fp);
	putc('\n', fp);
	fclose(fp);
}

void display(char *file){
	FILE *fp;
	char name[30];
	fp = fopen(file, "r");
	if (fp == NULL){
		printf("File do not exist.");
		exit(1);
	}
	while (fscanf(fp, "%s", name) != -1)
		puts(name);
	fclose(fp);
}

void disbys(int num, char *file){
	FILE *fp;
	int i;
	char name[30];
	fp = fopen(file, "r");
	if (fp == NULL){
		printf("File do not exist.");
		exit(2);
	}

	for (i = 1; fscanf(fp, "%s", name) != -1; i++){
		if (i == num){
			switch (num){
			case 1:
				printf("%dst name is : ", num);
				break;
			case 2:
				printf("%dnd case is : ", num); 
				break;
			case 3:
				printf("%drd name is : ", num); 
				break;
			default:
				printf("%dth name is : ", num);
			}
			printf("%s\n\n", name);
			break;
		}
	}
	if (fscanf(fp, "%s", name) == -1)
		printf("There's only %d names.\n", i);
	fclose(fp);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort_names(char**, int);
void swap(char*, char*);
int main(){
    char ch = 'i', *help[30], name[50], *p;
	int i, j, tot_names;
    FILE *fp;
	fp = fopen("Hi.c", "r+");
	if (fp == NULL){
		printf("Cannot open the file.\n");
		exit(1);
	}
	for (i = 0; ch != EOF; i++){
		ch = fgetc(fp);
		for (j = 0; ch != '\n'; j++){
			if (ch == EOF)
				break;
			name[j] = ch;
			ch = fgetc(fp);
		}
        name[j] = '\0';
		p = (char*)malloc(50);
		strcpy(p, name);
		help[i] = p;
	}
	tot_names = i - 1;

	sort_names(help, tot_names);
	for (j = 0; j <= tot_names; j++)
		puts(help[j]);

	fclose(fp);
return 0;
}
void swap(char *a, char *b){
	char temp[20];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}
void sort_names(char** name_list, int tot_names){
	int i, j, k = 0;
	for (i = 0; i <= tot_names; i++){
		for (j = i + 1; j <= tot_names; j++){
			for (k = 0; name_list[i][k] == name_list[j][k]; k++);
			if (name_list[i][k] > name_list[j][k])
				swap(name_list[j], name_list[i]);
		}
	}
}
