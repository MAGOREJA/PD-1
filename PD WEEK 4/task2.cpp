#include <iostream>
using namespace std;
void yes (string x);
void no (string x);
main ()
{
	string t;
	cout << "Enter 'true' or 'false': ";
	cin >> t;
	yes (t);
	no (t);
}
void yes (string x)
{
	if (x == "true") {
	cout << "false";
	}
}
void no (string x)
{
	if (x == "false"){
	cout << "true";
	}
}