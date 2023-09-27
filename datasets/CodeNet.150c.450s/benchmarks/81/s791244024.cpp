// 0189
#include <iostream>
#include <vector>
#include <queue>
#define  N    10000000
using namespace std;

int main(){
	while(1){
		int n, a, b, c, num=0, min=N, m=0;
		int town[10][10], dis[10][10], total[10] = {0};

		cin>>n;
		if(n == 0)
			break;

		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				town[i][j] = N;
				if(i == j)
					dis[i][j] = 0;
				else
					dis[i][j] = N;
			}
		}

		for(int i=0;i<n;i++){
			cin>>a>>b>>c;
			town[a][b] = c;
			town[b][a] = c;

			if(num < a)
				num = a;
			if(num < b)
				num = b;
		}

		for(int i=0;i<=num;i++){
			queue<int> ver;
			ver.push(i);
			while(!ver.empty()){
				int x = ver.front();
				for(int j=0;j<=num;j++){
					if(dis[i][j] > dis[i][x] + town[x][j]){
						dis[i][j] = dis[i][x] + town[x][j];
						ver.push(j);
					}
				}
				ver.pop();
			}
		}

		for(int i=0;i<=num;i++){
			for(int j=0;j<=num;j++)
				total[i] += dis[i][j];

			if(total[i] < min){
				min = total[i];
				m = i;
			}
		}

		cout<<m<<" "<<total[m]<<endl;
	}
	return 0;
}