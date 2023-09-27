#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<cmath>

#define REP(i,n) for(int (i) = 0;(i) < (n);(i)++)
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> N(n+1);
	REP(i,n) cin >> N[i+1];
	REP(i,n){
		cout << "node " << i+1 <<": key = " << N[i+1] << ", ";
		if((i+1)/2>0)cout << "parent key = " << N[(i+1)/2] << ", ";
		if(i*2+2<=n) cout << "left key = " << N[i*2+2] << ", ";
		if(i*2+3<=n) cout << "right key = " << N[i*2+3] << ", ";
		cout << endl;
	}
}