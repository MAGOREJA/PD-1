#include <iostream>
using namespace std;
void discount (string country,float ticket,float ans);
main ()
{
	string name;
	float price,result;
	cout << "Enter the country's name: ";
	cin >> name;
	cout << "Enter the ticket price in dollars: $";
	cin >> price;
	discount (name,price,result);
}
void discount (string country,float ticket,float ans)
{
	if (country == "Pakistan"){
	ans = ticket - ticket * 0.05;
	cout << "Final ticket price after discount: $" << ans << endl;
	}

	if (country == "Canada"){
	ans = ticket - ticket * 0.45;
	cout << "Final ticket price after discount: $" << ans << endl;
	}

	if (country == "India"){
	ans = ticket - ticket * 0.2;
	cout << "Final ticket price after discount: $" << ans << endl;
	}

	if (country == "Ireland"){
	ans = ticket - ticket * 0.1;
	cout << "Final ticket price after discount: $" << ans << endl;
	}

	if (country == "England"){
	ans = ticket - ticket * 0.3;
	cout << "Final ticket price after discount: $" << ans << endl;
	}
}