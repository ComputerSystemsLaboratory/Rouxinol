#include<iostream>
using namespace std;

int main(){
    int W;
    cin >> W;
    int H;
    cin >> H;
    int x;
    cin >> x;
    int y;
    cin >> y;
    int r;
    cin >> r;
    if (r <= x && x <= W-r && r <= y && y<=H-r) {
    cout << "Yes" << endl;
}   else {
    cout << "No" << endl;
}   return 0 ;
}

