#include<stdio.h>

void eng_info(char*, char*);

struct engine{
	char serial[4];
	int yom;
	char mat[50];
	int qty;
}
maruti[10] = { "AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};

int main(){
	char from[5], to[5];
	printf("\nEnter the serial number, from where you want to start the list : ");
	scanf("%s", from);
	printf("\nEnter the serial at which you wan to end the list : ");
	scanf("%s", to);
	eng_info(from, to);
	return 0;
}

void eng_info(char *from, char *to){
	int i;
	printf("\n\t\t\t\t\tEngines Information\n");
	for (i = 0; maruti[i].serial[0] != *from; i++);
	while (1){
		printf("\nSerial Number : %s", maruti[i].serial);
		printf("\nYear Of Manufacture : %d", maruti[i].yom);
		printf("\nMaterail Used : %s", maruti[i].mat);
		printf("\nQuantity : %d\n", maruti[i].qty);
		if (i == 10)
			i = 0;
		i++;
		if (maruti[i].serial[0] == *to &&  maruti[i].serial[2] == *(to + 2)){
			printf("\nSerial Number : %s", maruti[i].serial);
			printf("\nYear Of Manufacture : %d", maruti[i].yom);
			printf("\nMaterail Used : %s", maruti[i].mat);
			printf("\nQuantity : %d\n", maruti[i].qty);
            break;
			return;
		}
	}
}
#include<stdio.h>
#include<stdlib.h>
#define Max 20

int compare(const void * a, const void * b);

struct cricketers
{
	int avrun;
	char name[30];
	int age;
	int notm;
}india[Max] = {
	122, "Sachin Tendulkar", 30, 67,
	97, "Virendra Sehwag", 35, 56,
	66, "Irfan Pathan", 32, 45,
	153, "Yusuf Pathan", 36, 21,
	101, "Yuvaraj Singh", 32, 45,
};

int main(){
	int i;
	qsort(india, 5, sizeof(struct cricketers), compare);
	for (i = 0; i < 5; i++){
		printf("Name : %s", india[i].name);
		printf("\nAge : %d", india[i].age);
		printf("\nTotal Test Matches played : %d", india[i].notm);
		printf("\nAverage Run : %d\n\n\n", india[i].avrun);
	}
	return 0;
}

int compare(const void * a, const void * b){
	return (*(int*)a - *(int*)b);
}
#include<stdio.h>

void printinfo(struct employee k);

struct employee{
	int code;
	char name[30];
	int doj[3];
}
mkl[50] = {

	001, "Shahnawaz", 13, 1,2006,
	004, "Amit Puri", 21, 6,2008,
	102, "Irfan Moin", 12, 5, 2012,
	131, "Shabnam", 16, 1, 2014
};

int main(){
	int i, d[3];
	printf("\nEnter the current date (dd mm yyyy) : ");
	scanf("%d%d%d", &d[0], &d[1], &d[2]);
	printf("\nEmployees with greater than or equal to 3 years of tenure\n\n");
	for (i = 0; i < 4; i++){
		if (d[2] - mkl[i].doj[2] > 3)
			printinfo(mkl[i]);
		else if (d[2] - mkl[i].doj[2] == 3){
			if (d[1] - mkl[i].doj[1] > 0)
				printinfo(hcl[i]);
			else if (mkl[i].doj[1] == d[1]){
				if (d[0] - mkl[i].doj[0] >= 0)
					printinfo(mkl[i]);

			}
		}
	}
	return 0;
}

void printinfo(struct employee e){
	printf("\nCode : %d", e.code);
	printf("\nName : %s", e.name);
	printf("\nDate of joining : %d-%d-%d\n", e.doj[0], e.doj[1], e.doj[2]);
}
#include<stdio.h>
struct marks{
	int j[3];
	int tot;
};

int main(){
	struct marks player[5];
	int i, j, max = 0;
	for (i = 0; i < 5; i++){
		printf("\n\t\tMarks for player-%d", i + 1);
		for (j = 0; j < 3; j++){
			printf("\nEnter marks entered by judge number %d : ", j + 1);
			scanf("%d", &player[i].j[j]);
		}
		player[i].tot = player[i].j[0] + player[i].j[1] + player[i].j[2];
		if (player[i].tot > max)
			max = player[i].tot;
	}
	for (i = 0; i < 5; i++){
		if (max == player[i].tot){
			printf("\nPlayer number %d is choosen as MVP\n", i + 1);
			return 0;
		}
	}
}

#include<stdio.h>

int main(){
	int wind;
	char cat;
	printf("\nEnter the speed of the wind (in miles/hour) : ");
	scanf("%d", &wind);
	if (wind < 73)
		printf("\nCool down man, this isn't a hurricane");
	else if (wind > 73 || wind < 96)
		cat = 'I';
	else if (wind > 95 || wind < 111)
		cat = 'II';
	else if (wind > 110 || wind < 131)
		cat = 'III';
	else if (wind > 130 || wind < 156)
		cat = 'IV';
	else
		cat = 'V';
	printf("\nThe wind speed belongs to the Hurricane Category '%c'", cat);
	return 0;
}
