#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	
	int i,j,n,q;
	int count=0;
	
	cin >> n;
	int S[n];
	for (i=0;i<n;i++){
		cin >> S[i];
	}
	cin >> q;
	int T[q];
	for (i=0;i<q;i++){
		cin >> T[i];
	}
	
	for (j=0;j<q;j++){
		for (i=0;i<n;i++){
			if(S[i]==T[j]){
				count++;
				break;
			}
		}
	}
	
	cout << count << endl;
	
	return 0;
}