#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int cnt=0, x, n, i, j;
	bool flg;
	double rootx;
	int rootintx;
	cin>>n;
	for(i=0;i<n;i++){
		flg = true;
		cin>>x;
		if(x==2){
			cnt++;
			continue;
		}
		if(x<2 || !(x%2)){
			continue;
		}
		rootx = sqrt(x);
		rootx = ceil(rootx);
		rootintx = int(rootx);
		for(j=2;j<=rootintx;j++){
			if(!(x%j)){
				flg=false;
				break;
			}
		}
		if(flg)cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}