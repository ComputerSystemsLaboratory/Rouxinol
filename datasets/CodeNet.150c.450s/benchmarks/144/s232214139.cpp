#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<int> > a(n,vector<int>(m));
	vector<vector<int> > b(m,vector<int>(l));
	vector<vector<long> > c(n,vector<long>(l));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
		for(int k=0;k<l;k++){
			c[i][k] = 0;
		}
	}
	for(int j=0;j<m;j++){
		for(int k=0;k<l;k++){
			cin >> b[j][k];
		}
	}
	for(int i=0;i<n;i++){
		for(int k=0;k<l;k++){
			for(int j=0;j<m;j++){
				c[i][k]+=a[i][j]*b[j][k];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int k=0;k<l;k++){
			if(!k) cout << c[i][k];
			else cout << " " << c[i][k];
		}
		cout << endl;
	}
	return 0;
}