#include <iostream>
using namespace std;

int main(){
    bool ret=true;
    int w,h,x,y,r;
    cin >> w >> h >> x >> y >> r;
    
    if(x - r < 0 || y - r < 0 || x + r > w || y + r > h){
       cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    
    return 0;
    
}