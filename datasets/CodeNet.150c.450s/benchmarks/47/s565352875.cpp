#include <iostream>
using namespace std;
int main(){
    int w,h,x,y,r;
    cin >> w >> h >> x >> y >> r;
    string z="Yes";
    if(w<x+r || h<y+r || 0>x-r || 0>y-r){
       z="No";
    }
    cout << z << endl;
    return 0;
}

