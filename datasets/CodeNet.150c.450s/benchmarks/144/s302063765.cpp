#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()

int main(){
	int n,m,l;
	int data[110][110];
	int data2[110][110];
	cin >> n >> m >> l;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> data[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<l;j++){
			cin >> data2[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<l;j++){
			ll int tmp = 0;
			for(int k=0;k<m;k++){
				tmp += data[i][k]*data2[k][j];
			}
			cout << tmp;
			if(j!=l-1) cout << " ";
		}
		cout << endl;

	}
	return 0;
}