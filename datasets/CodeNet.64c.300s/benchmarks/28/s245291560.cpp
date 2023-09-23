#include <iostream>

using namespace std;

int main() {

    int W, H, x, y, r;
    
    cin >> W >> H >> x >> y >> r;
    
    if (r > W + H || x + r > W || x - r < 0 || y + r > H || y - r < 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    
    return 0;
}