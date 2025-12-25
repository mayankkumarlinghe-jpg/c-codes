#include <stdio.h>
#include <string.h>
int main(void) {
   char *a[] = { "Mayank",
        "Aryan",
        "Madhav",
        "Dhanaraj",
        "Intel",
        "C "};
   for (int i = 0; i < 6; i++) {
      for (int j = i+1; j < 6; j++)
         if (strcmp(a[i], a[j]) > 0) {
            char* temp = a[i]; 
            a[i] = a[j]; 
            a[j] = temp; 
        }
       printf("%s\n", a[i]);
    }
return 0;
}
#include <stdio.h>
#include <string.h>
int main(void) {
    char a[6][10] = { "Mayank", "Aryan", "Madhav", "Dhanaraj", "Intel", "C" };
    char temp[10]; 
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            strcpy(temp, a[i]);
            strcpy(a[i], a[j]);
            strcpy(a[j], temp);
        }
        printf("%s ", a[i]); 
    }
    return 0;
}
#include<stdio.h>
#define Vowel line[i] == 'A' || line[i] == 'a' || line[i] == 'E' || line[i] == 'e' \
 || line[i] == 'I' || line[i] == 'i' || line[i] == 'O' || line[i] == 'o' || \
 line[i] == 'U' || line[i] == 'u'
void del_vow(char *line){
	int i, j;
    for (i = 0; line[i] != '\0'; i++)
    if (Vowel){
        for (j = i; line[j] != '\0'; j++){
            line[j] = line[j + 1];
			i--;}
            }
            }
int main(){
    char line[80];
    puts("Enter the line\n");
	gets(line);
	del_vow(line);
	printf("Line without vowels\n");
	puts(line);
	return 0;
}
#include<stdio.h>
#define Word (line[i] == 't' && line[i + 1] == 'h' && line[i + 2] == 'e')
void del_vow(char *line){
	int i, j;
    for (i = 0; line[i] != '\0'; i++)
    if (Word){   
        for (j = i; line[j] != '\0'; j++){
            line[j] = line[j + 3];
		}
        i-=3;
        }

}
int main(){
    char line[80];
    puts("Enter the line\n");
	gets(line);
	del_vow(line);
    puts(line);
}
#include<stdio.h>
#define Vowels str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' \
	|| str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' \
	|| str[i] == 'U'
int find(char * str){
	int i, count = 0;
	for (i = 0; str[i] != '\0'; i++){
	if (Vowels)
	{i++;
    if (Vowels){
        count++;}
		}
	}
	return count;
}
int main(){
	char str[100], tv;
	printf("Enter the text : ");
	gets(str);
	tv = find(str);
	printf("\nTotal number of vowels in successions are : %d\n", tv);
	return 0;
}
#include<stdio.h>
#include<string.h>
#define Line 6
void rep(char **str, char *str1){
	int i, j, k;
	k = 0;
	for (i = 0; i <Line ; i++){
        for (j = 0; str[i][j] != '\0';j++){
            if (str[i][j] == str1[k]){
				k++; 
				if (str1[k] == '\0')
                printf("Yes it is in string ");
                }
            }
        }
}
int main(){
    char *str[] = {
        "We will teach you how to...",
		"Move a mountain",
		"Level a building",
		"Erase the past",
		"Make a million",
		"...all through C!"
	};
    char str1[10];
	puts("Enter the word you want to check:");
	scanf("%s", str1);
	rep(str, str1);
return 0;
}
#include<stdio.h>
#define Eon 10
void rev(int *arr){
	int temp[9], i, max, j;
	for (i = 0; arr[i] != Eon; i++);
	max = i - 1;
	i = 0;
	for (j = max; j >= 0; j--, i++)
    temp[j] = arr[i];
	for (i = 0; i <= max; i++)
	arr[i] = temp[i];
}
int main(){
	int num, a = 0, arr[9], i;
	char word[90];
	printf("\nEnter the number (max. 9 digits) : ");
	scanf("%d", &num);
    for (i = 0; num != 0; i++){
        arr[i] = num % 10;
		num /= 10;
	}
	arr[i] = Eon;
	rev(arr);
	printf("\n\nNumber in words : ");
	for (i = 0; arr[i] != Eon; i++){
        if (arr[i + 5] == Eon || arr[i + 7] == Eon || arr[i + 9] == Eon || arr[i + 2] == Eon){
            if (arr[i] == 1){
                if (arr[i + 1] == 1)
					printf("Eleven ");
				if (arr[i + 1] == 2)
					printf("Twelve ");
				if (arr[i + 1] == 3)
					printf("Thirteen ");
				if (arr[i + 1] == 4)
					printf("Fourteen ");
				if (arr[i + 1] == 5)
					printf("Fifteen ");
				if (arr[i + 1] == 6)
					printf("Sixteen ");
				if (arr[i + 1] == 7)
					printf("Seventeen ");
				if (arr[i + 1] == 8)
					printf("Eighteen ");
				if (arr[i + 1] == 9)
					printf("Ninteen ");
				if (arr[i + 1] == 0)
					printf("Ten ");
				break;
			}
			if (arr[i] == 2) 
				printf("Twenty ");
			if (arr[i] == 3)
				printf("Thirty ");
			if (arr[i] == 4)
				printf("Fourty ");
			if (arr[i] == 5)
				printf("Fifty ");
			if (arr[i] == 6)
				printf("Sixty ");
			if (arr[i] == 7)
				printf("Seventy ");
			if (arr[i] == 8)
				printf("Eighty ");
			if (arr[i] == 9)
				printf("Ninety ");
		}
		else
		{
			if (arr[i] == 1)
				printf("One ");
			if (arr[i] == 2)
				printf("Two ");
			if (arr[i] == 3)
				printf("Three ");
			if (arr[i] == 4)
				printf("Four ");
			if (arr[i] == 5)
				printf("Five ");
			if (arr[i] == 6)
				printf("Six ");
			if (arr[i] == 7)
				printf("Seven ");
			if (arr[i] == 8)
				printf("Eight ");
			if (arr[i] == 9)
				printf("Nine ");
		}

		if (arr[i + 8] == Eon)
			printf("Crore ");
		if (arr[i + 6] == Eon)
			printf("Lac ");
		if (arr[i + 4] == Eon)
			printf("Thousand ");
		if (arr[i + 3] == Eon)
			printf("Hundred ");
	}
	return 0;
}
#include<stdio.h>

