#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,p;
	while(cin>>n>>m>>p, n||m||p){
		int sum=0, atari=0;

		int x;
		for(int i=1;i<=n;i++){
			cin>>x;
			sum+=x;
			if(i==m) atari=x;
		}
		sum*=(100-p);
		if(atari)cout<<sum/atari<<endl;
		else cout<<"0"<<endl;
	}

	return 0;
}

