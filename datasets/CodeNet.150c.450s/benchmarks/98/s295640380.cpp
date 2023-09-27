#include <iostream>

using namespace std;

int main(){
	int n, m;
	int s[100], t[100];
	while(cin >> n >> m, n){
		for(int i=0;i<n;i++) cin >> s[i];
		for(int j=0;j<m;j++) cin >> t[j];
		int es = 200, et = 200; 
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				swap(s[i], t[j]);
				int sumS = 0, sumT = 0;
				for(int k=0;k<n;k++) sumS += s[k];
				for(int k=0;k<m;k++) sumT += t[k];
				swap(s[i], t[j]);
				if(sumS==sumT && s[i]+t[j]<es+et){
					es = s[i];
					et = t[j];
				}
			}
		}
		if(es+et!=400) cout << es << " " << et << endl;
		else           cout << -1 << endl;
	}
}