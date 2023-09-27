#include <iostream>
using namespace std;

int ans,s,n;

void fanc(int sum,int i,int j){
	if (sum==s&&i==n) {
		ans++;
		return;
	}
	if (sum>s||i>n||j>9) {
		return;
	}
	fanc(sum+j,i+1,j+1);
	fanc(sum,i,j+1);
	
	return;
}


int main () {
	while(1){
		cin>>n>>s;
		if (n==0&&s==0) {
			break;
		}
		ans=0;
		fanc(0,0,0);
		cout << ans <<endl;
	}
}
			
			
			
			
			
			
			
			