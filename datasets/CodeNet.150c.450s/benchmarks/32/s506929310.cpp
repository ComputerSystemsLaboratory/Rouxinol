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
    int m,mi,ma;
    while(cin >> m >> mi >> ma,m){
        vector<int> p(m);
        REP(i,m){
            cin >> p[i];
        }
        //sort(All(p));
        int ga=0;
        int ans;
        for(int i=mi-1;i<ma;i++){
            if(ga<=p[i]-p[i+1]){
                ga=p[i]-p[i+1];
                ans=i+1;
            }
        }
        cout << ans << endl;
    }
}

