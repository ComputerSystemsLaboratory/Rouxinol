#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

typedef unsigned long long ull;
const int P = 1000000007;

void binarize(int n, vector<int> &bi){
	int amari;
	while(n!=0){
		amari = n%2;
		bi.push_back(amari);
		n=(n-amari)/2;
	}
	return;
}

int  main(){
	int n,m;
	cin >> m >> n;
	vector<int> bi;
	binarize(n,bi);
	int s=bi.size();

	vector<ull> PL(s);
	PL[0]=m%P;
	for(int i=1;i<s;i++){
		PL[i]=(PL[i-1]*PL[i-1])%P;
	}

	ull product=1;
	for (int i=0;i<s;i++){
		if(bi[i]){
			product = (product*PL[i])%P;
		}
	}
	cout << product <<endl;
	return 0;
}