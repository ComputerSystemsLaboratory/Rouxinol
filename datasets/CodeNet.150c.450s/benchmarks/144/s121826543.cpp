#include<bits/stdc++.h>
using namespace std;
long a[101][101],b[101][101],ans[101][101];
int main(){
int n,m,l;
cin>>n>>m>>l;
for(int i=0;i<n;i++)
	{for(int i2=0;i2<m;i2++)
		{cin>>a[i][i2];
		}
	}
for(int i=0;i<m;i++)
	{for(int i2=0;i2<l;i2++)
		{cin>>b[i][i2];
		}
	}
for(int i=0;i<n;i++)
	{for(int i2=0;i2<l;i2++)
		{for(int i3=0;i3<m;i3++)
			{
			ans[i][i2]+=a[i][i3]*b[i3][i2];
			}
		if(i2!=0) cout<<" ";
		cout<<ans[i][i2];
		}
	cout<<endl;
	}
return 0;
}
