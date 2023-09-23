#include <iostream>
using namespace std;

int main(){
	int n, i;
	char c;
	int x;
	int a[52]={0};
	cin >> n;

	for(i=0; i<n; i++){
		cin >> c >> x;

		if(c=='S'){
			a[x-1]=1;
		}
		else if(c=='H'){
			a[x-1+13]=1;
		}
		else if(c=='C'){
			a[x-1+26]=1;
		}
		else if(c=='D'){
			a[x-1+39]=1;
		}
	}

	for(i=0; i<52; i++){
		if(a[i]==0){
			if(i<13) cout << 'S' << " " << i+1 << endl;
			else if(i<26) cout << 'H' << " " << i-12 << endl;
			else if(i<39) cout << 'C' << " " << i-25 << endl;
			else cout << 'D' << " " << i-38 << endl;

		}
	}
}