#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a;
	while(cin>>a)
	{
	int b =0;
	for(int c=0;c<10;c++)
		for(int d =0;d<10;d++)
			for(int e =0;e<10;e++)
				for(int f =0;f<10;f++)
				{
					if
						(c+d+e+f==a)
						b=b+1;
				}
				cout<<b<<endl;
	}
				
}