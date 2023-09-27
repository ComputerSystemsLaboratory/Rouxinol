#include<iostream>
#include<vector>
#define MAX 1000010
using namespace std;
int main(){
	vector<int> pre(MAX);
	int a,d,n,now;
	for(int i=0;i<MAX;i++)
		pre[i]=1;
	pre[0]=0;
	pre[1]=0;
	for(int i=0;i*i<MAX;i++)
	if(pre[i]){
		for(int j=i*2;j<MAX;j+=i)
			pre[j]=0;
	}
	while(cin>>a>>d>>n,a||d||n){
		now=0;
		while(now!=n){if(pre[a]==1)
			now++;
			a+=d;
			
		}
		cout<<a-d<<endl;
	}
	return 0;
}