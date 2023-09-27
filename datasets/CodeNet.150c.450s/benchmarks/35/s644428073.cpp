#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int max = -1000000;
		for(int i=0;i<n;i++){
			int b = 0;
			for(int j=i;j<n;j++){
				b += a[j];
				if(max<b) max = b;
			}
		}
		cout << max << endl;
	}
}