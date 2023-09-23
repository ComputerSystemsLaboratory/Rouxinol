#include <iostream>
#include <set>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int d[31]={0},t;
	rep(i,28)cin >> t , d[t] = 1;
	for(int i=1;i<=30;i++){
		if(!d[i])cout << i << endl;
	}
}