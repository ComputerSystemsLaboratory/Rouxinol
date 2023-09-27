#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, r, a, b, temp, s=0, t=0;
	while(1){
		cin >> n >> r;
		int p[n];
		if(n==0 && r==0) break;
		for(int i=0; i<n; i++){
			p[i]=n-i;
		}
		for(int i=0;i<r; i++){
			cin >> a >> b;
			for(int j=0; j<b; j++){	
				for(int k=a-1+t;k>s;k--){
					temp=p[k];
					p[k]=p[k-1];
					p[k-1]=temp;
				}
				s++;
				t++;
			}
			s=0;
			t=0;
		}
		cout << p[0] << endl;
	}
}
