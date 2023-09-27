#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main(void){

	int ans=0;
	int sum;
	int inp;

	for(int i=0;i<2;i++){
		sum=0;
		for(int j=0;j<4;j++){
			cin>>inp;
			sum+=inp;
		}
		ans=max(ans,sum);
	}

	cout<<ans<<endl;

	return 0;
}