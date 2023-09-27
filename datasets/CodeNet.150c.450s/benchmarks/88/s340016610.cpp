#include <stdio.h>
#include <math.h>
#include <utility>
#define INF 0x7FFFFFFF

using namespace std;

int main(void){
	int w, h, minh, minc, i, j;
	pair<int,int> ans;
	while(1){
		scanf("%d%d",&h,&w);
		if(h == 0 && w == 0)
			break;
		minh = minc = INF;
		for(i = 1;i <= 150;i++){
			for(j = i + 1;j <= 150;j++){ // 入力値以上 答えはより小さく
				if(!(i == h && j == w) && (i * i + j * j > h * h + w * w || (i * i + j * j == h * h + w * w && i > h)) && ((i * i + j * j == minc && minh > i) || i * i + j * j < minc)){
					minh = i;
					minc = i * i + j * j;
					ans = pair<int,int>(i,j);
				}
			}
		}
		printf("%d %d\n",ans.first,ans.second);
	}
	return 0;
}