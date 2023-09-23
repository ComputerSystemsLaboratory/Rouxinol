#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int w,h,x,y,r;

    cin >> w >> h >> x >> y >> r;
    cout << (x-r<0 || y-r<0 || x+r>w || y+r>h ? "No":"Yes") << endl;

    return 0;
}