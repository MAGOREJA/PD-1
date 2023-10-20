#include <iostream>
using namespace std;
void ans (int x,int y);
main ()
{
	int n1,n2;
	cout << "Enter the first number: ";
	cin >> n1;
	cout << "Enter the second number: ";
	cin >> n2;
	ans (n1,n2);
}
void ans (int x,int y)
{
	if (x == y){
	cout << "true";
}	else {
	cout << "false";
}
}