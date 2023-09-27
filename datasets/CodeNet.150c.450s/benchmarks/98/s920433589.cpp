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

    int n,m;
    while(cin >> n >> m,n){
        int h[101]={};
        int t[101]={};
        int s,sum=0;
        REP(i,n){
            cin >> s;
            sum+=s;
            t[s]=1;
        }
        REP(i,m){
            cin >> s;
            sum-=s;
            h[s]=1;
        }
//        cout << sum << endl;
        if(sum%2!=0){
            cout << -1 << endl;
        }else{
            sum/=2;
            sum*=(-1);
            bool flg=0;
            for(int i=0;i<101;i++){
                if((i+sum)>=0&&(i+sum)<101){
                    if(t[i]==1&&h[sum+i]==1){
                        cout << i << " " << sum+i << endl;
                        flg=1;
                        break;
                    }
                }
            }
            if(!flg)cout << -1 << endl;
        }
    }
}

