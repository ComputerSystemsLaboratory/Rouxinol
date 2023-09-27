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

		int m = 0;     //How many towns are there?

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

		int d[10][10];
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				d[i][j]=T[i][j];
			}
		}
		for(int k=0;k<m;k++){
			for(int i=0;i<m;i++){
				for(int j=0;j<m;j++){
					if(d[i][j]>d[i][k]+d[k][j]){
						d[i][j]=d[i][k]+d[k][j];
					}
				}
			}
		} 

		int dis=INF,name=-1,tmp;
		for(int i=0;i<m;i++){
			tmp = 0;
			for(int j=0;j<m;j++){
				tmp += d[i][j];
			}
			if(dis>tmp){
				dis=tmp;
				name=i;
			}
		}
		cout << name << " " << dis << endl;


	}

	return 0;
}