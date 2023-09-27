#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


int main(){
    ll A,B;
    ll a,b;
    ll t1,t2;
    while( cin>>a>>b ){
        A=a;B=b;
        if(a<b)swap(a,b);
        while(1){
            t1=b;
            t2=a%b;
            a=t1,b=t2;
            if(b==0){
                cout<<a<<" "<<A*B/a<<endl;
                break;
            }
        }
    }
}