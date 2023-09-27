#include <iostream>
#include <climits>
using namespace std;

//#define INT_MAX

int n,k;
int w[100000];

bool ok(int P){
	int W = 0;
	int K = 1;
	for(int i=0;i<n;i++){
		if(W+w[i]<=P){
			W += w[i];
		}else if(w[i]<=P){
			K++;
			W = w[i];
		}else{
			return false;
		}
	}
	return K<=k;
}

int main(){
	while(cin >> n >> k && n>0){
		for(int i=0;i<n;i++){
			cin >> w[i];
		}
		int l=0;
		int h;
		h = INT_MAX;
		while(l+1<h){
			int m=(l+h)/2;
			if(ok(m)) h=m; else l=m;
		}
		cout << h << endl;
	}
}
