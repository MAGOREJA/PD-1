#include<iostream>
using namespace std;
void convertPINToDance(string pin);
main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    convertPINToDance(pin);
}
void convertPINToDance(string pin)
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string result = "";

    if (pin.length() != 4)          
    {
        cout << "Invalid input.";
        return;
    }
    for (int i = 0; i < pin.length(); i++)         
    {
        if (!isdigit(pin[i]))
        {
            cout << "Invalid input.";
            return;
        }
    }

    int pinIndex = 0, movesIndex = 0;
    int j = 0;        
    for (int i = 0; i < pin.length(); i++)
    {
        pinIndex += (pin[i] - '0');         
        
        }
        if (pinIndex > 9)                  
            pinIndex = pinIndex - 10;

        {

        result += moves[pinIndex] + ", ";

        pinIndex = j;       
        pinIndex++;
        j++;
    }
    result = result.substr(0, result.size() - 2);            
    cout << result;
}
