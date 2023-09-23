#include <bits/stdc++.h>

using namespace std;

long long INF=1e15;

int solve(int x,int y,int z){
    int res=0;
    res+=195*(x-1);
    res+=5*((x-1)/3);// x年1月1日までの日数
    if(x%3==0){
        res+=(y-1)*20;
    }
    else{
        for(int i=1;i<y;i++){
            if(i%2==0)res+=19;
            else res+=20;
        }
    }// x年y月1日までの日数
    res+=z-1;

    return res;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int y,m,d;
        cin>>y>>m>>d;
        cout<<solve(1000,1,1)-solve(y,m,d)<<endl;
    }
}
