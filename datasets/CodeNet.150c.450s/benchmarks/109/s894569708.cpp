#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int t[30000];
		int sgn[30000];
		for(int i = 0;i < n;i++){
			int h,m,s;
			scanf("%02d:%02d:%02d",&h,&m,&s);
			t[2 * i] = h*60*60+m*60+s;
			sgn[2 * i] = 1;
			scanf("%02d:%02d:%02d",&h,&m,&s);
			t[2 * i + 1] = h*60*60+m*60+s;
			sgn[2 * i + 1] = -1;
		}
		for(int i = 0;i < 2*n;i++){
			for(int j = i+1;j < 2*n;j++){
				if(t[i] == t[j] ? sgn[i] > sgn[j] : t[i] > t[j]){
					swap(t[i],t[j]);
					swap(sgn[i],sgn[j]);
				}
			}
		}
		int cnt = 0;
		int ma = 0;
		for(int i = 0;i < 2*n;i++){
			//cout<<t[i]<<" "<<sgn[i]<<endl;
			cnt += sgn[i];
			ma = max(cnt,ma);
		}
		cout<<ma<<endl;
	}
}