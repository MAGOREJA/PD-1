#include<iostream>
using namespace std;
void amplify(int n);
main(){
    int number;
    cout << "Enter the number to amplify: ";
    cin  >> number;
    amplify(number);
}

void amplify(int n)
{
    cout << 1;
    for(int i = 2; i <= n; i++)
    {
        if(i % 4 != 0)
        {
            cout << ", " << i;
        }
        else
        {
            cout << ", " << i * 10;
        }
    }
}