#include <bits/stdc++.h>
using namespace std;
int main() {
	int num[5];
	while(1){
		bool kawa=1;
		for(int i=0;i<5;i++){
			cin>>num[i];
			if(num[i]!=0)kawa=0;
		}
		if(kawa)break;
		int stop[10000],ans=-1;
		for(int i=0;i<num[0];i++)cin>>stop[i];
		for(int i=0,n=num[4],j=0;i<10001&&j<num[0];i++){
			if(n==stop[j])j++;
			if(j==num[0])ans=i;
			n=(num[1]*n+num[2])%num[3];
		}
		cout<<ans<<endl;
	}
}