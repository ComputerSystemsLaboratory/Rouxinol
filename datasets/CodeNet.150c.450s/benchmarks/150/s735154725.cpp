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
int C[10001];

int main(){
	int n,a;
	cin >> n;
	REP(i,n){
		cin >> a;
		C[a]++;
	}
	int k=0;
	while(!C[k])k++;
	cout << k;C[k]--;
	for(int i=k;i<10001;i++){
		while(C[i]--)cout << " " << i ;
	}
	cout << endl;
}