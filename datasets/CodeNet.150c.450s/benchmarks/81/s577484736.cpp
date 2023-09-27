// 2011/02/20 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		int tim[10][10];
		for(int i=0; i<10; i++)
			for(int j=0; j<10; j++)
				if(i==j)
					tim[i][j] = 0;
				else
					tim[i][j] = -1;

		int m = -1;
		for(int i=0; i<n; i++){
			int a, b, c;
			cin >> a >> b >> c;
			tim[a][b] = tim[b][a] = c;
			if(m<a)
				m = a;
			if(m<b)
				m = b;
		}
		m = m+1;

		for(int k=0; k<m; k++)
			for(int i=0; i<m; i++)
				for(int j=0; j<m; j++)
					if(tim[i][k]==-1||tim[k][j]==-1)
						continue;
					else if(tim[i][j]==-1)
						tim[i][j] = tim[i][k]+tim[k][j];
					else if(tim[i][j]>tim[i][k]+tim[k][j])
						tim[i][j] = tim[i][k]+tim[k][j];

		int m_min = 0;
		int s_min = 0;
		for(int i=0; i<m; i++)
			s_min += tim[0][i];

		for(int i=1; i<m; i++){
			int sum = 0;
			for(int j=0; j<m; j++)
				sum += tim[i][j];
			if(sum<s_min){
				m_min = i;
				s_min = sum;
			}
		}

		cout << m_min << ' ' << s_min << endl;
	}

	return 0;
}