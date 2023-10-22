#include<iostream>
using namespace std;
int triangleDots(int n);
main(){
    int num;
    cout << "Enter number of Triangle: ";
    cin  >> num;
    cout << "Dots in the Triangle: " <<  triangleDots(num);
}

int triangleDots(int n)
{
    int add = 0;
    for(int x = 1; x <= n; x++)
    {
        add += x;
    }
    return add;
}
