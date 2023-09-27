#include <bits/stdc++.h>

#define rep(i,a,b) for(int i=a;i<b;i++)



using namespace std;



int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};



int main(){



	int W,H,sx,sy;

	string s[25];

	bool flag[25][25];



	while(1){

		cin>>W>>H;

		if(W==0&&H==0) break;

		for(int i=0; i<H; i++){

			cin>>s[i];

			for(int j=0; j<W; j++){

				if(s[i][j] == '@'){

					sx = j;

					sy = i;

				}

				flag[i][j] = false;

			}

		}





		queue<int> qx;

		queue<int> qy;

		qx.push(sx);

		qy.push(sy);



		flag[sy][sx] = true;



		int x, y, cnt = 1;

		while(!qx.empty()){



			x = qx.front();

			y = qy.front();

			qx.pop();

			qy.pop();



			for(int k=0; k<4; k++){

				int nx = x+dx[k], ny = y+dy[k];

				if(0<=nx && nx<W && 0<=ny && ny<H){

					if(s[ny][nx] == '.' && !flag[ny][nx]){

						qx.push(nx);

						qy.push(ny);

						flag[ny][nx] = true;

						cnt++;

					}

				}

			}

		}

		cout<<cnt<<endl;



	}	



	return 0;

}