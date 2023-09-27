#include<bits/stdc++.h>
using namespace std;

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(){
    int n;
    while(cin>>n,n){
        vector<vector<int>> map(500,vector<int>(500,0));
        vector<pair<int,int>> p(n);
        p[0]=make_pair(250,250);
        map[250][250]=1;
        for(int i=1;i<n;i++){
            int nn,d;
            cin>>nn>>d;
            p[i]=make_pair(p[nn].first+dy[d],p[nn].second+dx[d]);
            map[p[nn].first+dy[d]][p[nn].second+dx[d]]=1;


        }
        int l=500;
        int r=0;
        int u=500;
        int d=0;
        for(int i=0;i<500;i++){
            for(int j=0;j<500;j++){
                if(map[i][j]){
                    l=min(l,j);
                    r=max(r,j);
                    u=min(u,i);
                    d=max(d,i);


                }
            }

        }
        cout<<r-l+1<<" "<<d-u+1<<endl;
    }
    return 0;
}