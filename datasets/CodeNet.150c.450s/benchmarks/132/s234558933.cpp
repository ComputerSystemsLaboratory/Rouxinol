#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	while(cin>>n>>m,n,m){
		int num[50]={},now=0,storn=m;
		while(1){
			if(now==n)now=0;
			if(storn>0){
				num[now]++;
				storn--;
			}
			else if(num[now]>0){
				storn=num[now];
				num[now]=0;
			}
			if(num[now]==m){
				cout<<now<<endl;
				break;
			}
			now++;
		}
	}
}