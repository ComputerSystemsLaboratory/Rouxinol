#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c,x;
	while(cin>>n>>a>>b>>c>>x,n){
		int t = 0;
		int y[120];
		for(int i = 0;i < n;i++){
			cin>>y[i];
		}
		int now = 0;
		while(true){
			if(t > 10001){
				cout<<-1<<endl;
				goto next;
			}
			if(now == n)break;
			//cout<<t<<" "<<x<<" "<<y<<endl;
			if(x == y[now]){
				now++;
			}
			x = (a * x + b) % c;
			t++;
		}
		
		cout<<t-1<<endl;
		next:;
	}
}