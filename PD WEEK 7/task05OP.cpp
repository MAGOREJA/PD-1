#include <iostream>
using namespace std;
bool isPrime(int x);
main()
{
    int any_Num;
    cout << "Enter Number: ";
    cin >> any_Num;
    bool result = isPrime(any_Num);
    cout << result;
}
bool isPrime(int x)
{
    bool ans;
        if ((x % x == 0) && (x / 2 != 0) && (x / 3 != 0))
        {
            ans = true;
        }
        if ((x % 2 == 0) || (x % 3 == 0))
        {
            ans = false;
        }
    return ans;
}