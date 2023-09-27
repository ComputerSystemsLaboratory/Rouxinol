#include<iostream>
using namespace std;
int n, s[10009], q, t[509], c = 0;

int main(){
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cin >> q;
	for(int i=0;i<q;i++){
		cin >> t[i];
	}

	for(int i=0;i<q;i++){
		int key = t[i];
		s[n] = key;
		int j = 0;
		while(s[j] != key){
			j++;
		}
		if(j != n) c++;
	}
	cout << c << endl;
}