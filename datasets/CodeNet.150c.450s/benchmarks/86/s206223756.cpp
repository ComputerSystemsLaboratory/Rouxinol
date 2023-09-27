#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,p;
	int x;
	int sum;
	int num;

	while(1){
		cin>>n>>m>>p;
		if(n+m+p==0) break;

		sum=0;

		for(int i1=0;i1<n;i1++){
			cin>>x;
			sum+=(x*100);

			if(i1==m-1) num=x;
		}
		sum-=(sum*p/100);

		if(num==0) cout<<0<<endl;
		else cout<<sum/num<<endl;

	}
	return 0;
}