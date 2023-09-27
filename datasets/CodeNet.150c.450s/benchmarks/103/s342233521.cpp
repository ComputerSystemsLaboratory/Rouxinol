#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int cnt=0;

void dfs(int depth , int k , int sum ){
	if(depth==n){
		if(k==0){
			cnt++;
			return;
		}
	}
	if(k<0) return;
	for(int i=sum; i<10 ; i++){
		dfs(depth+1 , k-i , i+1);
	}
}

int main(){
	int s;
	while(cin>> n >> s , (n || s)){
		dfs(0,s,0);
		cout << cnt << endl;
		cnt=0;
	}
	return 0; 
}