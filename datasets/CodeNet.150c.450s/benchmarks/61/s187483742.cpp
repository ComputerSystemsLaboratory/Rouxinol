#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c,x,x2;
	while(1){
		cin>>n>>a>>b>>c>>x;	if(n==0)break;

		int ans=0;
		vector<int> y(n);
		for(int i=0;i<n;i++){
			cin>>y[i];
		}

		int pos=0;
		while(1){
			//printf("x=%d, y[%d]=%d\n",x,pos,y[pos]);
			if(x==y[pos]){
				pos++;
			}

			if(pos>=n)break;

			x=(a*x +b)%c;
			ans++;
			if(ans>10000){
				ans=-1;
				break;
			}


		}
		cout<<ans<<endl;
	}

	return 0;
}

