#include<iostream>
using namespace std;
int main(){
	int n,p;
	while(cin>>n>>p,n||p){
		int a[51]={0},ans=0,now=0;
		while(true){
			int cnt=0;
			for(int i=0;i<n;i++)if(a[i]!=0)cnt++;
			if(cnt==1&&p==0)break;
			
			if(p!=0){
			a[now]++;
			p--;
			}
			else {
			p+=a[now];
			a[now]=0;
			}
		if(now==n-1)now=0;
		else now++;
		//for(int x=0;x<n;x++)cout<<a[x]<<" ";cout<<endl;
		}
	for(int i=0;i<n;i++)if(a[i]!=0)cout<<i<<endl;
	for(int i=0;i<51;i++)a[i]=0;
	}
	return 0;
}