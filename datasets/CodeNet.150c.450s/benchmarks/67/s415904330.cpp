#include<bits/stdc++.h>

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=(j);i<(k);i++)
#define fs first
#define sc seconf
#define pb push_back

using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;

int main(){
	int n;
	while(cin>>n,n){
		int cnt=0;
		rep(i,n){
			if(!i)continue;
			int t=0;
			reps(j,i,n+1){
				if(t>=n)break;
				t += j;
			}
			if(t==n)cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}