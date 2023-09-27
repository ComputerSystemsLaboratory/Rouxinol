#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define ll long long
#define EPS 1.0e-8
#define MAX_N 100
typedef pair<int,int> Pii;
typedef pair<int,int> Pis;
const double PI=acos(-1);

int main(){
	int w, n;
	int stage[30];
	int a, b;
	cin >> w >> n;
	rep(i,w) stage[i] = i+1;

	rep(i,n){
		scanf("%d,%d",&a,&b);	
		stage[a-1] ^= stage[b-1];
		stage[b-1] ^= stage[a-1];
		stage[a-1] ^= stage[b-1];
	}

	rep(i,w)	cout << stage[i] << endl;
}