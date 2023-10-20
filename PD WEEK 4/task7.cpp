#include <iostream>
using namespace std;
void ans (float x,float y);
main ()
{
	float red = 2.0 ,white = 4.1 ,tulip = 2.5,total,result;
	int rroses,wroses,ttulips;
	cout << "Red Rose: ";
	cin >> rroses;
	cout << "White Rose: ";
	cin >> wroses;
	cout << "Tulips: ";
	cin >> ttulips;
	total = rroses * red + wroses * white + ttulips * tulip;
	cout << "Original Price: $" << total << endl;
	ans (total,result);
}
void ans (float x,float y)
{
	if (x < 200){
	cout << "No discount applied.";
	}
	if (x > 200){
	y = x - x * 0.2;
	cout << "Price after Discount: $" << y;
	}
}
