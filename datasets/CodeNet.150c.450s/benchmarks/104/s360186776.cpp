//0011
#include <bits/stdc++.h>
using namespace std;

int main(){
	int w,n,ans[31],a,b,i;
	cin>>w>>n;
	for(i = 1;i <= w;i++){
		ans[i-1] = i;
	}
	for(i = 1;i <= n;i++){
		scanf("%d,%d",&a,&b);
		swap(ans[a-1],ans[b-1]);
	}
	for(i = 0;i < w;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}