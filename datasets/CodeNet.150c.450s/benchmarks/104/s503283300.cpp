#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;


int main(){
	int w , n;
	int d1 , d2;
	cin >> w >> n;
	vector<int> ans(w+1);
	for(int i=1 ; i<=w ; i++){
		ans[i]=i;
	}
	for(int i=0 ; i<n ; i++){
		scanf("%d,%d" , &d1 , &d2);
		swap(ans[d1] , ans[d2]);
	}
	for(int i=1 ; i<=w ; i++){
		cout << ans[i] << endl; 
	}
	return 0;
}