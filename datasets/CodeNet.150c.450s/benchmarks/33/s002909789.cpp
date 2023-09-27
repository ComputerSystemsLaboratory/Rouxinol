#include <bits/stdc++.h>
 
#define rep(i,x) for(int i=0;i<x;i++)    
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)
 
using namespace std;
 
int main()
{
    int x,y,s;
    while(cin >> x >> y >> s && s)
    {
    	int mx=0;
    	
    	for(int i=1;i<1000;i++)
    	{
    		int num1=i*(100+x)/100;
    		int num2=i*(100+y)/100;

    		for(int j=1;j<1000;j++)
    		{
    			int num3=j*(100+x)/100;
    			int num4=j*(100+y)/100;

    			if(num1+num3==s)mx=max(mx,num2+num4);
    		}
    	}
    	cout << mx << endl;
    }
    return 0;
}