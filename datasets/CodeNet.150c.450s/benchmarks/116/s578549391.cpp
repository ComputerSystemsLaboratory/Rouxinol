#include <iostream>
#include <algorithm>
using namespace std;

int a[100001],b[100001];

int f(int i,int j){
	return b[i] - b[j+1];
}

int main(){
	int n,k;
	while( cin >> n >> k , n||k ){
		b[0] = 0;
		for(int i=0 ; i < n ; i++ ){
			cin >> a[i];
			b[0] += a[i];
		}
		for(int i=1 ; i <= n ; i++ ){
			b[i] = b[i-1] - a[i-1];
		}
		int s = f(0,k-1);
		for(int i=1 ; i+k < n ; i++ ){
			s = max( s , f(i,i+k-1) );
		}
		cout << s << endl;
	}
}