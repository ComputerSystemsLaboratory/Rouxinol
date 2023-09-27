#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;
int main(){
	while(1){
		int n; cin >>n;
		if(n==0) break;
		int cnt=0;
		int sum=0;
		int right=1;
		for(int left=1;left<n;left++){
			while(sum<n){
				sum+=right;
				right++;
			}
			if(sum==n){
				cnt++;
			}
			if(sum>=n){
				sum-=left;
			}
		}
		cout << cnt << endl;
	}
}
