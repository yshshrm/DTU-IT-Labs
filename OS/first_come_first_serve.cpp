#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n = 0, counter = 0;

    cout<<"Enter number of processes: \n";
    cin>>n;
    int *arrival = new int[n];
    int *burst = new int[n];
    int *cummulative = new int[n + 1];
    int last_exit = 0;

    while(counter < n){
        cout<<"Enter arrival time for process number "<< counter + 1 <<": ";
        cin>>arrival[counter];
        cout<<"Enter burst time for process number "<< counter + 1 <<": ";
        cin>>burst[counter];
        cout<<endl;
        counter++;
    }

    cout<<endl<<endl<<"---------------------------------------------------"<<endl;
    cout<<setw(10)<<"Number"<<setw(10)<<"Arrival"<<setw(10)<<"Burst\n";
    counter = 0;
    while(counter < n){
        cout<<setw(10)<<counter + 1<<setw(10)<<arrival[counter]<<setw(10)<<burst[counter]<<endl;;
        counter++;
    }


    cummulative[0] = 0;
    counter = 1;
    while(counter < n + 1){
        cummulative[counter] =  cummulative[counter - 1] + burst[counter - 1];
        counter++;
    }

    int waiting_sum = 0;
    counter = 0;
    while(counter < n){
        waiting_sum += cummulative[counter] - arrival[counter];
        counter++;
    }

    cout<<"\nWaiting time: "<<waiting_sum<<" secs";
    cout<<"\nAverage waiting time: "<<(float)waiting_sum/n<<" secs";
    cout<<endl;

    int turnaround_sum = 0;
    counter = 1;
    while(counter < n + 1){
        turnaround_sum += cummulative[counter] - arrival[counter - 1];
        counter++;
    }

    cout<<"\nTurn-around time: "<<(float)turnaround_sum<<" secs";
    cout<<"\nAverage turn-around time: "<<(float)turnaround_sum/n<<" secs";
    cout<<endl;
    return 0;

}
