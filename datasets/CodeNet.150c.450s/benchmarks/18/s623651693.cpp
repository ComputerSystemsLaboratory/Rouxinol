#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int debt=100000;
	for(int i=1;i<=n;i++){
		if((int(debt*1.05)%1000)!=0){
			debt=int(debt*1.05)-(int(debt*1.05)%1000)+1000;
		}else{
			debt=int(debt*1.05);
		}
	}
	cout<<debt<<endl;
	return 0;
}