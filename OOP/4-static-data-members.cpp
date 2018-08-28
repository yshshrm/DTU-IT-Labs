#include<iostream>
using namespace std;
 
class student {
    static int count;
    int rollNo;
    public:
        void getData(int a){
            rollNo = a;
            count++;
        }
        void getCount(){
            cout<<"Count : "<<count<<endl;
        }
};
int student::count;
 
int main(){
 
    student s1, s2, s3;
    s1.getData(1);
    s2.getData(2);
    s3.getData(3);
 
    s1.getCount();
    s2.getCount();
    s3.getCount();
    return 0;
}