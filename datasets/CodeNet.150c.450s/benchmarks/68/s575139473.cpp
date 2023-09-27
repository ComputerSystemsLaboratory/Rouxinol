#include <bits/stdc++.h>
#define REP(i,n)for (int i=0;i<(n);i++)
#define PB push_back
#define MP make_pair
#define ALL(a) (a).begin(),(a).end()
#define ll long long
using namespace std;
int main(){
    int n;
    while(1){
        cin>>n;
        if(n==0)break;
        vector<int>V(n);
        REP(i,n)cin>>V[i];
        sort(ALL(V));
        int mi=1e9;
        REP(i,n-1)mi=min(mi,V[i+1]-V[i]);
        cout<<mi<<endl;
    }
}