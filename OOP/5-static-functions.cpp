#include<iostream>
using namespace std;
 
class test {
    int code;
    static int count;
    public:
        void setCode() {
            code=++count;
        }
        void show() {
            cout<<"Object Number : "<<code<<endl;
        }
        static void showCount() {
            cout<<"Count : "<<count<<endl;
        }
};
 
int test::count;
 
int main(){
 
    test t1, t2, t3;
 
    t1.setCode();
    t2.setCode();
    t3.setCode();
 
    test::showCount();
 
    t1.show();
    t2.show();
    t3.show();
 
    return 0;
 
}