#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    
    if(x >= r &&
       y >= r &&
       W - r >= x &&
       H - r >= y){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}