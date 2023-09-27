#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    double x1,y1,x2,y2,x3,y3,x4,y4;
    double EPS = 1e-10;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if ( abs((y4-y3)*(x2-x1)-(y2-y1)*(x4-x3))<EPS ) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}
