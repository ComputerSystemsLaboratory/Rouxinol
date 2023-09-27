#include<iostream>
#include<vector>
using namespace std;

typedef unsigned long long ll;

int n;
vector<int> V;

void solve(){
	V.clear();
	for(int i=0;i<n;i++){
		int r;
		cin>>r;
		V.push_back(r);
	}

	vector<ll> now(21,0),bef(21,0);

	bef[V[0]]=1;

	for(int i=1;i<n-1;i++){
		int r=V[i];
		for(int z=0;z<=20;z++){
			if(r+z>=0 && r+z<=20)
				now[r+z]+=bef[z];
			if(z-r>=0 && z-r<=20)
				now[z-r]+=bef[z];
		}
		swap(now,bef);
		now.assign(21,0);
	}

	cout<<bef[V[n-1]]<<endl;

}

int main()
{
	while(cin>>n){
		solve();
	}
	return 0;
}