#include <iostream>
using namespace std;

int main() {
	int n,s;
	while(cin>>n>>s,n)
	{
		int c=0;
		int comb=(1<<n)-1;
		while(comb<(1<<10))
		{
			int sum=0;
			for(int i=0;i<10;i++)
			{
				if(comb>>i&1)sum+=i;
			}
			if(sum==s)c++;
			int x=comb&-comb,y=comb+x;
			comb=(((comb&~y)/x)>>1)|y;
		}
		cout<<c<<endl;
	}
	return 0;
}