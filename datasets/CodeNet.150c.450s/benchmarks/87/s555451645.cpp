#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#ifdef Debug
#define dump(x)  cerr << #x << " = " << (x) << endl
#else
#define dump(x)
#endif

int data[30][30];
int h;


int dell(int data[30][30]){
	int ret=0;
	rep(i,h){
		rep(j,3){
			int num=1;
			rep(k,5){
				if(j+k>=5)break;
				if( data[i][j+k]!=-1 && data[i][j+k]==data[i][j+k+1])num++;
				else break;
			}
			if(num>=3){
				rep( k,num ){
					data[i][k+j]=-1;
				}
				ret++;
			}
		}
	}
	return ret;
}


void fall(int data[30][30]){
	rep(k,h){
	for(int i=h-1;i>=1;i--){
		rep(j,5){
			if(data[i][j]==-1)swap(data[i][j],data[i-1][j]);
		}
	}
	}
}


int main(){
	while(cin>>h){
		if(h==0)break;
		int bef=0;
		rep(i,h)
			rep(j,5){
				cin>>data[i][j];
				bef+=data[i][j];
			}
		while(1){
			if( dell(data)==0 )break;
			fall(data);
		}

		int af=0;
		rep(i,h)rep(j,5)if(data[i][j]!=-1)af+=data[i][j];

		cout<<bef-af<<endl;


	}
}