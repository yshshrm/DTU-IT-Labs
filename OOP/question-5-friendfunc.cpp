#include <iostream>
using namespace std;
 
class friendfunc2; //prototype for class declared
 
class friendfunc1{
 
	int a, b;
 
	public:
 
	friendfunc1(int a_, int b_){
		a = a_;
		b = b_;	
	}
 
	friend void calcAvg(friendfunc1, friendfunc2);  //friend func prototype
 
};
 
class friendfunc2{
 
	int c, d, e;
 
	public:
 
	friendfunc2(int c_, int d_, int e_){
		c = c_;
		d = d_;	
		e = e_;
	}
 
	friend void calcAvg(friendfunc1, friendfunc2); //friend func prototype
 
};
 
 
//friend function
void calcAvg(friendfunc1 f1, friendfunc2 f2){ 
	int average;
	average = (f1.a + f1.b + f2.c + f2.d + f2.e) / 5;
	cout<<endl<<"Average is: "<<average<<endl;
}
 
int main(){
 
	int a, b, c, d, e;
 
	cout<<"Enter two values of friendfunc1 "<<endl;
	cin>>a>>b;
	cout<<"Enter three values of friendfunc2 "<<endl;
	cin>>c>>d>>e;
 
	friendfunc1 f1(a, b);
	friendfunc2 f2(c, d, e);
	calcAvg(f1, f2);
	return 0;
 
}