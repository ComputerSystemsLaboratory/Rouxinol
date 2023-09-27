#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 99999999



int main(){
    int a,b;
    int month[]={0,0,31,29,31,30,31,30,31,31,30,31,30,31};
    for(int i=1;i<=12;i++)month[i]=month[i]+month[i-1];
    string w[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
    while(cin>>a>>b){
        if(a==0&&b==0)break;
        int sum=0;
        sum+=month[a];
        sum+=b-1;
        sum=sum%7;
        cout<<w[sum]<<endl;
    }
}