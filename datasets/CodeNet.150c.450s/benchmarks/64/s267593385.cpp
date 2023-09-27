#include<bits/stdc++.h>
using namespace std;

int solve(int, int);

int n, q;
int A[2000], m;

int main(){
	
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> A[i];
	}
	
	cin >> q;
	
	for(int i = 0 ; i < q ; i++){
		cin >> m;
		int TorF = solve(0, m);
		if(TorF == true){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	return 0;
}
	
	int solve(int i, int m){
		if(m == 0){
			return true; // can make
		}
		
		if(i >= n){
			return false; //can't make
		}
		
		int tmp = solve(i + 1, m)||solve(i + 1, m - A[i]);
				  /*not use A[i]*/ /*use A[i]*/
		return tmp;
		}