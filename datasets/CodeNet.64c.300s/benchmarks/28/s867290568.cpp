#include <iostream>
using namespace std;

int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if(x+r<=W && y+r<=H && r<=x && r<=y) cout << "Yes" << endl;
    else cout << "No" << endl;
}
