#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int i,j,n,m,t[100],h[100],sum_t,sum_h,ans_t,ans_h;

	while(cin>>n>>m && n){
		for(i=sum_t=0;i<n;i++){cin>>t[i]; sum_t+=t[i];}
		for(i=sum_h=0;i<m;i++){cin>>h[i]; sum_h+=h[i];}
		sort(t,t+n);
		sort(h,h+m);

		for(i=j=0,ans_t=-1;i<n&&j<m;){
			if(sum_t-t[i]+h[j] == sum_h-h[j]+t[i]){
				ans_t = t[i];
				ans_h = h[j];
				break;
			}
			if(sum_t-t[i]+h[j] > sum_h-h[j]+t[i]) i++;
			else j++;
		}

		if(ans_t >= 0) cout<<ans_t<<" "<<ans_h<<endl;
		else cout<<"-1\n";
	}

	return 0;
}