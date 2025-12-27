

#include<stdio.h>
struct dmy{
	int date;
	int month;
	int year;
};
int datcmp(struct dmy a, struct dmy b){
	if (a.date == b.date && a.month == b.month && a.year == b.year)
		return 1;
	else
		return 0;
}

int main(){
	struct dmy a, b;
	int dat;
	printf("\nEnter the first date (dd mm yyyy) : ");
	scanf("%d%d%d", &a.date, &a.month, &a.year);
	printf("\nEnter the second date (dd mm yyyy) : ");
	scanf("%d%d%d", &b.date, &b.month, &b.year);
	dat = datcmp(a, b);
	if (dat)
		printf("\nThe dates are  same\n");
	else
		printf("\nThe dates are not same\n");
	return 0;
}
#include <stdio.h>
int getint(){
    int a;
    scanf("%d",&a);
    return a;
}
int main(){
    int a;
    printf("Enter a number:");
    a = getint();
    printf("You entered %d\n",a);

}
#include<stdio.h>
#include<stdlib.h>
float getfloat(){
    char f[10];
    scanf("%s",f);
    float a = atof(f);
    return a;
}
int main(){
    printf("Enter a float value ");
    float a = getfloat();
    printf("%f\n",a);
}
#include<stdio.h>
#include<string.h>
  char m[50];
int xgets(){
    scanf("%[^\n]s", m);
}
int xputs(){
    int i=0;
    while(m[i]!='\0'){
        printf("%c",m[i]);
        i++;
    }
}

int main(){
    printf("Enter the string: ");
    xgets();
    xputs();
}
#include<stdio.h>
 #define MAX 10
 void lAdd(int *l, int *q, int *r, int num);
 void rAdd(int *l, int *q, int *r, int num);
 void show(int *q, int *rside);
 int rFetch(int *l, int *q, int *r);
 int lFetch(int *l, int *q, int *r);

 int main(){
 	int que[MAX];
 	int left, right;
 	left = right = -1;

 	rAdd(&left, que, &right, 10);
 	rAdd(&left, que, &right, 20);
 	rAdd(&left, que, &right, 30);
 	show(que, &right);

 	lAdd(&left, que, &right, 5);
 	show(que, &right);

 	lFetch(&left, que, &right);
 	show(que, &right);

 	rFetch(&left, que, &right);
 	show(que, &right);
 return 0;
 }
 void rAdd(int *lside, int *q, int *rside, int num){
 	if (*rside == MAX - 1){
 		printf("\nDequeue is full, no more insertion is possible.\n");
 		return;
 	}
 	if (*rside == -1)
 		*rside = 0;
 	else
   		(*rside)++;
   	q[*rside] = num;
   }
 void lAdd(int *lside, int *q, int *rside, int num){
 	int i;
 	if (*rside == MAX - 1){
 		printf("\nDequeue is full, no more insertion is possible.\n");
   		return;
   	}
       for (i = *rside; i >= 0; i--)
   		q[i+1] = q[i];
           q[0] = num;
           if (*lside == -1)
   		*lside = 0;
           (*rside)++;
   }
   void show(int *q, int *rside){
   	int i;
       printf("\n\nList\n");
   	for (i = 0; i <= *rside; i++)
   		printf("%d\t", q[i]);
   	printf("\n\n");
   }
   int lFetch(int *lside, int *q, int *rside){
   	int item = q[0], i;
   	if (*rside == -1){
   		printf("\nList is empty.\n");
   		return 0;
   	}
   	for (i = 0; i < *rside; i++)
   		q[i] = q[i + 1];
   	(*rside)--;
   return item;
   }
   int rFetch(int *lside, int *q, int *rside){
   	if (*rside == -1){
   		printf("\nList is empty.\n");
   		return 0;
   	}
   	int item = q[*rside];
   	(*rside)--;
   	return item;
   }
