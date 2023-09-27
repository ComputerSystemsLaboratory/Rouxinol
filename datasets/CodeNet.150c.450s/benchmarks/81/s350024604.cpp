// 2014/06/16 Tazoe

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

		int m = 0;		// ���̑���

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
          if(T[i][j] > T[i][k]+T[k][j])
            T[i][j] = T[i][k] + T[k][j];
        }
      }
    }
    int min_town_n;
    int min_town_time = INF;
    for(int k=0;k<m;k++){
      int sub = 0;
      for(int i=0;i<m;i++){
        if(T[k][i] != INF)
          sub += T[k][i];
          //cout << T[k][i] << ",";
      }
      //cout << " sub = " << sub << endl;
      if(min_town_time > sub){
        min_town_time = sub;
        min_town_n = k;
      }
    }
    cout << min_town_n << ' ' << min_town_time << endl;
	}

	return 0;
}

