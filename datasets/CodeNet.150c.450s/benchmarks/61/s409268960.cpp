#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,x;
	while(cin>>n>>a>>b>>c>>x,n) 
	{
		int rdm[n];
		for(int i = 0; i < n; ++i)
		{
			cin>>rdm[i];
		}

		int pos=0,ans=0;
		while(ans<=10000) 
		{
			if(rdm[pos]==x) pos++;
			if(pos==n) break;

			x=(a*x+b)%c;
			ans++;
		}
		cout<<(ans==10001?-1:ans)<<endl;
	}
  return 0;
}