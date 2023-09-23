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

    int sum[1002]={};
    REAP(i,1,1002)sum[i]=sum[i-1]+i;
    int n;
    while(cin >> n,n){
        int cou=0;
        REAP(i,2,n){
            REAP(j,0,i){
                if(sum[i]-sum[j]==n)cou++;
            }
        }
        cout << cou << endl;
    }
}

