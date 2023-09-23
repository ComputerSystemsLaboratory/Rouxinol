#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<stdio.h>
#include<cctype>
#include<algorithm>
#include<string.h>

#include<iomanip>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148
using namespace std;
#define A 0.33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333


int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
			{
				if(i%3==0)
				{
					cout<<" "<<i;
			
					continue;
				}
				
					if(i%10==3)
						{
							cout<<" "<<i;
							
					continue;
					}
					for(int k=i;k>0;k=k/10)
					{
						if(k%10==3)
						{
							cout<<" "<<i;//????????????
						
						break;
						}
						continue;
					}
		}
		cout<<endl;
		
	}
}