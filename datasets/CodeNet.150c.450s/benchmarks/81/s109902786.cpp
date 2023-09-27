#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int edge[50][50];

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;

		rep(i,50)rep(j,50){
			if(i==j)edge[i][j]=0;
			else edge[i][j]=99999999;
		}

		int m=-1;
		rep(i,n){
			int a,b,c;
			cin>>a>>b>>c;
			m=max( m , max(a,b) );
			edge[a][b]=edge[b][a]=c;
		}
		m++;
		rep(k,m){
			rep(i,m){
				rep(j,m){
					edge[i][j]=min( edge[i][j] , edge[i][k]+edge[k][j] );
				}
			}
		}
		int mini=9999999;
		int num;
		rep(i,m){
			int sum=0;
			rep(j,m){
				sum+=edge[i][j];
			}
			if(mini>sum){
				mini=sum;
				num=i;
			}
		}
		cout<<num<<" "<<mini<<endl;
	}
	return 0;
}