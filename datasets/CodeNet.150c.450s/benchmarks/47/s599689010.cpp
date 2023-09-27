#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; int w, h, x, y, r; cin >> w >> h >> x >> y >> r;
    if (r<=x && x<=w-r && r<=y && y<=h-r) s = "Yes";
    else s = "No";
    cout << s << endl;
}