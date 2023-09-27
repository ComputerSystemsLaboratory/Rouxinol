#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,m,p;
	while(cin>>n>>m>>p && n!=0){
		vector<int> V(n+1);
		int sum=0;
		for(int i=1;i<=n;i++){
			cin>>V[i];
			sum+=V[i];
		}
		sum*=100;

		if(V[m]==0){
			cout<<0<<endl;
		}
		else{
			sum*=(100-p);
			sum/=100;
			cout<<sum/V[m]<<endl;
		}
	}
	return 0;

}