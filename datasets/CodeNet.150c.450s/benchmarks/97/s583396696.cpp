#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int n,d,h[200],w[200],a;
	h[0]=0;
	w[0]=0;
	while(1){
		cin >> n;
		if(n==0){
			return 0;
		}
		for(int i=1;i<n;i++){
			cin >> a >> d ;
			h[i]=h[a];
			w[i]=w[a];
			if(d==0){
				w[i]++;
			}
			if(d==1){
				h[i]--;
			}
			if(d==2){
				w[i]--;
			}
			if(d==3){
				h[i]++;
			}
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<n-i;j++){
				if(w[j]<w[j+1]){
					a=w[j];
					w[j]=w[j+1];
					w[j+1]=a;
				}
				if(h[j]<h[j+1]){
					a=h[j];
					h[j]=h[j+1];
					h[j+1]=a;
				}
			}
		}
		cout << w[0]-w[n-1]+1 << " " << h[0]-h[n-1]+1 << "\n";
	}
return 0;
}