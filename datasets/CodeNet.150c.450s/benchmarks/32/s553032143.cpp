#include<iostream>
using namespace std;
int main(){
	while(1){
		int m,n,N,ans=0,now,last=0,out;
		cin >> m >> n >> N;
		if(!m&&!n&&!N)	break;
		for(int i=1;i<=m;i++){
			cin >> now;
			if(n<i&&i<=N+1&&i!=1){
				if((last-now)>=ans){
					ans = last-now;
					out = i-1;
				}
			}
			last = now;	
		}
		cout << out << endl;
	}
}
