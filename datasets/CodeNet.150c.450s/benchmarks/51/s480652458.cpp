#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[31],b[31];
	for(int i=1; i<=30; i++)
		a[i]=0;
	for(int i=1; i<=28; i++)
		cin>>b[i];
	for(int i=1; i<=30; i++){
		for(int j=1; j<=28; j++){
			if(i==b[j])
				a[i]=b[j];
		}
	}
	for(int i=1; i<=30; i++){
		if(a[i]==0)
			cout<<i<<endl;
	}
	return 0;
}