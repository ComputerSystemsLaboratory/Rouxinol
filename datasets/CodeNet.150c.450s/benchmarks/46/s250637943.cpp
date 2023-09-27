#include <iostream>
#include <iomanip>
#include <string>
#include <stack>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

int main(){

	int N, x;
	while(1){

		int sum = 0;
		
		cin >> N >> x;
		if(N == 0 && x == 0){
			break;
		}
		
		REP(i,1,N-1){
			REP(j,i+1,N){
				REP(k,j+1,N+1){
					if(x == i + j + k){
						sum++;
					}
				}
			}
		}
		cout << sum << "\n";
	}

	return 0;
}