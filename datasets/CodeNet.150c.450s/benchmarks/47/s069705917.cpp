#include <iostream>
using namespace std;
int main(void){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    bool xcondition = x >= r && x <= W - r;
    bool ycondition = y >= r && y <= H - r;
    if (xcondition && ycondition) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}