#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *p;
    char ch; 
    p = fopen("Hi.c", "r");
    if (p == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
     int c=0;
    while ((ch = fgetc(p)) != EOF) {
         printf("%c", ch);
         if(ch == '\n'){
        c+=1;
        printf("%d", c);}
    }
    fclose(p);
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f1, *f2;
	char ch, buffer[10];
	f1 = fopen("Hi.c", "a+");
	if (f1 == NULL){
		printf("File do not exist or can't be open");
		exit(1);
	}
	f2 = fopen("Thanks.c", "r+");
	if (f2 == NULL){
		printf("File do not exist or can't be open");
		exit(2);
	}
	fseek(f1, 0, SEEK_END);
	ch = fgetc(f2);
	while (ch != EOF){
		fputc(ch, f1);
		ch = fgetc(f2);
	}
	rewind(f1);
	while (fgets(buffer, 9, f1) != NULL)
		printf("%s", buffer);

	fclose(f1);
	fclose(f2);
return 0;
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[50];
	FILE *f1, *f2;
	f1 = fopen("Thanks.c", "r");
	f2 = fopen("Hi.c", "w");
	while (fgets(str, 49, f1) != NULL){
		_strupr(str);
		fputs(str, f2);
	}
    fclose(f1);
    fclose(f2);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FOUND (strcmp(word, "a") == 0 || strcmp(word, "an") == 0\
|| strcmp(word, "the") == 0 || strcmp(word, "A") == 0\
|| strcmp(word, "An") == 0 || strcmp(word, "The") == 0)

void delart(char*);

int main(){
	delart("Hi.c");
	return 0;
}
void delart(char *file){
	FILE *fp, *nf;
	int i;
	char word[20];
	fp = fopen(file, "r+");
	nf = fopen("NEW FILE.txt", "w");
	if (fp == NULL){
		puts("\nCannot open the file.\n");
		exit(1);
	}
	for (i = 0; 1; i++){
		word[i] = fgetc(fp);
		if (word[i] == EOF)
			break;
		if (word[i] == ' '){
			word[i] = '\0';
			if (FOUND){
				strcpy(word, " ");
				fputs(word, nf);
			}
			else{
				fputs(word, nf);
				fputc(' ', nf);
			}
			i = -1;
		}
	}
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f1, *f2, *fp;
	char ch1 = 'a', ch2 = 'a';
	f1 = fopen("File (e)1.txt", "r");
	f2 = fopen("File (e)2.txt", "r");
	fp = fopen("File (e)3.txt", "w");
	if (f1 == NULL){
		printf("Can't open the file1\n");
		exit(1);
	}
	if (f2 == NULL){
		printf("Can't open the file1\n");
		exit(2);
	}
    puts("\nWork on progress....\n\n");
	while (1){
		if (ch1 != EOF){
            ch1 = fgetc(f1);
			while (ch1 != '.'){
				if (ch1 == EOF)
					break;
				fputc(ch1, fp);
				ch1 = fgetc(f1);
			}
			if (ch1 != EOF)
				fputc('.', fp);
		}
		if (ch2 != EOF){
			ch2 = fgetc(f2);
			while (ch2 != '.'){
				if (ch2 == EOF)
					break;
				fputc(ch2, fp);
				ch2 = fgetc(f2);
			}
			if (ch2 != EOF)
				fputc('.', fp);
		}
        if (ch1 == EOF && ch2 == EOF)
			break;
	}
	printf("\nTask completed.\nExiting . . . \n");
	return 0;
}
#include<stdio.h>
#include<ctype.h>

void encode(FILE*, FILE*);
void decode(FILE*, FILE*);
void display(FILE*);

int main(){
	FILE *sf, *df;
	sf = fopen("File (g)1.txt", "r");
	df = fopen("File (g)2.txt", "w");

	display(sf);

	encode(sf, df);
	
	display(df);
	
	decode(df, sf);
	display(sf);

	return 0;
}

void encode(FILE *sf, FILE *df)
{
	char ch;
	while (1)
	{
		ch = fgetc(sf);
		if (ch == EOF)
			break;
		if (isalpha(ch) || ch == ' ' || ch == '\n'){
			switch (ch){
			case '\n':
				fputc('@', df);
				break;
			case 'a':
				fputc('0', df);
			case 'A':
				fputc('!', df);
				break;
			case 'b':
				fputc('0', df);
			case 'B':
				fputc('#', df);
				break;
			case 'c':
				fputc('0', df);
			case 'C':
				fputc('$', df);
				break;
			case 'd':
				fputc('0', df);
			case 'D':
				fputc('%', df);
				break;
			case 'e':
				fputc('0', df);
			case 'E':
				fputc('&', df);
				break;
			case 'f':
				fputc('0', df);
			case 'F':
				fputc('*', df);
				break;
			case 'g':
				fputc('0', df);
			case 'G':
				fputc('(', df);
				break;
			case 'h':
				fputc('0', df);
			case 'H':
				fputc(')', df);
				break;
			case 'i':
				fputc('0', df);
			case 'I':
				putc('+', df);
				break;
			case 'j':
				fputc('0', df);
			case 'J':
				fputc('/', df);
				break;
			case 'k':
				fputc('0', df);
			case 'K':
				fputc('{', df);
				break;
			case 'l':
				fputc('0', df);
			case 'L':
				fputc('}', df);
				break;
			case 'm':
				fputc('0', df);
			case'M':
				fputc(';', df);
				break;
			case 'n':
				fputc('0', df);
			case 'N':
				fputc(':', df);
				break;
			case 'o':
				fputc('0', df);
			case 'O':
				fputc('[', df);
				break;
			case 'p':
				fputc('0', df);
			case 'P':
				fputc(']', df);
				break;
			case 'q':
				fputc('0', df);
			case 'Q':
				fputc('"', df);
				break;
			case 'r':
				fputc('0', df);
			case 'R':
				fputc('`', df);
				break;
			case 's':
				fputc('0', df);
			case 'S':
				fputc('\\', df);
				break;
			case 't':
				fputc('0', df);
			case 'T':
				fputc('|', df);
				break;
			case 'u':
				fputc('0', df);
			case 'U':
				fputc('=', df);
				break;
			case 'v':
				fputc('0', df);
			case 'V':
				fputc('-', df);
				break;
			case 'w':
				fputc('0', df);
			case 'W':
				fputc('_', df);
			case 'x':
				fputc('0', df);
			case 'X':
				fputc('<', df);
				break;
			case 'y':
				fputc('0', df);
			case 'Y':
				fputc('^', df);
				break;
			case 'z':
				fputc('0', df);
			case 'Z':
				fputc('?', df);
				break;
			case ' ':
				fputc('1', df);
				break;
			}
		}
		else
			fputc(ch, df);
	}
}

void decode(FILE *ef, FILE *df){
	char ch;
	while (1){
		ch = fgetc(df);
		if (ch == EOF)
			break;
		switch (ch){
		case '@':
			fputc('\n', ef);
			break;
		case '0':
			ch = fgetc(df);
			switch (ch){
			case '!':
				fputc('a', ef);
				break;
			case '#':
				fputc('b', ef);
				break;
			case '$':
				fputc('c', ef);
				break;
			case '%':
				fputc('d', ef);
				break;
			case '&':
				fputc('e', ef);
				break;
			case '*':
				fputc('f', ef);
				break;
			case '(':
				fputc('g', ef);
				break;
			case ')':
				fputc('h', ef);
				break;
			case '+':
				fputc('i', ef);
				break;
			case '/':
				fputc('j', ef);
				break;
			case '{':
				fputc('k', ef);
				break;
			case'}':
				fputc('l', ef);
				break;
			case ';':
				fputc('m', ef);
				break;
			case ':':
				fputc('n', ef);
				break;
			case '[':
				fputc('o', ef);
				break;
			case ']':
				fputc('p', ef);
				break;
			case '"':
				fputc('q', ef);
				break;
			case '`':
				fputc('r', ef);
				break;
			case '\\':
				fputc('s', ef);
				break;
			case '|':
				fputc('t', ef);
				break;
			case '=':
				fputc('u', ef);
				break;
			case '-':
				fputc('v', ef);
				break;
			case '_':
				fputc('w', ef);
				break;
			case '<':
				fputc('x', ef);
				break;
			case '^':
				fputc('y', ef);
				break;
			case '?':
				fputc('z', ef);
				break;
			}
			break;
		case '!':
			fputc('A', ef);
			break;
		case '#':
			fputc('B', ef);
			break;
		case '$':
			fputc('C', ef);
			break;
		case '%':
			fputc('D', ef);
			break;
		case '&':
			fputc('E', ef);
			break;
		case '*':
			fputc('F', ef);
			break;
		case '(':
			fputc('G', ef);
			break;
		case ')':
			fputc('H', ef);
			break;
		case '+':
			putc('I', ef);
			break;
		case '/':
			fputc('J', ef);
			break;
		case '{':
			fputc('K', ef);
			break;
		case '}':
			fputc('L', ef);
			break;
		case';':
			fputc('M', ef);
			break;
		case ':':
			fputc('N', ef);
			break;
		case '[':
			fputc('O', ef);
			break;
		case ']':
			fputc('P', ef);
			break;
		case '"':
			fputc('Q', ef);
			break;
		case '`':
			fputc('R', ef);
			break;
		case '\\':
			fputc('S', ef);
			break;
		case '|':
			fputc('T', ef);
			break;
		case '=':
			fputc('U', ef);
			break;
		case '-':
			fputc('V', ef);
			break;
		case '_':
			fputc('W', ef);
		case '<':
			fputc('X', ef);
			break;
		case '^':
			fputc('Y', ef);
			break;
		case '?':
			fputc('Z', ef);
			break;
		case '1':
			fputc(' ', ef);
			break;
		default:
			fputc(ch, ef);
		}
	}
}

void display(FILE *fp){
	char str[50];
	while (fgets(str, 49, fp) != NULL)
		printf("%s", str);
	puts("\n\n");
}
