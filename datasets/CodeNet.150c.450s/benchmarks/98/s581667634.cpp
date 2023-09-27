#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m,temp;
	while(1){
		
		cin >> n >> m;
		if(n==0 && m==0){break;}

		int s[100], p[100],suma=0,sumb=0,a,b,c=0;
		for (int i = 0; i < n; i++){
			cin >> s[i];
			suma+=s[i];
		}
		for (int i = 0; i < m; i++){
			cin >> p[i];
			sumb+=p[i];
		}
		for (int i=0;i<n;i++){
			for (int j=i+1;j<n;j++){
				if(s[i] > s[j]){
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
		for (int i=0;i<m;i++){
			for (int j=i+1;j<m;j++){
				if(p[i] > p[j]){
					temp = p[i];
					p[i] = p[j];
					p[j] = temp;
				}
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				a=(suma-s[i])+p[j];
				b=(sumb-p[j])+s[i];
				if(a==b){
					cout << s[i] << " " << p[j] << endl;
					c++;
					break;
				}
			}
			if(c!=0){
				break;
			}
			if(i==n-1){
				cout << -1 << endl;
			}
		}
	}
}
