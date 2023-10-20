#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x,int y);
main ()
{
   int x = 35,y = 12;
   string name;
   cout << "Your name here: ";
   cin >> name;
   system ("cls");
	gotoxy (x,y);
	cout << name;
}
void gotoxy (int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}