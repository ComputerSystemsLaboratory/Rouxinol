#include <iostream>
using namespace std;

int main(){
	int n;
	int a[10001] , b[10001];
	int scoreA=0 , scoreB=0;
	int i;
	while(1){
		cin>>n;
		if(n==0) break;
		for(i=0 ; i<n ; i++){
			cin >> a[i] >> b[i];
			if(a[i]>b[i]){
				scoreA+=a[i]+b[i];
			} else if (a[i]<b[i]){
				scoreB+=a[i]+b[i];
			} else {
				scoreA+=a[i];
				scoreB+=b[i];
			}
		}
		cout << scoreA << " " << scoreB << endl;
		scoreA=scoreB=0;
	}
	return 0;
}