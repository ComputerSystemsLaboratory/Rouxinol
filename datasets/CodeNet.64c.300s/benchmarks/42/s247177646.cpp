#include <iostream>

#define N 22

using namespace std;

int main(void)
{

	int n;
	int x1,y1;
	int m;
	char c;
	int l;

	int i,j;

	int f[N][N];

	int x,y;

	int count;


	while(1){

		for (i=0;i<N;i++) {
			for( j=0;j<N;j++){
				f[i][j] = 0;

	//			cout << f[i][j] << " ";
			}
	//		cout << endl;
		}

		cin >> n;
		if(n==0) break;


		for(i=0;i<n;i++){

			cin >> x1;
			cin >> y1;
			
			f[y1][x1] = 1;

		}


		cin >> m;


		x = 10;
		y = 10;
		count = 0;

		if (f[y][x] == 1) {
			f[y][x] = 0;
			count++;
		}

		for(i=0;i<m;i++){
			cin >> c;
			cin >> l;

			for(j=0;j<l;j++){

				if(c == 'N') y++;
				else if(c == 'S') y--;
				else if(c == 'E') x++;
				else if(c == 'W') x--;

				if(f[y][x] == 1){
					f[y][x] = 0;
					count++;
				}
			}
		}

		if(count == n) cout << "Yes" << endl;
		else cout << "No" << endl;



	}

	return 0;
}