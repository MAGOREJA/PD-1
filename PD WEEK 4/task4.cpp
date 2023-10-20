#include <iostream>
using namespace std;
void ans (int x);
main ()
{
	int speed;
	cout << "Speed: ";
	cin >> speed;
	ans (speed);
}
void ans (int x)
{
	if (x > 100){
	cout << "Halt... YOU WILL BE CHALLENGED!!!";
	}
	if (x <= 100){
	cout << "Perfect! You're going good.";
	}
}