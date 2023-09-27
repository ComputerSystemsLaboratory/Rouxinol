#include <iostream>
#include <vector>
#include <cmath>
#define SIZE 10001
using namespace std;

int getNum(int x, int y, int z){
	return (x*x) + (y*y) + (z*z) + (x*y) + (y*z) + (z*x);
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n; cin>>n;
	int sqrtn = sqrt(n);
	vector<int> num(n+1);
	for(int x=1; x<=sqrtn; x++){
		for(int y=1; y<=sqrtn; y++){
			for(int z=1; z<=sqrtn; z++){
				int val = getNum(x, y, z);
				if(val <= n){
					num[val]++;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<num[i]<<'\n';
	}
}