#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int cargo_Count;
    float bus_Weight = 0, truck_Weight = 0, train_Weight = 0, total_Weight, weight;
    float bus_Percent, truck_Percent, train_Percent; 
    float price = 0, average_Price;
    cout << "Enter the count of cargo for transportation: ";
    cin  >> cargo_Count;

    for (int x = 1; x <= cargo_Count; x ++)
    {
        cout << "Enter the tonnage of cargo " << x << ": ";
        cin  >> weight;
        if(weight <= 3)
        {
            bus_Weight += weight;
            price += (weight * 200);
        }
        else if(weight <= 11)
        {
            truck_Weight += weight;
            price += (weight * 175);
        }
        else if(weight > 11)
        {
            train_Weight += weight;
            price += (weight * 120);
        }
    }
    total_Weight = bus_Weight + train_Weight + truck_Weight;
    average_Price = price / total_Weight;
    bus_Percent = (bus_Weight * 100) / total_Weight;
    truck_Percent = (truck_Weight * 100) / total_Weight;
    train_Percent = (train_Weight * 100) / total_Weight;
    cout << fixed << setprecision(2);
    cout << average_Price << "\n";
    cout << bus_Percent << "%\n";
    cout << truck_Percent << "%\n";
    cout << train_Percent << "%\n";
}