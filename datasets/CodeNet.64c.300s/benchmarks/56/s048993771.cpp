#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int n;
		cin >>n;
		for(int i=0;i<n;i++){
			int ans =0;
			int y,m,d;
			cin >> y >> m >> d;
			int syear =19*5+20*5;
			int byear =20*10;
			for (int j = y+1; j<=999; j++){
				if (j%3==0) ans+=byear;
				else ans+=syear;
			}
			for (int j= m+1; j<=10;j++){
				if(y%3==0)ans+=20;
				else if (j%2==0) ans +=19;
				else ans+=20;
			}
			if(y%3==0)ans+=20-d+1;
			else if (m%2==0)ans+=19-d+1;
			else ans+=20-d+1;
			cout << ans << endl;	
		}
	
	
	return 0;
}