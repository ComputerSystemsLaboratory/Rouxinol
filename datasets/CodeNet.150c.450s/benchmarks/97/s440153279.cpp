#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n,n){
        vector<pair<int,int> > rec(n);
        int l=0,r=0,u=0,b=0;
        rec[0].fr=0;rec[0].sc=0;
        int nn,d;
        REAP(i,1,n){
            cin >> nn >> d;
//            cout << nn <<" " << d<<endl;
            int x=rec[nn].fr;
            int y=rec[nn].sc;
            if(d==0)x--;
            if(d==1)y--;
            if(d==2)x++;
            if(d==3)y++;
            rec[i].fr=x;
            rec[i].sc=y;
            l=min(l,x);
            r=max(r,x);
            u=max(u,y);
            b=min(b,y);
        }
        cout << r+1-l <<" "<<u+1-b<<endl;
//        cout << r <<" "<<l << endl;
    }
}

