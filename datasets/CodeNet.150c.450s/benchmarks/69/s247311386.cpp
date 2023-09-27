#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;


bool f=false;

void dfs(int depth , int b , int c , int* a){
	if(depth==10) return;
	if(f) return;
	if(a[depth]>b) dfs(depth+1 , a[depth] , c , a);
	else if (a[depth]>c) dfs(depth+1 , b , a[depth] , a);
	else {
		f=true; 
		return;
	}
}


int main(){
	int a[10];
	int b[10],c[10];
	int n;
	cin >> n;
	for(int i=0;i<n ; ++i){
		for(int j=0;j<10;++j){
			cin >> a[j];
		}
		dfs(0 , 0 , 0 , a);
		cout << ( !f ? "YES" : "NO" ) << endl;
	}
	return 0; 
}