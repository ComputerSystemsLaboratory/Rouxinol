#include<iostream>

using namespace std;

int w,h;

bool check(int h1,int w1,int h2,int w2) {
    return (h1*h1+w1*w1 == h2*h2+w2*w2?h1<h2:h1*h1+w1*w1 < h2*h2+w2*w2);
}

void solve() {
    int ansH,ansW;
    ansH=ansW=1000;
    for(int i=1;i<200;i++) {
        for(int j=i+1;j<200;j++) {
            if(check(h,w,i,j) && check(i,j,ansH,ansW)) {
                ansH=i;
                ansW=j;
            }
        }
    }
    cout<<ansH<<" "<<ansW<<endl;

}

int main() {
    while(cin>>h>>w) {
        if(h+w==0) return 0;
        solve();
    }

    return 0;
}