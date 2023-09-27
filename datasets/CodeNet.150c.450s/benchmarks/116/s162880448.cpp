#include <iostream>
using namespace std;
int main(){
	int n,m,a[100000],s,ms;
	while(cin >> n >> m,n){
		ms = s = 0;
		for(int i = 0;i < n;++i){
			cin >> a[i];
			if(i < m){
				ms += a[i];
				s += a[i];
			}
			else{
				s = s + a[i] - a[i - m];
				if(ms < s) ms = s;
			}
		}
		cout << ms << endl;
	}
	return 0;
}