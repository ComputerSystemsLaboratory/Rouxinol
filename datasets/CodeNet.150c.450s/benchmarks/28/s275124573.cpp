#include<iostream>
#include<vector>
using namespace std;

int feasibility(int n, int P, int k, std::vector<int> &S){
	int count=0;
	int acum=0;
	int i;
	for (i=0;i<n;i++){
		if (S[i]>P){
			return 0; 
		}
		acum+=S[i];
		if (acum>P){
			count++;
			acum=S[i];
		}
	}
	if (count+1 <= k){
		return 1;
	}else{
		return 0;
	}
}

int allocationSearch(int first,int last,int n,int k, std::vector<int> &S){
	if (last-first == 1){
		return last;
	}else{
		int m;
		m=(first + last)/2;
		if(feasibility(n,m,k,S)==1){
			return allocationSearch(first,m,n,k,S);
		}else{
			return allocationSearch(m,last,n,k,S);
			}
	}
}

int main(){
	int n,k,i;
	cin >> n >> k;
	vector<int> w(n);
	for (i=0;i<n;i++){
		cin >> w[i];
	}
	
	cout << allocationSearch(0,100000*10000,n,k,w) <<endl;
	return 0;
}