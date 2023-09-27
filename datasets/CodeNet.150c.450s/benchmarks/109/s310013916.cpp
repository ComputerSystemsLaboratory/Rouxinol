#include <iostream>
using namespace std;

int main(void){
	int i,j,n,th,tm,ts,s[10000],g[10000],flg[10000];
	int max,sum;
	char c;

	while(cin>>n && n){
		max = sum = 0;

		for(i=0;i<n;i++){
			cin>>th>>c>>tm>>c>>ts;
			s[i] = ts + tm * 60 + th * 3600;
			cin>>th>>c>>tm>>c>>ts;
			g[i] = ts + tm * 60 + th * 3600;
		}

		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(s[i] > s[j] || s[i] == s[j] && g[i] > g[j]){
					swap(s[i],s[j]);
					swap(g[i],g[j]);
				}
			}
		}

		for(i=0;i<n;i++){
			for(j=0;j<i;j++){
				if(s[i] >= g[j] && flg[j]){
					sum--;
					flg[j] = 0;
				}
			}
			sum++;
			flg[i] = 1;
			if(max < sum) max = sum;
		}
		cout<<max<<endl;
	}

	return 0;
}