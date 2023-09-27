#include <iostream>
#include <string>
#include <queue>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){

	int n, r;
	while(cin >> n >> r, n|r){

		vector<int> now(100), next(100);

		for(int i=0; i<n; i++){
			now[n-1-i] = i+1;
		}

		for(int i=0; i<r; i++){
			int p, c; cin >> p >> c;
			for(int j=0; j<n; j++){	
				if(j<c){
					next[j] = now[p-1+j];
				}else if(j<c+p-1){
					next[j] = now[j-c];
				}else{
					next[j] = now[j];
				}
			}
			now = next;
		}
		cout << now[0] << endl;
	}

	return 0;
}