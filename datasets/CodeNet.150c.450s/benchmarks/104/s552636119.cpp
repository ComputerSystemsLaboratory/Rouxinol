#include<bits/stdc++.h>
using namespace std;
inline int nextInt(void){
	int res=0;
	char ch=getchar();
	while(ch>'9'||ch<'0')
		ch=getchar();
	while(ch<='9'&&ch>='0'){
		res=res*10+ch-'0';
		ch=getchar();
	}
	return res;
}
signed main(void){
	int n=nextInt(),m=nextInt();
	int ans[n+1],line[m+1][2];
	for(int i=1;i<=m;i++){
		line[i][0]=nextInt();
		line[i][1]=nextInt();
	}
	for(int i=1,t;i<=n;i++){
		t=i;
		for(int d=1;d<=m;d++){
			if(line[d][0]==t)
				t=line[d][1];
			else if(line[d][1]==t)
				t=line[d][0];
		}
		ans[t]=i;
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<endl;
}