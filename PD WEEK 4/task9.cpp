#include <iostream>
using namespace std;
void result (int x,int y);
main ()
{
	int people,tp;
	cout << "Number of people in the household: ";
	cin >> people;
	cout << "Number of rolls of TP: ";
	cin >> tp;
	result (people,tp);

}
void result (int x,int y)
{
	int days;
	int sheets_per_roll = 500;
	int sheets_per_day_per_person = 57;
	int total_sheets_available = y * sheets_per_roll;
	int total_sheets_needed = x * sheets_per_day_per_person * 14;
    	if (total_sheets_available < total_sheets_needed) {
        	days = total_sheets_available / (x * sheets_per_day_per_person);
    	} else {
        	days = total_sheets_available / (x * sheets_per_day_per_person);
    	}
	if (days < 14) {
	cout << "Your TP will only last " << days << " days, buy more!" << endl;
	} else {
	 cout << "Your TP will last " << days << " days, no need to panic!" << endl;
    }
}