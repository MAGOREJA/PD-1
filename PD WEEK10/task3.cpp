#include<iostream>
using namespace std;

bool isCycleRepeating(int[],int,int);
main(){
    int length,cycle;
    cout << "Enter the length of the array: ";
    cin  >> length;
    int numbers[length];
    cout << "Enter the elements of the array:\n";
    for(int i=0;i<length;i++){
        cin >> numbers[i];
    }
    cout << "Enter the length of the cycle: ";
    cin  >> cycle;
    cout << "Output: " << isCycleRepeating(numbers,length,cycle);
}

bool isCycleRepeating(int numbers[],int length,int cycleLength){
    if(cycleLength >=length){
        return true;
    }else{
        for(int i=0;i<cycleLength;i++){
            if(i+cycleLength<length){
                if(numbers[i] != numbers[i+cycleLength]){
                    return false;
                }
            }
        }        

    }
    return true;
}