#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(void){
    long int x, y, xx, yy, ans=1;
    cin >> x >> y;
    xx=max(x,y);
    yy=min(x,y);
    x=xx;
    y=yy;
    while(yy>0){
        if(x==y) ans = x;
        y=max(xx,yy)%min(xx,yy);
        x=min(xx,yy);
        xx=x;
        yy=y;
        ans=xx;
    }
    cout << ans << endl;
}