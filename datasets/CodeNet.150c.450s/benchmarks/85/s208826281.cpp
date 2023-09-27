#include <iostream>
#include <algorithm>

using namespace std;

static const int N = 100;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
int main(void){
	int n,p[N+1],m[N+1][N+1];
	cin>>n;

	loop(i,1,n+1){
		cin>>p[i-1]>>p[i];
	}

	loop(i,1,n+2)m[i][i] = 0;

	loop(l,2,n+1){
		loop(i,1,n-l+2){
			int j = i + l - 1;
			m[i][j] = (1<<21);
			loop(k,i,j){
				m[i][j] = min(m[i][j],m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]);
			}
		}
	}
	cout << m[1][n] << endl;
}