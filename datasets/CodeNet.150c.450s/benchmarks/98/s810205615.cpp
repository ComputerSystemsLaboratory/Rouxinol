#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int N, M, t[100], h[100], st, sh, j,k, ans[2],flag;
	while(1){
		cin >> N >> M;
		if(!N)break;
		
		st=0;
		sh=0;
		for(j=0;j<N;j++){
			cin >> t[j];
			st += t[j];
		}
		for(j=0;j<M;j++){
			cin >> h[j];
			sh += h[j];
		}
		
		flag = 0;
		ans[0] = 103;
		ans[1] = 103;
		//cout << st << " " << sh << endl;
		for(j=0;j<N;j++){
			for(k=0;k<M;k++){
				if(st-t[j]+h[k] == sh+t[j]-h[k]){
					flag++;
					//cout << t[j] << " " << h[k] << endl;
					if(t[j] < ans[0]) ans[0] = t[j];
					if(h[k] < ans[1]) ans[1] = h[k];
				}
			}
		}
		if(flag>0) cout << ans[0] << " " << ans[1] << endl;
		else cout << "-1" << endl;
	}
	return 0;
}