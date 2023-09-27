#include <iostream>
using namespace std;

const int INF = 1000000000;

int main(){
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
    for(int i=0; i<m; i++){
      for(int j=0; j<m; j++){
        d[i][j] = T[i][j];
      }
    }

    for(int h=0; h<m; h++){
      for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
          if(d[i][j] > d[i][h]+d[h][j]){
            d[i][j] = d[i][h]+d[h][j];
          }
        }
      }
    }

    int ttl=0;
    int min=0;
    for(int i=0; i<m; i++){
      int t=0;
      for(int j=0; j<m; j++){
        t += d[i][j];
      }
      if(ttl==0 || ttl>t){
        ttl=t;
        min=i;
      }
    }

    cout << min << " " << ttl << '\n';
	}

	return 0;
}
