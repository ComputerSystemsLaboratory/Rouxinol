#include<iostream>
using namespace std;

int main(){
    int w,h,x,y,r;
    cin >> w >> h >> x >> y >> r;
    
    if (x < 1 || y < 1){
        cout << "No" << endl;
    } else if ((w < x + r) || (h < y + r)){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}