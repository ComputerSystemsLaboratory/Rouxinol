#include <iostream>
#include <string>
using namespace std;
int main(){
	string w[500], s;
	int wn[500] = {0}, n = -1;
	while(cin >> s){
		bool f = true;
		for(int i = 0; i < n; i++)
			if(s == w[i]){
				wn[i]++;
				f = false;
			}
		if(f){
			w[++n] = s;
			wn[n] = 1;
		}
	}
	int m = 0, mi, ml = 0, mli;
	for(int i = 0; i <= n; i++){
		if(wn[i] > m){
			m = wn[i];
			mi = i;
		}
		if((int)w[i].length() > ml){
			ml = (int)w[i].length();
			mli = i;
		}
	}
	cout << w[mi] << " " << w[mli] << endl;
	return 0;
}