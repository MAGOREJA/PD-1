#include <iostream>
using namespace std;
void pet (int x);
main ()
{
	int holi,work,time;
	cout << "Holidays: ";
	cin >> holi;
	work = 365 - holi;
	time = work * 63 + holi * 127;
	pet (time);
}
void pet (int x)
{
	int a,b,p;
	if (x < 30000){
	p = 30000 - x;
	cout << "Tom sleeps well" << endl;
	b = p % 60;
	a = (p - b) / 60;
	cout << a << " hours and " << b << " minutes less for play";
	}
	if (x > 30000){
	p = x - 30000;
	cout << "Tom will run away" << endl;
	b = p % 60;
	a = (p - b) / 60;
	cout << a << " hours and " << b << " minutes for play";
	}
}