#include<iostream>
using namespace std;

int main(){
	int n, x, i, j, k, cnt;
	cin>>n>>x;
	while(n!=0 || x!=0){
		cnt=0;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				for(k=1;k<=n;k++){
					if(i!=j && j!=k && i!=k){
						if(i+j+k==x){
							cnt++;
						}
					}
				}
			}
		}
		cnt /= 6;
		cout << cnt << endl;
		cin>>n>>x;
	}
	return 0;
}