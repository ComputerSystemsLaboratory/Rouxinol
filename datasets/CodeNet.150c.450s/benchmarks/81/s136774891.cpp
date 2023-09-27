#include <iostream>
using namespace std;

const int INF = 1000000000;

int main()
{
	int T[10][10];
	int z=0;
	int a=0;
	int p[10];
	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

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

		for(int k=0;k<m;k++){
			for(int i=0;i<m;i++){
				for(int j=0;j<m;j++){
					if(T[i][j]>T[i][k]+T[k][j]){
						T[i][j]=T[i][k]+T[k][j];
					}
				}
			}
		}
		for(int i=0;i<m;i++){
			p[i]=0;
			for(int j=0;j<m;j++){
				p[i]=p[i]+T[i][j];
			}
		}
		z=p[0];
		for(int i=0;i<m;i++){
				if(z>p[i]){
					z=p[i];
				 a=i;
				}
		}
		
		cout<<a<<" "<<z<<endl;
	}

	return 0;
}