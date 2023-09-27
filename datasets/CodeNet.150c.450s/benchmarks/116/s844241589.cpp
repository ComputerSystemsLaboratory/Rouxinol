#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> sum;
	int n,m,x,max;
	while(cin>>n>>m,n||m){
	cin>>x;
	sum.push_back(0);
	sum.push_back(x);
	max=-1000000;
	for(int i=2;i<=n;i++){
		cin>>x;
		sum.push_back(sum[i-1]+x);
	}
	for(int i=0;i<n-m+1;i++){
		if(sum[m+i]-sum[i]>max)
		max=sum[m+i]-sum[i];
	}
	cout<<max<<endl;
		sum.clear();
	}
	return 0;
}