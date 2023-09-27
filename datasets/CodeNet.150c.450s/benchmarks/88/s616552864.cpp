#include<bits/stdc++.h>
#define all(vec) vec.begin(),vec.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const double EPS=1e-10;
const ll INF=1000000000;
const ll MAX=100010;
int main(){
    int h,w;
    vector<pair<int,P> > v;
    for(int i=1;i<=150;i++){
        for(int j=i+1;j<=150;j++){
            v.push_back(make_pair(i*i+j*j,P(i,j)));
        }
    }
    sort(all(v));
    while(cin>>h>>w,h+w){
        pair<int,P> p=make_pair(h*h+w*w,P(h,w));
        pair<int,P> ans=*upper_bound(all(v),p);
        cout<<ans.second.first<<" "<<ans.second.second<<endl;
    }
}
