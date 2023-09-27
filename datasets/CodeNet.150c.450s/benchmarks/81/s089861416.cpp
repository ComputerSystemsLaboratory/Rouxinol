#include <iostream>
using namespace std;

const int INF = 1000000000;

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

		int m = 0;

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

		int minT[m][m];
		for(int i=0; i<m; i++){
			for(int j=0; j<m; j++){
				minT[i][j]=T[i][j];
			}
		}

		for(int k=0; k<m; k++){
			for(int i=0; i<m; i++){
				for(int j=0; j<m; j++){

					if(minT[i][j]>minT[i][k]+minT[k][j])
						minT[i][j]=minT[i][k]+minT[k][j];
				}
			}
		}

		int d[m];
		for(int i=0; i<m; i++){
			d[i]=0;
			for(int j=0; j<m; j++){
				d[i]=d[i]+minT[i][j];
			}
		}
		

		int min=0;
		for(int i=1; i<m; i++){
			if(d[min]>d[i])
				min=i;
		}

		cout <<min<<' '<<d[min]<<endl;

	}

	return 0;
}