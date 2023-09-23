#include <iostream>
using namespace std;

int main() {
	int n,x,y;
	
	while(true)
	{
		y=0;
		cin>>n>>x;
		if(n==0 && x==0) break;
		for(int i=n;i>=3;i--)
		{
			for (int j = i-1; j>=2; --j)
			{
				for (int k = j-1; k >=1; --k)
				{
					if (i+j+k==x) y=y+1;
				}
			}
		}
		cout<<y<<endl;


	}

	return 0;
}