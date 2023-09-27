#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	while(cin >> n){
		if(!n)
			break;
		int num = 0;
		int field[401][401];
		memset(field,-1,sizeof(field));
		field[200][200] = num++;
		for(int i=0;i<n-1;i++){
			int a,b;
			cin >> a >> b;
			for(int j=0;j<=400;j++){
				for(int k=0;k<=400;k++){
					if(field[j][k] == a){
						switch(b){
							case 0:
								field[j][k-1] = num++;
								break;
							case 1:
								field[j+1][k] = num++;
								break;
							case 2:
								field[j][k+1] = num++;
								break;
							case 3:
								field[j-1][k] = num++;
								break;
						}
					}
				}
			}
		}
		int sx=1000000,sy=1000000,gx=0,gy=0;
		for(int i=0;i<=400;i++){
			for(int j=0;j<=400;j++){
				if(field[i][j] != -1){
					sx = min(sx,j);
					sy = min(sy,i);
					gx = max(gx,j);
					gy = max(gy,i);
				}
			}
		}
		cout << gx-sx+1 << " " << gy-sy+1 << endl;
	}
	return 0;
}