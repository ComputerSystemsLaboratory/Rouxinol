#include "bits/stdc++.h"
#include <cassert>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define vi vector<int>
#define pb push_back
#define INF 999999999
//#define INF (1LL<<59)


int main(){
	int r[1010];
	rep(i,1010)r[i]=i;
	for(int i=1;i<1010;i++)r[i] +=r[i-1];

	int n;
	while(cin>>n&&n){
		int c=0;
		for(int i=0;i<n;i++){
			for(int j=i+2;j<n;j++){
				if(r[j]-r[i]==n)c++;
			}
		}
		cout<<c<<endl;
	}
	
}