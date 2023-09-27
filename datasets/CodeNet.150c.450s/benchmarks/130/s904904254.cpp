#include <iostream>
using namespace std;
int A[110][110];
int B[110];
int n,m;
int main(){
	while(cin >> n >> m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> A[i][j];
			}
		}
		for(int i=0;i<m;i++){
			cin >> B[i];
		}
		for(int i=0;i<n;i++){
			int b = 0;
			for(int j=0;j<m;j++){
				b += A[i][j]*B[j];
			}
			cout << b << endl;
		}
	}
}
