#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char** argv) {
    int W, H, x, y, r = 0;
    int right, left, top, bottom = 0;
    bool p = true;
    
    cin >> W >> H >> x >> y >> r;
    
    right = x+r;
    left = x-r;
    top = y+r;
    bottom = y-r;
    
    if (left < 0 || right > W) {
        p = false;
    } 
    
    if (bottom < 0 || top > H) {
        p = false;
    }
    
    if (p) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}