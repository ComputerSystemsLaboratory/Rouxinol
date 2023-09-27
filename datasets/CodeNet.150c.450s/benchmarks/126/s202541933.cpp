#include <iostream>
#include <vector>

int main(){
	int a,b;
	while(std::cin >> a >> b){
		if(a==0&&b==0) break;

		int n;
		std::cin >> n;
		std::vector<std::vector<int>> map(a,std::vector<int>(b,1)); //地図

		for(int i=0;i<n;++i){
			int x,y;
			std::cin >> x >> y;
			if(x==0&&y==0) break;
			map[x-1][y-1]=0;
			if(x==1){
				for(int y1=y;y1<b;y1++){
					map[x-1][y1]=0;
				}
			}
			if(y==1){
				for(int x1=x;x1<a;x1++){
					map[x1][y-1]=0;
				}
			}
		}

		for(int i=1;i<a;++i){
			for(int j=1;j<b;++j){
				if(map[i][j]>0){
					map[i][j] = map[i-1][j]+map[i][j-1];
				}
			}
		}
		std::cout << map[a-1][b-1] << std::endl;
	}
	return 0;
}
