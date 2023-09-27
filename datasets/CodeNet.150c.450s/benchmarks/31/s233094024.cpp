#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int minn;
	int maxx=-2000000000;
	int n;
	cin>>n;
	int num=0;
	cin>>num;
	minn=num;
	for(int i=1;i<n;i++)
	{
		cin>>num;
		if(num-minn>=maxx)
			//maxx=max(num-minn,maxx);
			maxx=num-minn;
		if(num<=minn)
			minn=num;
			//minn=min(num,minn);
		
	}
	cout<<maxx<<endl;
	
	return 0;
}
