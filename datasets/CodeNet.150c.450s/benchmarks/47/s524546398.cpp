#include<bits/stdc++.h>
using namespace std;
 
int main(){
        int w, h, x, y, r;
        cin >> w >> h >> x >> y >> r;
        int circle_left = x - r;
        int circle_right = x + r;
        int circle_top = y + r;
        int circle_bottom = y - r;
        if(circle_left < 0 || circle_right > w || circle_top > h || circle_bottom < 0){
                cout << "No" << endl;
        }else{
                cout << "Yes" << endl;
        }
}