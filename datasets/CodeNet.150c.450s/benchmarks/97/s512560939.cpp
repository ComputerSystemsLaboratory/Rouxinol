#include "bits/stdc++.h"

using namespace std;

typedef pair<int, int> P;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int N;
    while(cin>>N,N){
        vector<P> v(N);
        v[0]=P(0,0);
        for(int i=1;i<N;i++){
            int n,d;cin>>n>>d;
            int f=v[n].first,s=v[n].second;
            if(d==0) f--;
            else if(d==1) s--;
            else if(d==2) f++;
            else s++;
            v[i]=P(f,s);
        }
        int xmax=0,xmin=0,ymax=0,ymin=0;
        for(int i=0;i<N;i++){
            xmax=max(xmax,v[i].first);
            xmin=min(xmin,v[i].first);
            ymax=max(ymax,v[i].second);
            ymin=min(ymin,v[i].second);
        }
        cout<<xmax-xmin+1<<" "<<ymax-ymin+1<<endl;
    }
}