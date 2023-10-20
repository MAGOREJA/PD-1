#include <iostream>
using namespace std;
string volume(float l,float w,float h,string ans);
main (){
    float length,width,height;
    string output;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): "; 
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> output;
    cout << volume(length,width,height,output);
}
string volume(float l,float w,float h,string unit)
{
            float result;
        result=(l*w*h)/3;
        if (unit=="meters"){
        return "The volume of the pyramid is: " + to_string(result) + " cubic " + unit;
    }
    if (unit=="kilometers"){
        result = result / 1000000000;
        return "The volume of the pyramid is: " + to_string(result) + " cubic " + unit;
    }
    if (unit=="centimeters"){
        result = result * 1000000;
        return "The volume of the pyramid is: " + to_string(result) + " cubic " + unit;
    }
    if (unit=="millimeters"){
        result = result * 1000000000;
        return "The volume of the pyramid is: " + to_string(result) + " cubic " + unit;
    }
    return 0;
}