#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int h,w;

bool comp(int h1,int w1,int h2,int w2) {
    if(h1*h1+w1*w1 < h2*h2+w2*w2) {
        return true;
    }
    else if(h1*h1+w1*w1 > h2*h2+w2*w2) {
        return false;
    }
    return h1<h2;
}

void solve() {
    vector<pair<int,int> > vec;
    for(int i=1;i<=300;i++) {
        for(int j=1;j<=300;j++) {
            if(j>i&&comp(h,w,i,j)) {
                vec.push_back(make_pair(i,j));
            }

        }
    }
    int ansH,ansW;
    ansH=vec[0].first;
    ansW=vec[0].second;
    for(int i=1;i<vec.size();i++) {
        if(comp(vec[i].first,vec[i].second,ansH,ansW)) {
            ansH=vec[i].first;
            ansW=vec[i].second;
        }
    }
    cout<<ansH<<" "<<ansW<<endl;
    

}
int main() {
    while(cin>>h>>w) {
        if(h+w==0) return 0;
        solve();
    }

}