#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int i;
	int cnt=0;
	for (i=0;i<n;i++){
		int m;
		cin>>m;
		//m????´???°????????????
		int j,flg=0;
		for (j=2;j*j<=m;j++){
			if (m%j==0){
				flg=1;
				break;
			}
		}
		if (!flg){
			//?´???°
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}