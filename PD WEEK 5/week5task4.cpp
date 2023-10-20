#include<iostream>
using namespace std;
void ProjectTimeCalculation(int,int,float);
main(){
    int hours,workers;
    float days;
    cout << "Enter the needed hours: ";
    cin  >> hours;
    cout << "Enter the days that firm has:";
    cin >> days;
    days = days * .9;
    cout << "Enter the number of all workers: ";
    cin  >> workers;
    ProjectTimeCalculation(hours,workers,days);
}

void ProjectTimeCalculation(int hoursNeeded,int workers,float days){
    int totalTime;
    totalTime =  workers*days*10;
    if(totalTime > hoursNeeded){
        cout << "Yes!" << totalTime-hoursNeeded << " hours left.";
    }else{
        cout << "Not enought time! " << hoursNeeded - totalTime <<" hours needed";
    }
}