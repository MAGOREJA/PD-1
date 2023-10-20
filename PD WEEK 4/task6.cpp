#include <iostream>
using namespace std;
void compare (int x,int y,int z);
main ()
{
	int n1,n2,n3;
	cout << "Enter the number of hours: ";
	cin >> n1;
	cout << "Enter the number of minutes: ";
	cin >> n2;
	compare (n1,n2,n3);
}
void compare (int x,int y,int z)
{
	if (x * 60 > y){
	cout << x;
	}
	if (x * 60 < y){
	cout << y;
	}
}