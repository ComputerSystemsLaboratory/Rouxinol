#include<iostream>
#include<ios>
using namespace std;
int get(){
	int h,m,s;
	scanf("%d:%d:%d",&h,&m,&s);
	return h*3600+m*60+s;
}
int n;
int cnt[90000];
int 
main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<90000;i++)cnt[i]=0;
		for(int i=0;i<n;i++)
		{
			cnt[get()]++;cnt[get()]--;
		}
		int ans=cnt[0];
		for(int i=1;i<90000;i++)
		{
			cnt[i]+=cnt[i-1];
			ans=ans<cnt[i]?cnt[i]:ans;
		}
		cout<<ans<<endl;
	}
}

