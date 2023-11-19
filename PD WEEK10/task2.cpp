#include<iostream>
using namespace std;

int LetterCount(string[],int,char);
main(){
    int length;
    char letter;
    cout << "Enter how many words you want to enter: ";
    cin  >> length;
    string words[length];
    for(int i=0;i<length;i++){
        cout << "Enter word " << i+1 << ": ";
        cin  >> words[i];
    }
    cout << "Enter the letter you want to count: ";
    cin  >> letter;
    cout << letter << " shows up " << LetterCount(words,length,letter) << " times in the data.";
}

int LetterCount(string words[],int length,char letter){
    int idx,count=0;
    string currentWord;
    for(int i=0;i<length;i++){
        idx=0;
        currentWord = words[i];
        while(currentWord[idx] != '\0'){
            if(currentWord[idx] == letter){
                count++;
            }
            idx++;
        }
    }
    return count;
}