#include <iostream>
using namespace std;
void ans (int x,int y);
main ()
{
	int my_pose,friend_pose;
	cout << "Enter your position: ";
	cin >> my_pose;
	cout << "Enter your friend's position: ";
	cin >> friend_pose;
	ans (my_pose,friend_pose);
}
void ans (int x,int y)
{
	if (y - x < 6){
	cout << "true";
	}
	if (y - x > 6){
	cout << "false";
	}
}