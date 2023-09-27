#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k;
	while(1)
	{
		cin>>k;
		if(k==0)
			break;
		k=1000-k;
		n=k/500+k%500/100+k%500%100/50+k%500%100%50/10+k%500%100%50%10/5+k%500%100%50%10%5;
		cout<<n<<endl;
	}
	return 0;
}
	