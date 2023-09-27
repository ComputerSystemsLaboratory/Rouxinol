#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    bool card[4][14];
    char ch, mark;
    int x, n;
    
    for (int s = 0; s < 4; s++)
        for (int r = 1; r <= 13; r++)
            card[s][r] = 0;
            
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ch >> x;
        if (ch == 'S') { card[0][x] = 1;}
        else if (ch == 'H') { card[1][x] = 1;} 
        else if (ch == 'C') { card[2][x] = 1;} 
        else if (ch == 'D') { card[3][x] = 1;}
    }
    for (int s = 0; s < 4; s++){
        for (int r = 1; r <= 13; r++){
            if (card[s][r]) continue;
            if (s == 0)  mark = 'S';
            else if (s == 1) mark = 'H';
            else if (s == 2) mark = 'C';
            else if (s == 3) mark = 'D';
            cout << mark << " " << r << endl;
        }
    }
    return 0;
}


