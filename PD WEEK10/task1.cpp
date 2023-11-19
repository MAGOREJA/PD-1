#include <iostream>
using namespace std;
int progressDays(int);
main()
{
    int sat_num;
    cout << "Enter the number of Saturdays: ";
    cin >> sat_num;
    cout << "Total progress days: " << progressDays(sat_num);
}
int progressDays(int sat_num)
{
    int miles_run[sat_num];
    for (int idx=0;idx<sat_num;idx++){
        cout << "Enter miles run for Saturday " << idx + 1 << ": ";
        cin >> miles_run[idx];
    }
    int counter=0;
    int prev = miles_run[0];
    for (int i=1;i<sat_num;i++){
        if(miles_run[i] > prev){
            counter++;
        }
        prev = miles_run[i];
    }
    return counter;
}