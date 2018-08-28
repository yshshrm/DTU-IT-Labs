#include <iostream>
using namespace std;
 
class student{
	char name[20], surname[20];
	int marks;
	public:
		void inputInfo(){
			printf("Enter your name, surname and marks");
			scanf("%s %s %d", &name, &surname, &marks);
		}
		void displayInfo(){
			printf("\nName:%s", name);
			printf("\nSurname:%s", surname);
			printf("\nMarks:%d", marks);
		}
};
 
int main(){
	student s;
	s.inputInfo();
	s.displayInfo();
}