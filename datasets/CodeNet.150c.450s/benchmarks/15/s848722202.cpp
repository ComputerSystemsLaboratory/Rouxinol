#include<iostream>
using namespace std;

int main(void){
	int n, q;
	cin >> n;
	int s[n];

	for(int i = 0; i < n; i++){
		cin >> s[i];
	}

	cin >> q;
	int t[q];

	for(int i = 0; i < q; i++){
		cin >> t[i];
	}
	int count = 0;
	for(int i = 0; i < q; i++){
		for(int j = 0; j < n; j++){
			if(t[i] == s[j]){
				count++;
				break;
			}
			else continue;
		
		}
	}
	cout << count << endl;
}
