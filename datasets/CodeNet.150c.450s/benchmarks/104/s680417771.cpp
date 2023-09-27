#include <bits/stdc++.h>
using namespace std;

int r[31];
int main(){
	int w,n;
	cin >> w >> n;
	for(int i = 1 ; i <= w ; i++) r[i] = i;
	for(int i = 0 ; i < n ; i++){
		int a,b;
		scanf("%d,%d",&a,&b);
		swap(r[a],r[b]);
	}
	for(int i = 1 ; i <= w ; i++)
		cout << r[i] << endl;
}