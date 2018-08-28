#include <iostream>
#include <string.h>
using namespace std;
 
class student{
	int roll;
	char name[10];
	public:
	student(){
		cout<<"Normal constructor"<<endl;
		roll=0;
		strcpy(name, "NA");
	}
	student(int i, char a[]){
		cout<<"Parameterized constructor"<<endl;
		roll = i;
		strcpy(name, a);
	}
	/*student(student obj){
		cout<<"Copy constructor";
		roll=obj.roll+1;
		strcpy(name, obj.name);
	}*/
	student (student &obj){
		cout<<"Copy constructor by reference"<<endl;
		roll=obj.roll;
		strcpy(name, obj.name);
	}
	~student(){
		cout<<"Destructor"<<endl;
	}
	void test(student s){
		cout<<s.roll<<endl<<s.name<<endl;
	}
 
};
 
int main(){
	cout<<"Hello World!"<<endl;
	student obj1;
	student obj2(10,"hello");
	student obj3(obj2);
	student obj4(obj2);
	obj1.test(obj1);
	return 0;
}
