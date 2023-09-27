#include <bits/stdc++.h>

using namespace std;

int main(void){
	int n,p,can[55],bowl,i;
	while(true){
		cin >> n >> p;
		if(n==0 && p==0){
			break;
		}
		for(i=0; i<n; i++){
			can[i]=0;
		}
		bowl=p;
		i=0;
		while(true){
			if(bowl==0){
				bowl = can[i];
				can[i] = 0;
			}else{
				bowl--;
				can[i]++;
				if(can[i]==p){
					break;
				}
			}
			i++;
			i%=n;
		}
		cout << i << endl;
	}
	return 0;
}