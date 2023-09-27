#include<iostream>
using namespace std;

int main(){
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;
    if ((W < r + x) || (0 > x - r)){
        cout << "No" << endl;
    }
    else if ((H < r + y) || (0 > y - r)){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    return 0;
}
