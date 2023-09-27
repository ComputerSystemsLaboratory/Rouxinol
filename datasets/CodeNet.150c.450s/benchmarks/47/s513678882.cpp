#include <iostream>
using namespace std;

int main() {
    double w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    cout << ((r <= x && x <= w-r && r <= y && y <= h-r) ? "Yes" : "No") << endl; 
}