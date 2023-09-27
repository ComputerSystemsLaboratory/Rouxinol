#include <iostream>
using namespace std;

const int INF = 1000000;
const int town_max = 10;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		int T[town_max][town_max];
		for(int i=0;i<town_max;i++){
			for(int j=0;j<town_max;j++){
				if(i==j)
					T[i][j] = 0;
				else
					T[i][j] = INF;
			}
		}

		int m = 0;	//頂点の数
		for(int i=0;i<n;i++){
			int a, b, c;	//町の番号は0から
			cin >> a >> b >> c;
			T[a][b] = T[b][a] = c;
			if(a+1>m)
				m = a+1;
			if(b+1>m)
				m = b+1;
		}

		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				for(int k=0;k<m;k++){
					if(T[j][k]>T[j][i]+T[i][k])
						T[j][k] = T[j][i]+T[i][k];
				}
			}
		}


		int T_min = INF;    //時間の総和の最小値
		int town_min = -1;  //最小になる町の番号
		for(int i=0;i<m;i++){
			int T_sum = 0;
			for(int j=0;j<m;j++){
				T_sum += T[i][j];   //総和を計算
			}
			if(T_sum<T_min){    //最小なら
				T_min = T_sum;  //それを最小値に
				town_min = i;   //そのときの町の番号
			}
		}

		cout << town_min << " " << T_min << endl;
	}
}
