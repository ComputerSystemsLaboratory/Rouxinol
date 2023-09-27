#include <bits/stdc++.h>
using namespace std;

int main()
{
	for(int x,y,s;cin>>x>>y>>s && x|y|s;){
		int res=0;
		for(int a=1;a<=s;a++)
			for(int b=a;a+b<=s;b++)
				if(a*(100+x)/100+b*(100+x)/100==s)
					res=max(res,a*(100+y)/100+b*(100+y)/100);
		cout<<res<<endl;
	}
}