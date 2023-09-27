#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<math.h>

using namespace std;

int main(){
	int f=1,i;
	int foot[2];
	foot[0]=0;
	foot[1]=0;
	int ans=0,N;
	string x;
	while (1){
		cin >>N;
		ans=0;
		f=1;
		foot[0]=0;
		foot[1]=0;
		if(N==0)break;
		//Input
		for(i=0;i<N;i++){
			cin >> x;
			//cout << x << endl;
			if(x=="lu"){
				foot[0]++;
				if(f==1 && foot[1]==1){
					ans++;
					f=0;
				}
			}
			else if(x=="ru"){
				foot[1]++;
				if(f==1 && foot[0]==1){
					ans++;
					f=0;
				}
			}
			else if(x=="ld"){
				foot[0]--;
				if(f==0 && foot[1]==0){
					ans++;
					f=1;
				}
			}
			else{
				foot[1]--;
				if(f==0 && foot[0]==0){
					ans++;
					f=1;
				}
			}
		}
		cout << ans <<endl;
	}
	return 0;
}