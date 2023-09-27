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
	int x,y,s;
	while(cin>>x>>y>>s&&(x||y||s)){
		int maxi = -1;
		for(int i=1;i<s;i++){
			for(int j=1;j<s;j++){
				if((int)(i*(100+x)/100)+(int)(j*(100+x)/100)==s){
					maxi = max(maxi,(int)(i*(100+y)/100) + (int)(j*(100+y)/100));
				}
			}
		}
		cout<<maxi<<endl;
	}
}