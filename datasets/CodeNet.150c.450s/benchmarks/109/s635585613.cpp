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
        string st,en;
        int table[100000]={};
        REP(i,n){
            cin >> st>>en;
            int stim=0;
            stim+=(st[0]-'0')*10+(st[1]-'0');
            stim*=60;
            stim+=(st[3]-'0')*10+(st[4]-'0');
            stim*=60;
            stim+=(st[6]-'0')*10+(st[7]-'0');
            int etim=0;
            etim+=(en[0]-'0')*10+(en[1]-'0');
            etim*=60;
            etim+=(en[3]-'0')*10+(en[4]-'0');
            etim*=60;
            etim+=(en[6]-'0')*10+(en[7]-'0');

            table[stim]+=1;
            table[etim]+=-1;
        }
        int res=0,sum=0;
        for(int i=0;i<100000;i++){
//            if(table[i])cout << i/3600 <<" "<<table[i]<<endl;
            sum+=table[i];
            res=max(res,sum);
        }
        cout << res << endl;
    }
}

