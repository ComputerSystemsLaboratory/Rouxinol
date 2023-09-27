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
	int ans[n+1];
	for(int i=1;i<=n;i++)
		ans[i]=i;
	for(int i=1;i<=m;i++)
		swap(ans[nextInt()],ans[nextInt()]);
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<endl;
}