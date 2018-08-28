#include <iostream>
using namespace std;
 
void swap_value(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
 
void swap_reference(int *a, int *b){
 
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
 
int main() {
 
	int a, b;
	int choice;
 
	cout<<"Enter the first number: "; 
	cin>>a;
 
	cout<<"Enter the second number: "; 
	cin>>b;
 
	cout<<"Enter '1' for calling call by value and '2' for calling call by reference ";
	cin>>choice;
 
	switch(choice){
 
		case 1: swap_value(a, b);
		break;
 
		case 2:swap_reference(&a, &b);
		break;
 
		default:cout<<"Wrong input";
 
	}
 
	cout<<"Now, the first number is "<<a<<" and the second number is "<<b<<endl;
 
}