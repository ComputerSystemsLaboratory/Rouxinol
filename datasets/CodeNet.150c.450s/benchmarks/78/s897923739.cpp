#include <algorithm>
#include <iostream>

using namespace std;

int dp1[1000010]={0};
int dp2[1000010]={0};
int List[200];

void setpolloc(){
	int i,j,li;
	for(i=1;i*(i+1)*(i+2)/6<=1000000;i++){
		List[i]=i*(i+1)*(i+2)/6;
		dp1[i*(i+1)*(i+2)/6]=1;
		if((i*(i+1)*(i+2)/6)%2) dp2[i*(i+1)*(i+2)/6]=1;
	}
	List[i]=i*(i+1)*(i+2)/6;
	for(i=1;i<=1000000;i++){
		if(dp2[i]) continue;
		for(j=1;List[j]<=i-1;j+=2)if(!dp2[i] || dp2[List[j]]+dp2[i-List[j]] < dp2[i]) dp2[i]=dp2[List[j]]+dp2[i-List[j]];
		if(dp1[i]) continue;
		for(j=1;List[j]<=i-1;j++) if(!dp1[i] || dp1[List[j]]+dp1[i-List[j]] < dp1[i]) dp1[i]=dp1[List[j]]+dp1[i-List[j]];
	}
}


int main(){
	int n;
	setpolloc();
	while(cin>>n,n){
		cout << dp1[n] << ' ' << dp2[n] << endl;
	}
	return 0;
}