#include<iostream>
using namespace std;

int n;
int town[10][10];

void solve(){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			for(int l=0; l<10; l++){
				int dis = town[j][i]+town[i][l];
				if(dis<town[j][l])
					town[j][l] = dis;
			}
		}
	}
	int ans=0,t[10]={0};
	for(int i=0; i<10; i++){
		for(int k=0; k<10; k++)
			t[i] += town[i][k];
		if(t[ans] > t[i])
			ans = i;
	}
	cout << ans << ' ' << t[ans]%1000000 << endl;
}

int main(){
	while(true){
		cin >> n;
		if(!n)
			return 0;
		for(int i=0; i<10; i++)
			for(int k=0; k<10; k++){
				town[i][k] = 1000000;
				if(i==k)
					town[i][k] = 0;
			}
		for(int i=0; i<n; i++){
			int a,b,c;
			cin >> a >> b >> c;
			town[a][b] = c;
			town[b][a] = c;
		}
		solve();
	}
}