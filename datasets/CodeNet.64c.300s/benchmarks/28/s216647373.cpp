#include <iostream>
using namespace std;
int main(void){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if((x >= r && x <= W-r) && (y >= r && y <= H-r)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

