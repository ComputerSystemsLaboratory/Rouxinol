#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[15],r[15],l[15],lcnt,rcnt,cnt;
bool flag;
bool solve(){
	for(int i=0;i<1024;++i){
		memset(l,0,sizeof(l));
		memset(r,0,sizeof(r));
		lcnt=rcnt=0;
		for(int cnt=0,j=i;cnt<10;cnt++,j>>=1){
			if(j&1)l[lcnt++]=a[cnt];
			else r[rcnt++]=a[cnt];
		}
		flag=true;
		for(int j=1;j<lcnt;j++){
			if(l[j]<l[j-1]){
				flag=false;
				break;
			}
		}
		if(flag){
			for(int j=1;j<rcnt;j++){
				if(r[j]<r[j-1]){
					flag=false;
					break;
				}
			}
		}
		if(flag)return true;//只要能找出就返回true 
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<10;i++)cin>>a[i];
		puts(solve()?"YES":"NO");
	}
	return 0;
}