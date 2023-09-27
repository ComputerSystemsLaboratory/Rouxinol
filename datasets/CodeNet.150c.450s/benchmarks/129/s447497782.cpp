#include <iostream>
#include <iomanip>
#include <string>
#include <stack>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

int main(){

	int r, c;
	int sum = 0;
	int RC[105][105] = {};
	int sumr[105] = {};
	int sumc[105] = {};

	cin >> r >> c;
	rep(i,r)
	rep(j,c){
		cin >> RC[i][j];
	}

	rep(i,r){

		rep(j,c){

			sumr[i] += RC[i][j];
			sumc[j] += RC[i][j];
			
			cout << RC[i][j] << " ";

			if(j == c - 1){
				cout << sumr[i];
				sum += sumr[i];
			}
		}
		cout << "\n";
	}

	rep(j, c){
		cout << sumc[j] << " ";
	}

	cout << sum << "\n";

	return 0;
}