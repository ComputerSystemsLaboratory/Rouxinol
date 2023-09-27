#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back

typedef long long ll;
typedef pair<int,int> P;
//-----------------------------------------------------------------------

vector<pair<int,P> > p;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i=1;i<=150;i++){
        for(int j=i+1;j<=150;j++){
            p.pb(make_pair(i*i+j*j,P(i,j)));
        }
    }
    sort(p.begin(),p.end());

    int h,w;
    while(cin>>h>>w,h+w){
        pair<int,P> q=make_pair(h*h+w*w,P(h,w));
        pair<int,P> r=*upper_bound(p.begin(),p.end(),q);
        cout<<r.second.first<<" "<<r.second.second<<endl;
    }
}
