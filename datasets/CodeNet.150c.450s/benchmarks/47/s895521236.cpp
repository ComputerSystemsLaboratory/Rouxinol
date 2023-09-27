#include<iostream>
using namespace std;

bool mycheck(){
    int w,h,x,y,r;
    cin >> w >> h >> x >>y >>r;
    return x >= r && y>= r && x<=w-r && y<=h-r;
}

int main(){
    bool ok;
    ok = mycheck();
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}