struct studata{
	int roll;
	char name[50];
	char depart[50];
	char course[20];
	int yoj;
}
nos[450] = { 03, "Kishor", "IT", "B.tech", 2014,
10, "Mohammad Siraj Alam", "Computer Science", "B.Tech", 2014,
53, "Deepak", "Computer Applications", "BCA", 2013,
13, "Karan", "Mechanical", "Diploma", 2013,
1, "Aakash", "Tool and Die", "Diploma", 2012,
2, "Ramesh", "IT", "B.tech", 2014
};
void sy(int year){
	int i;
	printf("\n\t\tYear of joining : %d\n\n", year);
	for (i = 0; i <= 450; i++){
		if (nos[i].yoj == year){

			printf("\nRoll Number : %d", nos[i].roll);
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
		}
	}
}
void sd(int enroll){
	int i;
	printf("\nRoll number : %d", enroll);
	for (i = 0; i <= 450; i++){
		if (nos[i].roll == enroll){
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
			printf("\nYear of joining : %d\n", nos[i].yoj);
		}
	}
}
int main(){
	int yoj, roll;
	printf("\nEnter year of joining of the students : ");
	scanf("%d", &yoj);
	sy(yoj);
	printf("\nEnter the roll number of the studnet you want from data : ");
	scanf("%d", &roll);
	sd(roll);
return 0;
}
#include<stdio.h>

void action(int, int, int);

void below100();

struct acc_holder{
	long int acc_num;
	char name[30];
	int bal;
} 
mkl[200] = { 1, "Siraj", 1000000,
2, "Azad", 1233044,
3, "Deepak", 99,
4, "Rihan", 33,
5, "Rahul Khowal", 200000
};

int main(){
	int accnum, amount, code;
	printf("\nEnter your account number : ");
	scanf("%d", &accnum);
	printf("Enter 1 for deposit and 0 for withdrawal : ");
	scanf("%d", &code);
	if (code){
		printf("\nEnter amount to deposit : ");
		scanf("%d", &amount);
	}
	else{
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
	}
	action(accnum, amount, code);
	printf("All members with account balance less than 100 are following : ");
	below100();
	return 0;
}

void below100(){
	int i;
	for (i = 0; i < 200; i++){
		if (mkl[i].bal < 100 && mkl[i].bal > 0){
			printf("\nName : %s", mkl[i].name);
			printf("\nAccount Number : %d\n\n", mkl[i].acc_num);
		}
	}
}

void action(int accnum, int amount, int code){
	int i;
	for (i = 0; i < 200; i++)
		if (mkl[i].acc_num == accnum)
			break;
	if (!code){
		if (mkl[i].bal - amount < 100){
			printf("\nThe balance is insufficient for the specified withdrawal");
			return;
		}
		else{
			mkl[i].bal -= amount;
			printf("\nYour new account balance is : %d", mkl[i].bal);
		}
	}
	else{
		mkl[i].bal += amount;
		printf("\nYour new account balance is : %d", mkl[i].bal);
	}

}
