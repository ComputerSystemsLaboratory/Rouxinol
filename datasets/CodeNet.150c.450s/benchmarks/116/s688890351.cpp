#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;

int a[MAX];

int main(void){
 	int n,k;
	while(cin >> n >> k,n|k){
		int ans=-1000000000;
		int cmax=0;
		for(int i=0;i<k;i++){
			cin >> a[i];
			cmax+=a[i];
		}
		ans=max(ans,cmax);
		for(int i=k;i<n;i++){
			cin >> a[i];
			cmax+=a[i];
			cmax-=a[i-k];
			ans=max(ans,cmax);
		}
		cout << ans << endl;
	}
	return 0;
}