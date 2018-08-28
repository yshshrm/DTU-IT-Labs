#include <iostream>
 
using namespace std;
 
class employee{
 
        int empNo;
        char empName[20];
        public:
            void getData(){
                cout<<"Enter the employee number ";
                cin>>empNo;
                cout<<"Enter the name of the employee ";
                cin>>empName;
            }
            void displayData(){
                cout<<"\nEmployee Number: "<<empNo;
                cout<<"\nEmployee Name: "<<empName;
            }
 
};
 
int main(){
 
    employee e[6];
    for (int i=0; i<6; i++) e[i].getData();
    cout<<endl;
    for (int i=0; i<6; i++) e[i].displayData();
    return 0;
}