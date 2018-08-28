#include <iostream>
using namespace std;
 
class student2;
 
class student{
 
	int roll;
	public:
	void cin_func(){
		cout<<"Enter roll number ";
		cin>>roll;
	}
	student sum(student s, student t){
		cout<<"Inside student sum()";
		student r;
		int new_roll = t.roll + s.roll;
		r.roll =  new_roll;
		return r;
	}
	friend void copy_func(student f1, student2 f2);
 
};
 
class student2 {
 
	int roll;
	public:
	void cin_func(){
		cout<<"Enter roll number ";
		cin>>roll;
	}
	student2 sum(student2 s, student2 t){
		cout<<"Inside student2 sum()"<<endl;
		student2 r;
		int new_roll = t.roll + s.roll;
		r.roll =  new_roll;
		return r;
	}
	friend void copy_func(student f1, student2 f2);
 
};
 
void copy_func(student f1, student2 f2){
 
	cout<<"Hey! Welcome to the friend function!"<<endl;
	cout<<f1.roll + f2.roll<<endl;
 
}
 
int main(){
 
	student s1, s2;
	s1.cin_func();
	s2.cin_func();
 
	student2 x1, x2;
	x1.cin_func();
	x2.cin_func();
 
	copy_func(s1, x1);
 
	return 0;	
 
}
