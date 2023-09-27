#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define alint(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main(){
	int n,m;
    while(1){
        cin>>n>>m;
        if(n==0 && m==0) break;
        vector<int> a(n),b(m);
        int asum=0,bsum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            asum+=a[i];
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
            bsum+=b[j];
        }
        int d=asum-bsum;
        bool f=0;
        if(d%2==0){
            rep(i,0,n){
            	rep(j,0,m){
            		if(a[i]==b[j]+d/2){
            			f=1;
            			o(a[i]<<" "<<b[j]);
            			break;
            		}
            	}
            	if(f) break;
            }
        }
        if(f==0) o(-1);
    }
}