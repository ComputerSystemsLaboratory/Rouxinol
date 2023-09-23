// 2013/11/25 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 100000000;

int main()
{
	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

		int T[10][10];
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				if(i==j){
					T[i][j] = 0;
				}
				else{
					T[i][j] = INF;
				}
			}
		}

		int m = 0;		// 町の総数

		for(int i=0; i<n; i++){
			int a, b, c;
			cin >> a >> b >> c;

			T[a][b] = T[b][a] = c;

			if(a+1>m){
				m = a+1;
			}
			if(b+1>m){
				m = b+1;
			}
		}

		for(int k=0; k<m; k++){
			for(int i=0; i<m; i++){
				for(int j=0; j<m; j++){
					T[i][j] = min(T[i][j], T[i][k]+T[k][j]);
				}
			}
		}

		int m_min = -1;
		int s_min = 1000000000;

		for(int i=0; i<m; i++){
			int s = 0;

			for(int j=0; j<m; j++){
				s += T[i][j];
			}

			if(s<s_min){
				m_min = i;
				s_min = s;
			}
		}

		cout << m_min << ' ' << s_min << endl;
	}

	return 0;
}