#include <iostream>
using namespace std;
float calculateAvg(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main ()
{
   string name;
   float eng,math,chem,sscience,bio;
   cout << "Enter student name: ";
   cin >> name;
   cout << "Enter marks for English: ";
   cin >> eng;
   cout << "Enter marks for Maths: ";
   cin >> math;
   cout << "Enter marks for Chemistry: ";
   cin >> chem;
   cout << "Enter marks for Social Science: ";
   cin >> sscience;
   cout << "Enter marks for Biology: ";
   cin >> bio;
   cout << "Student Name: " << name << endl;
   float percentage = calculateAvg(eng,math,chem,sscience,bio);
   cout << "Percentage: " << percentage << "%" << endl;
   cout << "Grade: " << calculateGrade(percentage);
}
float calculateAvg(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
   float average;
   average = (marksEnglish + marksMaths + marksBiology + marksChemistry + marksSocialScience) / 5;
   return average;
}
string calculateGrade(float average)
{
   string grade;
   if (average >= 90 && average < 100){
      grade = "A+";
   }
   else if (average >= 80 && average < 90){
      grade = "A";
   }
   else if (average >= 70 && average < 80){
      grade = "B+";
   }
   else if (average >= 60 && average < 70){
      grade = "B";
   }
   else if (average >= 50 && average < 60){
      grade = "C";
   }
   else if (average >= 40 && average < 50){
      grade = "D";
   }
   else if (average < 40){
      grade = "F";
   }
   return grade;
}