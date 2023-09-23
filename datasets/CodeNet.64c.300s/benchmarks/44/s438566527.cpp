// 2011/08/24 Tazoe

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		int T[10][10];
		for(int i=0; i<10; i++)
			for(int j=0; j<10; j++)
				if(i==j)
					T[i][j] = 0;
				else
					T[i][j] = INT_MAX;

		int m = -1;	// ¬Ì
		for(int i=0; i<n; i++){
			int a, b, c;
			cin >> a >> b >> c;
			T[a][b] = T[b][a] = c;
			if(m<a)
				m = a;
			if(m<b)
				m = b;
		}
		m = m+1;

		// tChÌASY
		for(int k=0; k<m; k++){
			for(int i=0; i<m; i++){
				for(int j=0; j<m; j++){
					if(T[i][k]==INT_MAX||T[k][j]==INT_MAX)	// «·ÆI[ot[·éÌÅ
						continue;
					if(T[i][j]>T[i][k]+T[k][j])
						T[i][j] = T[i][k]+T[k][j];
				}
			}
		}

		int m_min = INT_MAX;
		int s_min = INT_MAX;
		for(int i=0; i<m; i++){
			int sum = 0;
			for(int j=0; j<m; j++)
				sum += T[i][j];
			if(sum<s_min){
				m_min = i;
				s_min = sum;
			}
		}

		cout << m_min << ' ' << s_min << endl;
	}

	return 0;
}