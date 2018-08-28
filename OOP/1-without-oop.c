#include <stdio.h>
 
int main(){
	char name[20], surname[20];
	int marks;
	printf("Enter your name, surname and marks");
	scanf("%s %s %d", &name, &surname, &marks);
	printf("\nName:%s", name);
	printf("\nSurname:%s", surname);
	printf("\nMarks:%d", marks);
	return 0;
}