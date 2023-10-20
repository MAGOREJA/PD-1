#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
main ()
{
   string month;
   int day; 
   cout << "Enter the day of birth: ";
   cin >> day;
   cout << "Enter the month of birth (e.g., January, February): ";
   cin >> month;
   cout << "Zodiac Sign: " << findZodiacSign(day,month);
}
string findZodiacSign(int date, string mon)
{
   string star;
   if (date >= 21 && date <= 31 && mon == "March" || date >= 1 && date <= 19 && mon == "April"){
      star = "Aries";
   }
   if (date >= 20 && date <= 30 && mon == "April" || date >= 1 && date >= 20 && mon == "May"){
      star = "Taurus";
   }
   if (date >= 21 && date <= 31 && mon == "May" || date >= 1 && date <= 20 && mon == "June"){
      star = "Gemini";
   }
   if (date >= 21 && date <= 30 && mon == "June" || date >= 1 && date <= 22 && mon == "July"){
      star = "Cancer";
   }
   if (date >= 23 && date <= 31 && mon == "July" || date >= 1 && date <= 22 && mon == "August"){
      star = "Leo";
   }
   if (date >= 23 && date <= 31 && mon == "August" || date >= 1 && date <= 22 && mon == "September"){
      star = "Virgo";
   }
   if (date >= 23 && date <= 30 && mon == "September" || date >= 1 && date <= 22 && mon == "October"){
      star = "Libra";
   }
   if (date >= 23 && date <= 31 && mon == "October" || date >= 1 && date <= 21 && mon == "November"){
      star = "Scorpio";
   }
   if (date >= 22 && date <= 30 && mon == "November" || date >= 1 && date <= 21 && mon == "December"){
      star = "Sagittarius";
   }
   if (date >= 22 && date <= 31 && mon == "December" || date >= 1 && date <= 19 && mon == "January"){
      star = "Capricon";
   }
   if (date >= 20 && date <= 31 && mon == "January" || date >= 1 && date <= 18 && mon == "February"){
      star = "Aquarius";
   }
   if (date >= 19 && date <= 28 && mon == "February" || date >= 1 && date <= 20 && mon == "March"){
      star = "Pisces";
   }
   return star;
}