#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int W, H, x, y, r;
    string str;
    cin >> W >> H >> x >> y >> r;
    if((x-r < 0 || y-r < 0)||(x+r > W || y+r > H)){
        str = "No";
    } else {
        str = "Yes";
    }

    cout << str << endl;
}