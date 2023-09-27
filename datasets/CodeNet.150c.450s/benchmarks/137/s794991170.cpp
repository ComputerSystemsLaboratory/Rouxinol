#include<bits/stdc++.h>

using namespace std;

int main()
{
	set<string> s;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		string a,b;
		cin>>a>>b;
		if(a[0]=='i') s.insert(b);
		else if(a[0]='f')
			if(s.count(b))
				printf("yes\n");
			else
				printf("no\n");
	}
	return 0;
}