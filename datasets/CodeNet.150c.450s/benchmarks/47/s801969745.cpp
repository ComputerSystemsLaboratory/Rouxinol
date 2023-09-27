#include <iostream>

using namespace std;

int main(){
    int boxX, boxY, circleX, circleY, radius, centerX, centerY;
    cin >> boxX >> boxY >> circleX >> circleY >> radius;
    centerX = circleX;
    centerY = circleY;
    circleX += radius;
    circleY += radius;
    if(circleX > boxX || circleY > boxY){
        cout << "No" << endl;
    }
    else if(circleX < 0 || circleY < 0){
        cout << "No" << endl;
    }
    else if(centerX < 0 || centerY < 0){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}