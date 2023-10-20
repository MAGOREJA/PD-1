#include <iostream>
using namespace std;
string decideAcvity(string T,string hum);
main ()
{
   string temp,humidity;
   cout << "Enter temperature (warm or cold): ";
   cin >> temp;
   cout << "Enter humidity (dry or humid): ";
   cin >> humidity;
   cout << "Recommended activity: " << decideAcvity(temp,humidity);
}
string decideAcvity(string T,string hum)
{
   string activity;
   if (T == "warm"){
      if (hum == "dry"){
         activity = "Play tennis";
      }
      if (hum == "humid"){
         activity = "Swim";
      }
   }
   else if (T == "cold"){
      if (hum == "dry"){
         activity = "Play basketball";
      }
      if (hum == "humid"){
         activity = "Watch TV";
      }
   } 
   return activity;
}