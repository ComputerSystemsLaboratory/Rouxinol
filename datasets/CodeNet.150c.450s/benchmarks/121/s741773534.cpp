#include <iostream>
using namespace std;

char F[102][102];

void DFS(int H,int W,char a){
	if(F[H][W]!=a)
	return;

	F[H][W]='.';

	DFS(H-1,W  ,a);
	DFS(H  ,W+1,a);
	DFS(H+1,W  ,a);
	DFS(H  ,W-1,a);
}


int main(){
	int N,M;
	while(1){

		cin >> N >> M;

		if(N==0&&M==0)
			return 0;

		for(int h=1; h<=N; h++)
			for(int w=1; w<=M; w++)
				cin>>F[h][w];

		int cnt=0;
		for(int h=1; h<=N; h++)
			for(int w=1; w<=M; w++)
				if(F[h][w]=='@'){
					cnt++;
					DFS(h,w,'@');
				}else if(F[h][w]=='#'){
					cnt++;
					DFS(h,w,'#');
				}
				else if(F[h][w]=='*'){
					cnt++;
					DFS(h,w,'*');
				}
				
		cout << cnt <<endl;

	}

}