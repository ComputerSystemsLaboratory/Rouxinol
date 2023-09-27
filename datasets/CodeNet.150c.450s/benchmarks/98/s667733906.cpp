#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){
	while(1){
		int n,m,s1[105],s2[105],sum1=0,sum2=0;
		cin>>n>>m;
		if(n==0&&m==0) break;
		for(int i=0; i<n; i++){
			cin>>s1[i];
			sum1+=s1[i];
		}
		for(int i=0; i<m; i++){
			cin>>s2[i];
			sum2+=s2[i];
		}

		bool flag = false;
		int tt1,tt2, t1, t2, inf = 999999;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				t1 = sum1; t2 = sum2;
				t1 = t1 - s1[i] + s2[j];
				t2 = t2 + s1[i] - s2[j];
				if(t1 == t2){
					if(s1[i] + s2[j] < inf){
						inf = s1[i] + s2[j];
						tt1 = s1[i];
						tt2 = s2[j];
					}
					flag = true;
				}
			}
		}
		if(flag){
			cout<<tt1<<" "<<tt2<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	

	return 0;
}