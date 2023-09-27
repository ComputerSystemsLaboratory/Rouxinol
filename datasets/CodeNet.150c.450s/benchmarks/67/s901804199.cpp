#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int ans = 0;
		int sum = 0;
		for(int i=1; i<=n/2; i++){
			sum = i;
			for(int j=i+1; sum+j<=n; j++)sum+=j;
			if( sum==n )ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}