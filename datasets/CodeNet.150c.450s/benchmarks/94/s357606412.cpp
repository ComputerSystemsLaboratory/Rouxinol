#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#include<map>
#include<set>
using namespace std;
int n,a[105];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>a[i];
	int cnt=0;
	for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(a[j]>a[j+1])
            {
            	cnt++;
            	swap(a[j],a[j+1]);
			}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		if(i!=n-1)
		    cout<<' ';
		else
		    cout<<endl<<cnt<<endl;
	}
	return 0;
}
