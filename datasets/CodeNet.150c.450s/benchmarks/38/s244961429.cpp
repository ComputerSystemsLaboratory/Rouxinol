#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
int n;
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	

	cin>>n;
	for(int i=0;i<n;i++){
		priority_queue <int > dp;
		for(int i=0;i<3;i++){
			int k;
			cin>>k;
			dp.push(k);
		}
		int a=dp.top();dp.pop();
		int b=dp.top();dp.pop();
		int c=dp.top();dp.pop();
		if(a*a==((b*b)+(c*c))){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}