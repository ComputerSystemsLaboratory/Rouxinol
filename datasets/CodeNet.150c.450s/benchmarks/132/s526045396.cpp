#include <bits/stdc++.h>
using namespace std;

int main() {
	while(true){
		int n,p,b=0;
		cin>>n>>p;
		if(n==0&&p==0) return 0;
		vector<int>h(n);
		b=p;
		while(true){
			for(int i=0;i<n;i++){
				if(b==0){
					b=h[i];
					h[i]=0;
				}
				else{
					b--;
					h[i]++;
					if(h[i]==p){
						cout<<i<<endl;
						goto e;
					}
				}
			}
		}
		e:;
	}
	return 0;
}
