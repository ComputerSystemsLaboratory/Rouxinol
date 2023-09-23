#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x,kazu = 0;
	while(true){
		cin>>n>>x;
		if(n == 0 && x == 0)break;
		for(int i = 1;i<=n-2;i++){
			for(int j = i+1;j<=n-1;j++){
				for(int k = j + 1;k<=n;k++){
					if(i+j+k == x)kazu++;
				}
			}
		}
		cout<<kazu<<endl;
		kazu = 0;
	}
	return 0;
}
