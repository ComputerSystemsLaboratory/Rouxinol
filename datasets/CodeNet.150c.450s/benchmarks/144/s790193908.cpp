#include <iostream>
using namespace std;

int A[110][110],B[110][110];
int n,m,l;
int main(){
	while(cin >> n >> m >> l){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin >> A[i][j];
			}
		}
		for(int i=1;i<=m;i++){
			for(int j=1;j<=l;j++){
				cin >> B[i][j];
			}
		}
		long long C[110][110] = {{0}};
		for(int i=1;i<=n;i++){
			for(int j=1;j<=l;j++){
				for(int k=1;k<=m;k++){
					C[i][j] += A[i][k]*B[k][j];
				}
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=l;j++){
				if(j!=l) cout << C[i][j] << " ";
				else cout << C[i][j] << endl;
			}
		}
	}
}
