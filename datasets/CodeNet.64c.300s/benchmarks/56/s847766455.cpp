#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int in = 0; in < n; ++in)
	{
		int y,m,d;
		cin>>y>>m>>d;
		int cnt=0;
		bool big=false,ok=false;;
		for(int i = 1; i < 1000; ++i)
		{
			if(i%3==0) big=true;
			else big=false;
			bool mbig=false;
			for(int j = 1; j < 11; ++j)
			{
				if(j%2==0) mbig=false;
				else mbig=true;
				for(int k = 1;; ++k)
				{
					cnt++;
					if(y==i&&m==j&&d==k)
					{
						ok=true;
						break;
					}

					if(big&&k==20) break;
					if(!big&&mbig&&k==20) break;
					if(!big&&!mbig&&k==19) break;
				}
				if(ok) break;
			}
			if(ok) break;
		}
		cout<<196471-cnt<<endl;
	}
  return 0;
}