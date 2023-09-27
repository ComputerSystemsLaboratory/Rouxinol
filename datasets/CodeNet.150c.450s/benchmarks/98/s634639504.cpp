#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, s[300];
	
	while(1){
		int sum1 = 0, sum2 = 0, ans[4] = {}, count = 0;
		cin>>n>>m;
		
		if(n == 0 && m == 0) break;
		
		for(int i = 0; i < n; i++){
			cin>>s[i];
			sum1 += s[i];
		}
		for(int j = 0; j < m; j++){
			cin>>s[n+j];
			sum2 += s[n+j];
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(sum1-s[i]+s[n+j] == sum2-s[n+j]+s[i]){
					if(count == 0){
						ans[0] = s[i];
						ans[1] = s[n+j];
					}else{
						if(ans[0]+ans[1] > s[i]+s[n+j]){
							ans[0] = s[i];
							ans[1] = s[n+j];
						}
					}
					count++;
				}
			}
		}
		
		if(count == 0)cout<<-1<<endl;
		else cout<<ans[0]<<" "<<ans[1]<<endl;
	}
	return 0;
}
