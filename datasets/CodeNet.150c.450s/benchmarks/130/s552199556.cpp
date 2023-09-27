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
	int n,m;
	int data[110][110];
	int data2[110];
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin  >> data[i][j];
		}
	}
	for(int i=0;i<m;i++){
		cin >> data2[i];
	}
	for(int i=0;i<n;i++){
		int tmp = 0;
		for(int j=0;j<m;j++){
			tmp += data[i][j]*data2[j];
		}
		cout << tmp << endl;
	}

	return 0;
}