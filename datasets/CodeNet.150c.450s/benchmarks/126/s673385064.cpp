#include <iostream>
#include <cstring>
int main()
{
	int H,W,n;
	int mp[18][18];
	int check[18][18];
	
	while(std::cin>>W>>H,W|H){
		memset(mp,0,sizeof(mp));
		memset(check,0,sizeof(check));
		std::cin>>n;
		for(int i=0; i<n; i++){
			int x,y; std::cin>>x>>y;
			check[H-y+1][x] = -1;
		}
		mp[H][1] = 1;
		
		for(int i=H; i>0; i--){
			for(int j=1; j<=W; j++){
				if( check[i][j]==-1 )continue;
				mp[i][j] += mp[i+1][j] + mp[i][j-1];
			}
		}
		/*
		for(int i=0; i<H+1; i++){
			for(int j=0; j<W+1; j++)
				printf("%d ",mp[i][j]);
			puts("");
		}
		puts("");
		*/
		printf("%d\n",mp[1][W]);
	}
	return 0;
}