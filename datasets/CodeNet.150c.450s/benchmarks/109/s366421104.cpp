#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int ta[24*60*60];
int main(){
	int n;
	while(true){
	cin>>n;
	if(n==0)break;
	for(int i=0;i<24*60*60;i++)ta[i]=0;
	int a,b,c,d,e,f;
	for(int i=0;i<n;i++){
	scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&d,&e,&f);
	int now=a*3600+b*60+c,next=d*3600+e*60+f;
	ta[now]++;
	ta[next]--;
	}
	for(int i=0;i<24*60*60-1;i++)ta[i+1]+=ta[i];
	int ans=0;
	for(int i=0;i<24*60*60;i++)ans=max(ans,ta[i]);
	cout<<ans<<endl;
	}
	return 0;
}