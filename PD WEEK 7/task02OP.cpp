#include <iostream>
using namespace std;
void printUpper(int n);
void printLower(int n);
main ()
{
    int rowSize;
    cout << "Enter number of desired rows: ";
    cin >> rowSize;
    printUpper(rowSize);
    printLower(rowSize);
}
void printUpper(int n)
{
    for(int i=1; i<n; i++)
    {
        for(int x=1; x<= n - i; x++)
        {
            cout << " ";
        }
        for(int y=1; y<=i; y++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void printLower(int n)
{
    for (int i=n; i>=1; i--)
    {
        for(int x=n; x>i; x--)
        {
            cout << " ";
        }
        for(int y=1; y<=i; y++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}