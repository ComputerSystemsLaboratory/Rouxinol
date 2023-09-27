#include <algorithm>
#include <iostream>


using namespace std;

int main(){
	int n,r;
	while(cin >> n >> r,n){
		int p[n];
		fill(p,p+n,0);
		int s = r;
		for(int i = 0;;i++,i %= n){
			if(p[i] == r){
				cout << i << endl;
				break;
			} else {
				if(s == 0){
					s += p[i];
					p[i] = 0;
				} else {
					p[i]++;
					s--;
				}
			}
		}
	}
}