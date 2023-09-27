#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#define   INF  100000
using namespace std;

int getTheNumberOfCoin(int n, int m, vector<int> c){
	vector<int> t;
	for(int i=0;i<=n;i++){
		t.push_back(INF);
	}
	t[0] = 0;

	for(int i=0;i<m;i++){
		for(int j=c[i];j<=n;j++){
			t[j] = min(t[j], t[j-c[i]]+1);
		}
	}

	return t[n];
}

int main(){
	int n, m, num;
	vector<int> c;

	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>num;
		c.push_back(num);
	}

	cout<<getTheNumberOfCoin(n, m, c)<<endl;

	return 0;
}