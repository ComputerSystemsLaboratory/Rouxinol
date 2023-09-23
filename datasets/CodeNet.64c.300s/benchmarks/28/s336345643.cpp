#include<iostream>
using namespace std;

int main() {
    int x, y, W, H, r;
    cin >> W >> H >> x >> y >> r;
    if (x < r || y < r)
        cout << "No" << endl;
    else if (x + r <= W&&y + r <= H)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}