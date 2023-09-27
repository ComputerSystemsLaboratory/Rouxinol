#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
	int a,L;
	while(cin>>a>>L,L) 
	{
		int tmp[25];
		tmp[0]=a;

		for(int i = 1; i < 21; ++i)
		{
			int cnt[10],cnt2[10];
			memset(cnt,0,sizeof(cnt));
			memset(cnt2,0,sizeof(cnt2));
			for(int j = 0; j < L; ++j)
			{
				cnt[a%10]++;
				cnt2[a%10]++;
				a/=10;
			}
			int b=0,c=0;
			int pos=0;
			while(pos<10) 
			{
				if(cnt[pos]!=0)
				{
					c*=10;
					c+=pos;
					cnt[pos]--;
				}
				else pos++;
			}

			pos=9;
			while(pos>-1) 
			{
				if(cnt2[pos]!=0)
				{
					b*=10;
					b+=pos;
					cnt2[pos]--;
				}
				else pos--;
			}
			a=b-c;
			tmp[i]=a;
		}
		int ans=0;
		bool f=false;
		for(int i = 0; i < 21; ++i)
		{
			for(int j = i+1; j < 21; ++j)
			{
				if(tmp[i]==tmp[j])
				{
					ans=j-i;
					cout<<i<<" ";
					cout<<tmp[i]<<" ";
					f=true;
					break;
				}
			}
			if(f) break;
		}
		cout<<ans<<endl;
	}
  return 0;
}