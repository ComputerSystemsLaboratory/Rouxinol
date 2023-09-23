#include <iostream>

using namespace std;

bool inRect(
    const int &right,
    const int &top,  
    const int &x, 
    const int &y, 
    const int &r
){
    if(x-r < 0)     return false;
    if(x+r > right) return false;
    if(y-r < 0)     return false;
    if(y+r > top)   return false;
    return true;
}

int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    
    cout << (inRect(W, H, x, y, r)? "Yes": "No") << endl;

    return 0;
}
