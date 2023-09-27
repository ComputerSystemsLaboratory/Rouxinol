#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int v[5001];
int main(){
	int n;
	while(cin >> n,n){
		rep(i,n) cin >> v[i];
		int sum = 0 , mx = *max_element(v,v+n);
		for(int i = 0 ; i < n ; i++){
			if(sum+v[i]<0){
				sum = 0;
			}else{
				sum += v[i];
				mx = max(sum,mx);
			}
		}
		cout << mx << endl;
	}
}