#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		if(i%3==0){
			cout<<" "<<i;
			continue;
		}
			int num=i;
			while(num){
				if(num%10==3){
					cout<<" "<<i;
					break;
				}
				num/=10;
			}
	}
	cout<<"\n";
	return 0;
}