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

    int d[m][m];
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        d[i][j]=T[i][j];
      }
    }
    for(int k=0;k<m;k++){
      int count=0;
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          if(d[i][j]>d[i][k]+d[k][j]){
            d[i][j]=d[i][k]+d[k][j];
						d[j][i]=d[j][k]+d[k][i];
          }
        }
      }
		}
		int l=0;
		int count=10000000;
		for(int i=0;i<m;i++){
			int a=0;
			for(int j=0;j<m;j++){
				int l=0;
				a+=d[i][j];
			}
			if(a<count){
				count=a;
				l=i;
			}
		}
		cout<<l<<" "<<count<<endl;
	}

	return 0;
}
