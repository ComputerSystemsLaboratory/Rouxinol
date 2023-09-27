#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,r;
	while(cin >> n >> r,n){
		int s[n];
		for(int i=0;i<n;i++){
			s[i] = n-i;
		}
		for(int i=0;i<r;i++){
			int p,c;
			cin >> p >> c;
			rotate(s,s+p-1,s+p+c-1);
		}
		cout << s[0] << endl;
	}
}