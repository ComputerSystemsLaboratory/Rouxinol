#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int a,b;
	int c;
	int i=0;
	int j;
	vector<int> x;
	vector<int> y;
	
	while(1)
	{
		cin>>a>>b;
		
		if(a==0&&b==0)
			break;
		else
		{
			if(a>b)
			{
				c=a;
				a=b;
				b=c;
			}
			x.push_back(a);
			y.push_back(b);
			i++;
		}
	}
	
	for(j=0;j<i;j++)
	{
		cout<<x[j]<<" "<<y[j]<<endl;
	}
}

