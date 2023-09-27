#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int w,h,x,y,r;
    while(cin >> w >> h >> x >> y >> r){
        string result = (r <= x && x <= (w - r)) && (r <= y && y <= (h - r)) ? "Yes" : "No";
        cout << result << endl;
        return 0;
    }
}