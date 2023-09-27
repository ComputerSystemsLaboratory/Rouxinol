#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
typedef pair<P,P> PP;
const ll MOD=10000;
const ll INF=1000000010;
const int MAX=100001;
int dx[8]={0,1,0,-1,1,-1,1,-1};
int dy[8]={1,0,-1,0,1,-1,-1,1};
int a[1000010],b[1000010];
int main(){
	a[0]=0;b[0]=0;
	for(int i=1;i<=1000010;i++){
		a[i]=i;b[i]=i;
		int j=1;
		while(j++){
			int p=j*(j+1)*(j+2)/6;
			if(i<p)break;
			a[i]=min(a[i],a[i-p]+1);
			if(p%2)b[i]=min(b[i],b[i-p]+1);
		}
	}
	int n;
	while(cin>>n,n){
		cout<<a[n]<<" "<<b[n]<<endl;
	}
	return 0;
}

