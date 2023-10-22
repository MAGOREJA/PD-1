#include<iostream>
using namespace std;
int main()
{
    int number;
    int patients = 0,checked_Patients = 0,unChecked_Patients = 0;
    int doctors = 7;
    cout << "Enter Number of days you visited Hospital: ";
    cin  >> number;
    for (int x = 1; x <= number; x ++)
    {
        if(x % 3 == 0)
        {
            if(unChecked_Patients > checked_Patients)
            {
                doctors ++;
            }
        }
        cout << "Number of patients who visited hospital on Day " << x << ": ";
        cin  >> patients;
        if(doctors >= patients)
        {
            checked_Patients += patients;
        }
        else
        {
            checked_Patients = checked_Patients + doctors;
            unChecked_Patients = unChecked_Patients + (patients - doctors);
        }
    }
    cout << "Treated Patients: " << checked_Patients << "\n";
    cout << "Untreated Patients: " << unChecked_Patients;
}