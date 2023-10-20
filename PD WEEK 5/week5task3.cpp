#include <iostream>
using namespace std;
float taxCalculator(char v,float p);
main (){
    char vehicle;
    float price;
    double priceAfterTax;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> vehicle;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    double ans=taxCalculator(vehicle,price);
    cout << "The final price of a vehicle of type " << vehicle << " after adding the tax is $" << ans << ".";
}
float taxCalculator(char v,float p)
{
    
    float fp;
    if(v=='M'){
        fp = p + (p*0.06);
    }
    if(v=='E'){
        fp = p + (p*0.08);
    }
    if(v=='S'){
        fp = p + (p*0.1);
    }
    if(v=='V'){
        fp = p + (p*0.12);
    }
    if(v=='T'){
        fp = p + (p*0.15);
    }
    return fp;
}