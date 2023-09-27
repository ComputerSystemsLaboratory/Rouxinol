#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin >> n;
	for(int i=1;i<=n;i++){
		x=i;
		if(x%3==0){
			cout << ' ' << i;
		}else{
			while(1){
				if(x%10==3){
					cout << ' ' << i;
					break;
				}
				x=x/10;
				if(x==0) break;
			}
		}
	}
	cout << endl;
}
