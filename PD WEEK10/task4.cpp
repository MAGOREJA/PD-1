#include<iostream>
using namespace std;
int volume(int x, int y, int z);
main()
{
    int box_num;
    cout << "Enter the number of boxes: ";
    cin >> box_num;
    cout << "Enter the dimensions of the boxes (length, width, height): \n";
    int box_length[box_num];
    int box_width[box_num];
    int box_height[box_num];
    int sum = 0;
    for(int i=0;i<box_num;i++){
        cin >> box_length[i];
        cin >> box_height[i];
        cin >> box_width[i];
        int ans = volume(box_length[i],box_height[i],box_width[i]);
        sum += ans;
    }
    cout << "Total volume of all boxes: " << sum;
}
int volume(int x, int y, int z){
    int vol = x*y*z;
}