#include<cstdio>
#include<cstring>
#include<functional>
#include<algorithm>
#include<iostream>
#define rep(i,a) for(i=0;i<a;i++) 
using namespace std;
int main(void)
{
	int m,r,f,cnt;
	char judge[6]={"ABCDF"};
	while(1) {
		cin>>m>>f>>r;
		if(m==-1&&f==-1&&r==-1) break;
		if(m==-1 || f==-1) cout<<judge[4]<<endl;
		else if(m+f>=80) cout<<judge[0]<<endl;
		else if(m+f>=65) cout<<judge[1]<<endl;
		else if(m+f>=50) cout<<judge[2]<<endl;
		else if(m+f>=30 && r>=50) cout<<judge[2]<<endl;
		else if(m+f>=30) cout<<judge[3]<<endl;
		else cout<<judge[4]<<endl;
	}
	return 0;
}