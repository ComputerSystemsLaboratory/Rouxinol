#include <iostream>
#include <iomanip>
#include <math.h>
#include <utility>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
	int n;
	int *a,*S;
	while(cin >> n){
		if(n==0) break;
		a = new int[n];
		S = new int[n+1];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		
		int sum = 0;
		for(int i=0;i<n+1;i++){
			S[i]=sum;
			sum += a[i];
		}
		int ans=INT_MIN;
		for(int i=0;i<n+1;i++){
			for(int j=i+1;j<n+1;j++){
				ans = max(ans,S[j]-S[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}