#include<iostream>//itp14d.cpp
using namespace std;
int main(void)
{
	long long int n,m,i,max=0,min=10000000,all=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>m;
		all=all+m;
		if(max<=m) max=m;
		if(min>=m) min=m;
	}
	if(n==1) cout<<m<<" "<<m<<" "<<m<<endl;
	else cout<<min<<" "<<max<<" "<<all<<endl;
	return 0;
}
