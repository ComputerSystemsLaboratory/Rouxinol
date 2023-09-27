#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        
        int data[6000];
        
        rep(i,n) cin>>data[i];
        
        ll maxi=-999999999999;
        
        for(int i=0;i<n;i++){
            ll sum[6000]={};
            sum[i]=data[i];
            maxi=max(maxi,sum[i]);
            
            for(int j=i+1;j<n;j++){
                sum[j]=sum[j-1]+data[j];
                maxi=max(maxi,sum[j]);
            }

        }
        
        
        cout<<maxi<<endl;
    }
}