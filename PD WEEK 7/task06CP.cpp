#include<iostream>
using namespace std;
int primorial(int n);
bool checkPrime(int n);
main(){
    int num;
    cout << "Enter Number: ";
    cin  >> num;
    cout << primorial(num);
}
int primorial(int n)
{
    int ans = 1;
    int numCount = 0;
    int x = 2;
    while(true)
    {
        if(checkPrime(x))
        {
            ans = ans * x;
            numCount ++;
        }
        if(numCount >= n)
        {
            break;
        x ++;
        }
    return ans;
    }
}
bool checkPrime(int n)
{
    bool ans = true;
    for(int x = 2; x < n; x++)
    {
        if(n % x == 0)
        {
            ans = false;
        }
    }
    return ans;
}